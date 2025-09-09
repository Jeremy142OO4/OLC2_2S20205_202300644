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


"int"                    { return TK_INT; }
"float"                  { return TK_FLOAT; }
"String"                 { return TK_STRING; }
"boolean"                { return TK_BOOL; }
"char"                   { return TK_CHAR; }
"if"                     { return TK_IF; }
"else"                   { return TK_ELSE; }
"while"                  { return TK_WHILE; }
"for"                    { return TK_FOR; }
"do"                     { return TK_DO; }
"switch"                 { return TK_SWITCH; }
"case"                   { return TK_CASE; }
"break"                  { return TK_BREAK; }
"default"                { return TK_DEFAULT; }
"continue"               { return TK_CONTINUE; }
"return"                 { return TK_RETURN; }
"void"                   { return TK_VOID; }
"main"                   { return TK_MAIN; }

"=="                     { return TK_IGUAL_IGUAL; }
"!="                     { return TK_DIFERENTE; }
">="                     { return TK_MAYOR_IGUAL; }
"<="                     { return TK_MENOR_IGUAL; }
">"                      { return TK_MAYOR; }
"<"                      { return TK_MENOR; }


"&&"                     { return TK_AND; }
"||"                     { return TK_OR; }
"!"                      { return TK_NOT; }

"="                      { return TK_IGUAL; }
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

":="                     { return TK_DOSPUNTOS_IGUAL; }

"("                      { return TK_PA; }
")"                      { return TK_PC; }
"["                      { return TK_CA; }
"]"                      { return TK_CC; }
"{"                      { return TK_LLA; }
"}"                      { return TK_LLC; }
";"                      { return TK_PTCOMA; }
":"                      { return TK_DOSPUNTOS; }
","                      { return TK_COMA; }

"+"                      { return TK_SUMA; }
"-"                      { return TK_RESTA; }
"*"                      { return TK_MULTIPLICACION; }
"/"                      { return TK_DIVISION; }
"%"                      { return TK_MODULAR; }

[0-9]+"."[0-9]+[fF]      { yytext[yyleng-1] = '\0';  yylval.str = strdup(yytext); return DECIMAL; }
[0-9]+"."[0-9]+          { yylval.str = strdup(yytext); return DECIMAL; }
[0-9]+                   { yylval.str = strdup(yytext); return INT; }
\"([^"\n])*\"            { yylval.str = strdup(yytext); return CADENA; }
\'[^\']\'                { yylval.str = strdup(yytext); return CARACTER; }
"true"|"false"           { yylval.str = strdup(yytext); return BOOL; }
[a-zA-Z_][a-zA-Z0-9_]*   { yylval.str = strdup(yytext); return ID; }
{espacios}               /* ignorar */
[\n\r]                   { yylineno++; yycolumn=1; }

.                        { yyerror("Illegal input"); }

%%