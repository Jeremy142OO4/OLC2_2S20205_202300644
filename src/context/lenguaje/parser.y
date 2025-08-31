%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
//#include "../ast/ast.h"
extern int yylex();
void yyerror(const char *s);
//struct ASTNode* root = NULL;
%}




%locations


%union {
    char* cadena;
    int entero;
    char* id;
    struct ASTNode* node;
}


%token <entero> ENTERO
%token <cadena> FLOAT STRING ID TRUE FALSE

%token TK_PRINT  TK_IGUAL TK_DOSPUNTOS_IGUAL TK_PA TK_PC TK_CA TK_CC TK_FINAL


%token TK_MAYOR_IGUAL TK_MENOR_IGUAL TK_MAYOR TK_MENOR


%token <cadena> TK_INT TK_FLOAT TK_STRING TK_BOOL TK_CHAR

%token TK_AND TK_OR TK_NOT

%token TK_SUMA TK_RESTA TK_MULTIPLICACION TK_DIVISION TK_MODULAR

%token TK_MAS_IGUAL TK_MENOS_IGUAL TK_POR_IGUAL TK_DIVIDIR_IGUAL TK_PORCENTAJE_IGUAL
%token TK_AND_IGUAL TK_OR_IGUAL TK_POTENCIA_IGUAL TK_MAYOR_MAYOR_IGUAL TK_MENOR_MENOR_IGUAL

//%type <node> inicio listainstrucciones instruccion
//%type <node> DECLARACION 
//%type <node> TIPO expr ARITMETICOS RELACIONALES LOGICOS


%left TK_OR
%left TK_AND
%right TK_NOT
%left TK_MENOR TK_MENOR_IGUAL TK_MAYOR TK_MAYOR_IGUAL
%left TK_SUMA TK_RESTA 
%left TK_MULTIPLICACION TK_DIVISION TK_MODULAR



%%

inicio:
    listainstrucciones { printf("Analisis completado.\n");}
    ;

listainstrucciones:
      listainstrucciones instruccion {}
    | instruccion {}
    ;

instruccion:
    TK_PRINT TK_PA expr TK_PC { printf("Print: "); }
    | DECLARACION
    ;

DECLARACION:
      TIPO ID TK_IGUAL expr { printf("Declaracion con asignación: %s\n", $2); }
    | TIPO ID {  printf("Declaracion sin asignar: %s\n", $2); }
    | TK_FINAL TIPO ID TK_IGUAL expr { printf("Declaracion final (constante): %s\n", $3); }
    ;



TIPO:
      TK_INT     { }
    | TK_STRING  { }
    | TK_FLOAT   { }
    | TK_BOOL    { }
    | TK_CHAR    { }
    ;

expr:
    ARITMETICOS { printf("Expresion aritmetica\n"); }
    | RELACIONALES { printf("Expresion relacional\n"); }
    | LOGICOS { printf("Expresion logica\n"); }
    | ENTERO {char buffer[32]; sprintf(buffer, "%d", $1); printf("Entero: %d\n", $1);}
    | STRING { printf("Cadena: %s\n", $1);}
    | FLOAT { printf("Float: %s\n", $1); }
    | TRUE { printf("Booleano: true\n");}
    | FALSE { printf("Booleano: false\n");}
    | ID { printf("Identificador: %s\n", $1);}
    ;



ARITMETICOS:
    expr TK_SUMA expr { printf("Suma\n"); }
    | expr TK_RESTA expr { printf("Resta\n"); }
    | expr TK_MULTIPLICACION expr { printf("Multiplicacion\n"); }
    | expr TK_DIVISION expr { printf("Division\n"); }
    | expr TK_MODULAR expr { printf("Modulo\n"); }
    ;


RELACIONALES:
    expr TK_MAYOR_IGUAL expr { printf("mayor o igual\n"); }
    | expr TK_MENOR_IGUAL expr { printf("menor o igual\n"); }
    | expr TK_MAYOR expr { printf("mayor\n"); }
    | expr TK_MENOR expr { printf("menor\n"); }
    ;


LOGICOS:
    expr TK_AND expr { printf("AND\n"); }
    | expr TK_OR expr { printf("OR\n"); }
    | TK_NOT expr { printf("NOT\n"); }
    ;


%%






void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}