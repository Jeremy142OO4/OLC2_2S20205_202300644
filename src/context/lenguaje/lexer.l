%{
#include "parser.tab.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void yyerror(const char *s); 


int yycolumn = 1;


#define YY_USER_ACTION                                   \
    yylloc.first_line   = yylineno;                      \
    yylloc.first_column = yycolumn;                      \
    yylloc.last_line    = yylineno;                      \
    yylloc.last_column  = yycolumn + yyleng - 1;         \
    yycolumn           += yyleng;
%}


%option noyywrap yylineno


%x COMMENT2 COMMENTLINEA
espacios                [ \t]+
enteros                 [0-9]
letras                  [A-Za-z_]
alfanumerico            ({letras}|{enteros})
hexadecimal             [0-9A-F]
ID                      {letras}{alfanumerico}*
entero_s                {enteros}+
hex_integer             ${hexadecimal}{hexadecimal}*
float                   [0-9]+\.[0-9]+([eE][+-]?[0-9]+)?   
exponente               e[+-]?{enteros}+
real                    ({entero_s}\.{entero_s}?|{entero_s}?\.{entero_s}){exponente}?



string                  \"([^"\n]|\"\")+\"
bad_string              \"([^"\n]|\"\")+
%%


"//"                     BEGIN(COMMENTLINEA);
<COMMENTLINEA>[^\n\r]+   /* ignorar  */
<COMMENTLINEA><<EOF>>    yyerror("EOF in line comment");
<COMMENTLINEA>[\n\r]     BEGIN(INITIAL);

"/*"                     BEGIN(COMMENT2);
<COMMENT2>[^*\n\r]+      /* ignorar */
<COMMENT2>[\n\r]         ++yylineno;
<COMMENT2><<EOF>>        yyerror("EOF in block comment");
<COMMENT2>"*/"           BEGIN(INITIAL);
<COMMENT2>.              /* cualquier otro char  */



"System.out.println"     { return TK_PRINT; }
"final"                  { return TK_FINAL; }

"true"                   { return TRUE; }
"false"                  { return FALSE; }

"int"                    { return TK_INT; }
"float"                  { return TK_FLOAT; }
"String"                 { return TK_STRING; }
"boolean"                { return TK_BOOL; }
"char"                   { return TK_CHAR; }

">="                     { return TK_MAYOR_IGUAL; }
"<="                     { return TK_MENOR_IGUAL; }
">"                      { return TK_MAYOR; }
"<"                      { return TK_MENOR; }


"&&"                     { return TK_AND; }
"||"                     { return TK_OR; }
"!"                      { return TK_NOT; }

"+="                     { return TK_MAS_IGUAL; }
"-="                     { return TK_MENOS_IGUAL; }
"*="                     { return TK_POR_IGUAL; }
"/="                     { return TK_DIVIDIR_IGUAL; }
"%="                     { return TK_PORCENTAJE_IGUAL; }
"&="                     { return TK_AND_IGUAL; }
"|="                     { return TK_OR_IGUAL; }
"^="                     { return TK_POTENCIA_IGUAL; }
">>="                    { return TK_MAYOR_MAYOR_IGUAL; }
"<<="                    { return TK_MENOR_MENOR_IGUAL; }
"="                      { return TK_IGUAL; }
":="                     { return TK_DOSPUNTOS_IGUAL; }

"("                      { return TK_PA; }
")"                      { return TK_PC; }
"["                      { return TK_CA; }
"]"                      { return TK_CC; }

"+"                      { return TK_SUMA; }
"-"                      { return TK_RESTA; }
"*"                      { return TK_MULTIPLICACION; }
"/"                      { return TK_DIVISION; }
"%"                      { return TK_MODULAR; }

{float}                  { yylval.cadena = strdup(yytext); return FLOAT; }
{entero_s}               { yylval.entero = atoi(yytext); return ENTERO; }
{string}                 { yylval.cadena = malloc(yyleng); strncpy(yylval.cadena, &yytext[1], yyleng-2); yylval.cadena[yyleng-2] = '\0'; return STRING; }
{bad_string}             yyerror("Unterminated string");

{ID}                     { yylval.id = strdup(yytext); return ID; }

{espacios}               /* ignorar */
[\n\r]                   { yylineno++; yycolumn=1; }

.                        { yyerror("Illegal input"); }

%%