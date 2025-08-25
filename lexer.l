%{
    #include "parser.tab.h"
    #include <stdlib.h>   // para atoi
%}

%%

[0-9]+    { yylval.entero = atoi(yytext); return INT; }
[ \t]     ;                  /* ignorar espacios y tabs */
\n        { return '\n'; }
.         { return yytext[0]; }

%%j

int yywrap() {
    return 1;
}