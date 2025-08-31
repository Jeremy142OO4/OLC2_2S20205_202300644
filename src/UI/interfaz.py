# ide_tk.py
import tkinter as tk
from tkinter import ttk, font, filedialog
import subprocess
import tempfile
import os

# -------- utilidades --------
def scrolled_text(parent, **opts):
    """Crea un Text con scrollbar vertical."""
    frame = ttk.Frame(parent)
    yscroll = ttk.Scrollbar(frame, orient="vertical")
    txt = tk.Text(frame, wrap="word", yscrollcommand=yscroll.set, **opts)
    yscroll.config(command=txt.yview)
    yscroll.pack(side="right", fill="y")
    txt.pack(side="left", fill="both", expand=True)
    return frame, txt

class App(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("Compilador")
        self.geometry("1100x700")

        # fuente monoespaciada para editor/consola
        self.mono = font.nametofont("TkFixedFont")

        # ---- barra superior ----
        toolbar = ttk.Frame(self, padding=(6, 6))
        toolbar.pack(side="top", fill="x")

        # Botón que EJECUTA el compilador con archivo temporal
        btn_run = ttk.Button(toolbar, text="Ejecutar", command=lambda: self.run_compiler_with_temp("./src/compilador"))
        btn_run.pack(side="left")

        # Botón opcional: solo copia a consola (sin ejecutar)
        btn_copy = ttk.Button(toolbar, text="Copiar a consola", command=self.on_copy_clicked)
        btn_copy.pack(side="left", padx=(6, 0))

        # ---- paned vertical: arriba (contenido), abajo (consola) ----
        vpaned = ttk.PanedWindow(self, orient="vertical")
        vpaned.pack(side="top", fill="both", expand=True)

        # ---- paned horizontal dentro de arriba: izq editor, der notebook ----
        top_pane = ttk.PanedWindow(vpaned, orient="horizontal")
        vpaned.add(top_pane, weight=4)

        # editor
        editor_frame, self.editor = scrolled_text(top_pane, font=self.mono, undo=True)
        demo = (
            ""
        )
        self.editor.insert("1.0", demo)
        top_pane.add(editor_frame, weight=3)

        # notebook (AST / Símbolos / Errores)
        notebook = ttk.Notebook(top_pane)
        top_pane.add(notebook, weight=2)

        # AST (texto)
        ast_frame, self.ast_text = scrolled_text(notebook, font=self.mono, state="normal")
        self.ast_text.insert(
            "1.0",
            "Program\n"
            " ├─ FunctionDecl: sumar(a:int, b:int) -> int\n"
            " │   └─ Return\n"
            " │       └─ BinaryExpr '+'\n"
            " │           ├─ Identifier 'a'\n"
            " │           └─ Identifier 'b'\n"
            " └─ VarDecl: x:int = 42\n"
        )
        self.ast_text.config(state="disabled")
        notebook.add(ast_frame, text="AST")

        # Símbolos (tabla)
        symbols_frame = ttk.Frame(notebook)
        self.symbols = ttk.Treeview(
            symbols_frame,
            columns=("nombre", "tipo", "ambito"),
            show="headings",
            height=12,
        )
        for col, txt in zip(("nombre", "tipo", "ambito"), ("Nombre", "Tipo", "Ámbito")):
            self.symbols.heading(col, text=txt)
            self.symbols.column(col, width=120, anchor="w")
        self.symbols.pack(side="left", fill="both", expand=True)
        sb_sym = ttk.Scrollbar(symbols_frame, orient="vertical", command=self.symbols.yview)
        self.symbols.configure(yscrollcommand=sb_sym.set)
        sb_sym.pack(side="right", fill="y")

        # datos de ejemplo
        self.symbols.insert("", "end", values=("x", "int", "global"))
        self.symbols.insert("", "end", values=("sumar", "función(int,int)->int", "global"))

        notebook.add(symbols_frame, text="Símbolos")

        # Errores (tabla)
        errors_frame = ttk.Frame(notebook)
        self.errors = ttk.Treeview(
            errors_frame,
            columns=("linea", "col", "msg"),
            show="headings",
            height=12,
        )
        for col, txt, w in (("linea", "Línea", 70), ("col", "Columna", 80), ("msg", "Mensaje", 360)):
            self.errors.heading(col, text=txt)
            self.errors.column(col, width=w, anchor="w")
        self.errors.pack(side="left", fill="both", expand=True)
        sb_err = ttk.Scrollbar(errors_frame, orient="vertical", command=self.errors.yview)
        self.errors.configure(yscrollcommand=sb_err.set)
        sb_err.pack(side="right", fill="y")

        # ejemplo
        self.errors.insert("", "end", values=(3, 15, "Token inesperado '}'"))
        notebook.add(errors_frame, text="Errores")

        # Consola (abajo)
        console_frame, self.console = scrolled_text(vpaned, font=self.mono, state="normal", height=8)
        self.console.config(bg="#111", fg="#ddd", insertbackground="#ddd")
        self.console_insert("[Listo] Consola inicializada.")
        vpaned.add(console_frame, weight=1)

        # posicion inicial de divisores (opcional)
        self.after(50, lambda: vpaned.sashpos(0, int(self.winfo_height()*0.7)))

    # ---- helpers de consola ----
    def console_insert(self, text):
        self.console.insert("end", text + "\n")
        self.console.see("end")

    # ---- botón: SOLO copiar editor -> consola (append) ----
    def on_copy_clicked(self):
        text = self.editor.get("1.0", "end-1c")
        if not text.strip():
            self.console_insert("[Copiar] (editor vacío)")
            return
        self.console_insert("[Copiar] Contenido del editor:")
        self.console_insert(text)

    # ---- Ejecutar binario externo ./compilador sobre archivo temporal ----
    def run_compiler_with_temp(self, compiler="./src/compilador"):
        text = self.editor.get("1.0", "end-1c")
        if not text.strip():
            self.console_insert("[Ejecutar] (editor vacío)")
            return

        # crear archivo temporal con el código del editor
        fd, tmp_path = tempfile.mkstemp(suffix=".lang", prefix="fuente_")
        os.close(fd)
        with open(tmp_path, "w", encoding="utf-8") as f:
            f.write(text)

        cmd = [compiler, tmp_path]
        #self.console_insert(f"[Ejecutar] Lanzando: {' '.join(cmd)}")

        try:
            # Nota: text=True captura stdout/stderr como str (UTF-8 por defecto)
            proc = subprocess.run(cmd, capture_output=True, text=True)
            if proc.stdout:
                #self.console_insert("[STDOUT]")
                self.console_insert(proc.stdout.rstrip("\n"))
            #if proc.stderr:
                #self.console_insert("[STDERR]")
                #self.console_insert(proc.stderr.rstrip("\n"))
            #self.console_insert(f"[Exit] Código de salida: {proc.returncode}")

        except FileNotFoundError:
            self.console_insert("[Error] No se encontró el ejecutable del compilador.")
        except Exception as e:
            self.console_insert(f"[Error] {e}")
        finally:
            try:
                os.remove(tmp_path)
            except OSError:
                pass

if __name__ == "__main__":
    App().mainloop()
