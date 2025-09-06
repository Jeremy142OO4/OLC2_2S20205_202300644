%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "../ast/ast.h"
extern int yylex();
void yyerror(const char *s);
struct ASTNode* root = NULL;
%}




%locations


%union {
    char* str;

    struct ASTNode* node;
}




%token TK_PRINT
%token TK_INT TK_FLOAT TK_STRING TK_BOOL TK_CHAR
%token TK_FINAL


%token TK_PA TK_PC    
%token TK_CA TK_CC    


%token TK_MAYOR TK_MENOR
%token TK_MAYOR_IGUAL TK_MENOR_IGUAL


%token TK_AND TK_OR TK_NOT


%token TK_SUMA TK_RESTA
%token TK_MULTIPLICACION TK_DIVISION TK_MODULAR


%token TK_IGUAL
%token TK_MAS_IGUAL TK_MENOS_IGUAL
%token TK_POR_IGUAL TK_DIVIDIR_IGUAL TK_PORCENTAJE_IGUAL
%token TK_AND_IGUAL TK_OR_IGUAL
%token TK_POTENCIA_IGUAL
%token TK_MAYOR_MAYOR_IGUAL TK_MENOR_MENOR_IGUAL
%token TK_DOSPUNTOS_IGUAL
%token TK_IGUAL_IGUAL TK_DIFERENTE

%token <str> INT DECIMAL CARACTER CADENA ID BOOL 


%type <node> inicio listainstrucciones instruccion IMPRIMIR
%type <node> TIPO expr ARITMETICOS RELACIONALES LOGICOS
%type <node> DECLARACION ASIGNACION 
%type <str> OP_ASIGNACION

%left TK_OR
%left TK_AND
%right TK_NOT
%left TK_MENOR TK_MENOR_IGUAL TK_MAYOR TK_MAYOR_IGUAL TK_IGUAL_IGUAL TK_DIFERENTE 
%left TK_SUMA TK_RESTA 
%left TK_MULTIPLICACION TK_DIVISION TK_MODULAR



%%

inicio:
    listainstrucciones { printf("Analisis completado.\n"); root = $1;}
    ;

listainstrucciones:
      listainstrucciones instruccion    {$$ = ast_link($1, $2);}
    | instruccion                       { $$ = $1; }
    ;

instruccion:
      IMPRIMIR
    | DECLARACION
    | ASIGNACION 
    ;

DECLARACION:
      TIPO ID TK_IGUAL expr             { $$ = ast_var_decl($2, $1, $4); }
    | TIPO ID                           { $$ = ast_var_decl($2, $1, NULL); }
    | TK_FINAL TIPO ID TK_IGUAL expr    {  $$ = ast_var_decl_const($3, $2, $5); }
    ;

ASIGNACION:
      expr OP_ASIGNACION expr                   { $$ = ast_assign($2, $3, $1); }
    ;

IMPRIMIR:
    TK_PRINT TK_PA expr TK_PC           { $$ = ast_print_stmt($3);}


TIPO:
      TK_INT     { $$ = ast_type("int");}
    | TK_STRING  { $$ = ast_type("string");}
    | TK_FLOAT   { $$ = ast_type("float");}
    | TK_BOOL    { $$ = ast_type("bool");}
    | TK_CHAR    { $$ = ast_type("char");}
    ;

expr: 
    TK_PA expr TK_PC            {$$ = $2;}
    | TK_PA TIPO TK_PC expr     { $$ = ast_cast($4, $2); }
    | INT                       { $$ = ast_literal($1); }
    | DECIMAL                   { $$ = ast_literal($1); }
    | CARACTER                  { $$ = ast_literal($1); }
    | CADENA                    { $$ = ast_literal($1); }
    | BOOL                      { $$ = ast_literal($1); }
    | ID                        { $$ = ast_identifier($1); }
    | ARITMETICOS               { $$ = $1; }
    | RELACIONALES              { $$ = $1; }
    | LOGICOS                   { $$ = $1; }
    ;



ARITMETICOS:
      expr TK_SUMA expr             { $$ = ast_binop("+", $1, $3); }
    | expr TK_RESTA expr            { $$ = ast_binop("-", $1, $3); }
    | expr TK_MULTIPLICACION expr   { $$ = ast_binop("*", $1, $3); }
    | expr TK_DIVISION expr         { $$ = ast_binop("/", $1, $3); }
    | expr TK_MODULAR expr          { $$ = ast_binop("%", $1, $3); }
    ;

OP_ASIGNACION:
      TK_IGUAL               { $$ = strdup("="); }
    | TK_MAS_IGUAL           { $$ = strdup("+="); }
    | TK_MENOS_IGUAL         { $$ = strdup("-="); }
    | TK_POR_IGUAL           { $$ = strdup("*="); }
    | TK_DIVIDIR_IGUAL       { $$ = strdup("/="); }
    | TK_PORCENTAJE_IGUAL    { $$ = strdup("%="); }
    | TK_AND_IGUAL           { $$ = strdup("&="); }
    | TK_OR_IGUAL            { $$ = strdup("|="); }
    | TK_POTENCIA_IGUAL      { $$ = strdup("^="); }   
    | TK_MAYOR_MAYOR_IGUAL   { $$ = strdup(">>="); }
    | TK_MENOR_MENOR_IGUAL   { $$ = strdup("<<="); }
    | TK_DOSPUNTOS_IGUAL     { $$ = strdup(":="); }
    ;


RELACIONALES:
      expr TK_IGUAL_IGUAL expr      { $$ = ast_binop("==", $1, $3); }
    | expr TK_DIFERENTE expr        { $$ = ast_binop("!=", $1, $3); }
    | expr TK_MAYOR_IGUAL expr      { $$ = ast_binop(">=", $1, $3); }
    | expr TK_MENOR_IGUAL expr      { $$ = ast_binop("<=", $1, $3); }
    | expr TK_MAYOR expr            { $$ = ast_binop(">", $1, $3); }
    | expr TK_MENOR expr            { $$ = ast_binop("<", $1, $3); }
    ;


LOGICOS:
      expr TK_AND expr              { $$ = ast_binop("&&", $1, $3); }
    | expr TK_OR expr               { $$ = ast_binop("||", $1, $3); }
    | TK_NOT expr                   { $$ = ast_unop("!", $2); }
    ;


%%






void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}