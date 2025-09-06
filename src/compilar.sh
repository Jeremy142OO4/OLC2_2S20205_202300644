#!/bin/bash

# Compilar lexer con Flex
flex -l -o ./lenguaje/lex.yy.c ./lenguaje/lexer.l

# Compilar parser con Bison
bison -dv -o ./lenguaje/parser.tab.c ./lenguaje/parser.y

# Compilar todo con GCC
gcc -o compilador main.c lenguaje/parser.tab.c lenguaje/lex.yy.c ast/ast.c class/entorno.c class/ejecutar.c -Iast -Ilenguaje -lm

# Mensaje final
echo "✅ Compilación completada. Ejecuta ./compilador"
