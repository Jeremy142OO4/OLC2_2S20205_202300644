#include <gtk/gtk.h>

typedef struct {
    GtkWidget *editor_view;
    GtkWidget *console_view;
    GtkWidget *ast_view;
    GtkWidget *symbols_view;
    GtkWidget *errors_view;

    GtkListStore *symbols_store;
    GtkListStore *errors_store;
} App;

// ---------- Utilidades ---------- #
static void console_append(GtkTextView *view, const char *text) {
    GtkTextBuffer *buf = gtk_text_view_get_buffer(view);
    GtkTextIter end;
    gtk_text_buffer_get_end_iter(buf, &end);
    gtk_text_buffer_insert(buf, &end, text, -1);
    gtk_text_buffer_insert(buf, &end, "\n", -1);
}

static GtkWidget* make_scrolled(GtkWidget *child) {
    GtkWidget *sc = gtk_scrolled_window_new(NULL, NULL);
    gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(sc), GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);
    gtk_container_add(GTK_CONTAINER(sc), child);
    return sc;
}

// ---------- Símbolos ----------
static GtkWidget* build_symbols(App *app) {
    app->symbols_store = gtk_list_store_new(3, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING); // nombre, tipo, ambito
    GtkWidget *tree = gtk_tree_view_new_with_model(GTK_TREE_MODEL(app->symbols_store));

    GtkCellRenderer *r = gtk_cell_renderer_text_new();
    GtkTreeViewColumn *c1 = gtk_tree_view_column_new_with_attributes("Nombre", r, "text", 0, NULL);
    GtkTreeViewColumn *c2 = gtk_tree_view_column_new_with_attributes("Tipo",   r, "text", 1, NULL);
    GtkTreeViewColumn *c3 = gtk_tree_view_column_new_with_attributes("Ámbito", r, "text", 2, NULL);

    gtk_tree_view_append_column(GTK_TREE_VIEW(tree), c1);
    gtk_tree_view_append_column(GTK_TREE_VIEW(tree), c2);
    gtk_tree_view_append_column(GTK_TREE_VIEW(tree), c3);
    gtk_tree_view_set_headers_visible(GTK_TREE_VIEW(tree), TRUE);

    // Datos de ejemplo
    GtkTreeIter it;
    gtk_list_store_append(app->symbols_store, &it);
    gtk_list_store_set(app->symbols_store, &it, 0, "x", 1, "int", 2, "global", -1);
    gtk_list_store_append(app->symbols_store, &it);
    gtk_list_store_set(app->symbols_store, &it, 0, "sumar", 1, "función(int,int)->int", 2, "global", -1);

    return make_scrolled(tree);
}

// ---------- Errores ----------
static GtkWidget* build_errors(App *app) {
    app->errors_store = gtk_list_store_new(3, G_TYPE_INT, G_TYPE_INT, G_TYPE_STRING); // linea, col, msg
    GtkWidget *tree = gtk_tree_view_new_with_model(GTK_TREE_MODEL(app->errors_store));

    GtkCellRenderer *r = gtk_cell_renderer_text_new();
    GtkTreeViewColumn *c1 = gtk_tree_view_column_new_with_attributes("Línea",   r, "text", 0, NULL);
    GtkTreeViewColumn *c2 = gtk_tree_view_column_new_with_attributes("Columna", r, "text", 1, NULL);
    GtkTreeViewColumn *c3 = gtk_tree_view_column_new_with_attributes("Mensaje", r, "text", 2, NULL);

    gtk_tree_view_append_column(GTK_TREE_VIEW(tree), c1);
    gtk_tree_view_append_column(GTK_TREE_VIEW(tree), c2);
    gtk_tree_view_append_column(GTK_TREE_VIEW(tree), c3);

    // Ejemplo
    GtkTreeIter it;
    gtk_list_store_append(app->errors_store, &it);
    gtk_list_store_set(app->errors_store, &it, 0, 3, 1, 15, 2, "Token inesperado '}'", -1);

    return make_scrolled(tree);
}

// ---------- AST ----------
static GtkWidget* build_ast(App *app) {
    app->ast_view = gtk_text_view_new();
    gtk_text_view_set_editable(GTK_TEXT_VIEW(app->ast_view), FALSE);
    gtk_text_view_set_monospace(GTK_TEXT_VIEW(app->ast_view), TRUE);

    const char *ast_demo =
        "Program\n"
        " ├─ FunctionDecl: sumar(a:int, b:int) -> int\n"
        " │   └─ Return\n"
        " │       └─ BinaryExpr '+'\n"
        " │           ├─ Identifier 'a'\n"
        " │           └─ Identifier 'b'\n"
        " └─ VarDecl: x:int = 42\n";

    GtkTextBuffer *buf = gtk_text_view_get_buffer(GTK_TEXT_VIEW(app->ast_view));
    gtk_text_buffer_set_text(buf, ast_demo, -1);

    return make_scrolled(app->ast_view);
}

// ---------- Consola ----------
static GtkWidget* build_console(App *app) {
    app->console_view = gtk_text_view_new();
    gtk_text_view_set_editable(GTK_TEXT_VIEW(app->console_view), FALSE);
    gtk_text_view_set_monospace(GTK_TEXT_VIEW(app->console_view), TRUE);
    console_append(GTK_TEXT_VIEW(app->console_view), "[Listo] Consola inicializada.");
    return make_scrolled(app->console_view);
}

// ---------- Editor (GtkTextView) ----------
static GtkWidget* build_editor(App *app) {
    GtkWidget *view = gtk_text_view_new();
    gtk_text_view_set_monospace(GTK_TEXT_VIEW(view), TRUE);
    gtk_text_view_set_wrap_mode(GTK_TEXT_VIEW(view), GTK_WRAP_WORD_CHAR);
    gtk_text_view_set_editable(GTK_TEXT_VIEW(view), TRUE);

    const char *demo_code =
        "#include <stdio.h>\n"
        "int sumar(int a, int b){ return a + b; }\n"
        "int main(){ int x = sumar(2, 3); printf(\"x=%d\\n\", x); return 0; }\n";
    GtkTextBuffer *buf = gtk_text_view_get_buffer(GTK_TEXT_VIEW(view));
    gtk_text_buffer_set_text(buf, demo_code, -1);

    app->editor_view = view;
    return make_scrolled(view);
}

// ---------- Botón Ejecutar ----------
static void on_run_clicked(GtkButton *btn, gpointer user_data) {
    (void)btn;
    App *app = (App*)user_data;
    console_append(GTK_TEXT_VIEW(app->console_view), "[Ejecutar] Aquí iría la ejecución del código…");
}

// ---------- Ventana principal ----------
int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    App app = (App){0};

    // Ventana
    GtkWidget *win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(win), "Compilador");
    gtk_window_set_default_size(GTK_WINDOW(win), 1100, 700);
    g_signal_connect(win, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Contenedor raíz: VBox (barra arriba + paned abajo)
    GtkWidget *vbox_root = gtk_box_new(GTK_ORIENTATION_VERTICAL, 6);
    gtk_container_add(GTK_CONTAINER(win), vbox_root);

    // Barra superior con botón "Ejecutar"
    GtkWidget *hbox_toolbar = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 6);
    gtk_box_pack_start(GTK_BOX(vbox_root), hbox_toolbar, FALSE, FALSE, 0);

    GtkWidget *btn_run = gtk_button_new_with_label("Ejecutar");
    gtk_box_pack_start(GTK_BOX(hbox_toolbar), btn_run, FALSE, FALSE, 0);

    // Layout principal: paned vertical (arriba contenido, abajo consola)
    GtkWidget *vpaned = gtk_paned_new(GTK_ORIENTATION_VERTICAL);
    gtk_box_pack_start(GTK_BOX(vbox_root), vpaned, TRUE, TRUE, 0);

    // Arriba: paned horizontal (izq editor, der notebook AST/Símbolos/Errores)
    GtkWidget *hpaned = gtk_paned_new(GTK_ORIENTATION_HORIZONTAL);
    gtk_paned_pack1(GTK_PANED(vpaned), hpaned, TRUE, FALSE);

    // Editor
    GtkWidget *editor_sc = build_editor(&app);
    gtk_paned_pack1(GTK_PANED(hpaned), editor_sc, TRUE, FALSE);

    // Notebook derecho
    GtkWidget *notebook = gtk_notebook_new();
    GtkWidget *ast_sc = build_ast(&app);
    GtkWidget *symbols_sc = build_symbols(&app);
    GtkWidget *errors_sc = build_errors(&app);

    gtk_notebook_append_page(GTK_NOTEBOOK(notebook), ast_sc,     gtk_label_new("AST"));
    gtk_notebook_append_page(GTK_NOTEBOOK(notebook), symbols_sc, gtk_label_new("Símbolos"));
    gtk_notebook_append_page(GTK_NOTEBOOK(notebook), errors_sc,  gtk_label_new("Errores"));

    gtk_paned_pack2(GTK_PANED(hpaned), notebook, FALSE, FALSE);
    gtk_paned_set_position(GTK_PANED(hpaned), 680);     // ancho inicial editor

    // Consola abajo
    GtkWidget *console_sc = build_console(&app);
    gtk_paned_pack2(GTK_PANED(vpaned), console_sc, FALSE, FALSE);
    gtk_paned_set_position(GTK_PANED(vpaned), 520);     // alto inicial contenido superior

    // Señal del botón
    g_signal_connect(btn_run, "clicked", G_CALLBACK(on_run_clicked), &app);

    gtk_widget_show_all(win);
    gtk_main();
    return 0;
}
