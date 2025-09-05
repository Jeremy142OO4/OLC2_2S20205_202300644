/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_LENGUAJE_PARSER_TAB_H_INCLUDED
# define YY_YY_LENGUAJE_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TK_PRINT = 258,                /* TK_PRINT  */
    TK_INT = 259,                  /* TK_INT  */
    TK_FLOAT = 260,                /* TK_FLOAT  */
    TK_STRING = 261,               /* TK_STRING  */
    TK_BOOL = 262,                 /* TK_BOOL  */
    TK_CHAR = 263,                 /* TK_CHAR  */
    TK_FINAL = 264,                /* TK_FINAL  */
    TK_PA = 265,                   /* TK_PA  */
    TK_PC = 266,                   /* TK_PC  */
    TK_CA = 267,                   /* TK_CA  */
    TK_CC = 268,                   /* TK_CC  */
    TK_MAYOR = 269,                /* TK_MAYOR  */
    TK_MENOR = 270,                /* TK_MENOR  */
    TK_MAYOR_IGUAL = 271,          /* TK_MAYOR_IGUAL  */
    TK_MENOR_IGUAL = 272,          /* TK_MENOR_IGUAL  */
    TK_AND = 273,                  /* TK_AND  */
    TK_OR = 274,                   /* TK_OR  */
    TK_NOT = 275,                  /* TK_NOT  */
    TK_SUMA = 276,                 /* TK_SUMA  */
    TK_RESTA = 277,                /* TK_RESTA  */
    TK_MULTIPLICACION = 278,       /* TK_MULTIPLICACION  */
    TK_DIVISION = 279,             /* TK_DIVISION  */
    TK_MODULAR = 280,              /* TK_MODULAR  */
    TK_IGUAL = 281,                /* TK_IGUAL  */
    TK_MAS_IGUAL = 282,            /* TK_MAS_IGUAL  */
    TK_MENOS_IGUAL = 283,          /* TK_MENOS_IGUAL  */
    TK_POR_IGUAL = 284,            /* TK_POR_IGUAL  */
    TK_DIVIDIR_IGUAL = 285,        /* TK_DIVIDIR_IGUAL  */
    TK_PORCENTAJE_IGUAL = 286,     /* TK_PORCENTAJE_IGUAL  */
    TK_AND_IGUAL = 287,            /* TK_AND_IGUAL  */
    TK_OR_IGUAL = 288,             /* TK_OR_IGUAL  */
    TK_POTENCIA_IGUAL = 289,       /* TK_POTENCIA_IGUAL  */
    TK_MAYOR_MAYOR_IGUAL = 290,    /* TK_MAYOR_MAYOR_IGUAL  */
    TK_MENOR_MENOR_IGUAL = 291,    /* TK_MENOR_MENOR_IGUAL  */
    TK_DOSPUNTOS_IGUAL = 292,      /* TK_DOSPUNTOS_IGUAL  */
    TK_IGUAL_IGUAL = 293,          /* TK_IGUAL_IGUAL  */
    TK_DIFERENTE = 294,            /* TK_DIFERENTE  */
    INT = 295,                     /* INT  */
    DECIMAL = 296,                 /* DECIMAL  */
    CARACTER = 297,                /* CARACTER  */
    CADENA = 298,                  /* CADENA  */
    ID = 299,                      /* ID  */
    BOOL = 300                     /* BOOL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "./lenguaje/parser.y"

    char* str;

    struct ASTNode* node;

#line 115 "./lenguaje/parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_LENGUAJE_PARSER_TAB_H_INCLUDED  */
