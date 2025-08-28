#!/bin/bash

# Compilar lexer con Flex
flex -l ./context/lenguaje/lexer.l

# Compilar parser con Bison
bison -dv ./context/lenguaje/parser.y

# Compilar todo con GCC
gcc -o compilador main.c ./context/lenguaje/parser.tab.c ./context/lenguaje/lex.yy.c -lfl

# Mensaje final
echo "✅ Compilación completada. Ejecuta ./compilador"
