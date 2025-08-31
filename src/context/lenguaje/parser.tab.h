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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    ENTERO = 258,                  /* ENTERO  */
    FLOAT = 259,                   /* FLOAT  */
    STRING = 260,                  /* STRING  */
    ID = 261,                      /* ID  */
    TRUE = 262,                    /* TRUE  */
    FALSE = 263,                   /* FALSE  */
    TK_PRINT = 264,                /* TK_PRINT  */
    TK_IGUAL = 265,                /* TK_IGUAL  */
    TK_DOSPUNTOS_IGUAL = 266,      /* TK_DOSPUNTOS_IGUAL  */
    TK_PA = 267,                   /* TK_PA  */
    TK_PC = 268,                   /* TK_PC  */
    TK_CA = 269,                   /* TK_CA  */
    TK_CC = 270,                   /* TK_CC  */
    TK_FINAL = 271,                /* TK_FINAL  */
    TK_MAYOR_IGUAL = 272,          /* TK_MAYOR_IGUAL  */
    TK_MENOR_IGUAL = 273,          /* TK_MENOR_IGUAL  */
    TK_MAYOR = 274,                /* TK_MAYOR  */
    TK_MENOR = 275,                /* TK_MENOR  */
    TK_INT = 276,                  /* TK_INT  */
    TK_FLOAT = 277,                /* TK_FLOAT  */
    TK_STRING = 278,               /* TK_STRING  */
    TK_BOOL = 279,                 /* TK_BOOL  */
    TK_CHAR = 280,                 /* TK_CHAR  */
    TK_AND = 281,                  /* TK_AND  */
    TK_OR = 282,                   /* TK_OR  */
    TK_NOT = 283,                  /* TK_NOT  */
    TK_SUMA = 284,                 /* TK_SUMA  */
    TK_RESTA = 285,                /* TK_RESTA  */
    TK_MULTIPLICACION = 286,       /* TK_MULTIPLICACION  */
    TK_DIVISION = 287,             /* TK_DIVISION  */
    TK_MODULAR = 288,              /* TK_MODULAR  */
    TK_MAS_IGUAL = 289,            /* TK_MAS_IGUAL  */
    TK_MENOS_IGUAL = 290,          /* TK_MENOS_IGUAL  */
    TK_POR_IGUAL = 291,            /* TK_POR_IGUAL  */
    TK_DIVIDIR_IGUAL = 292,        /* TK_DIVIDIR_IGUAL  */
    TK_PORCENTAJE_IGUAL = 293,     /* TK_PORCENTAJE_IGUAL  */
    TK_AND_IGUAL = 294,            /* TK_AND_IGUAL  */
    TK_OR_IGUAL = 295,             /* TK_OR_IGUAL  */
    TK_POTENCIA_IGUAL = 296,       /* TK_POTENCIA_IGUAL  */
    TK_MAYOR_MAYOR_IGUAL = 297,    /* TK_MAYOR_MAYOR_IGUAL  */
    TK_MENOR_MENOR_IGUAL = 298     /* TK_MENOR_MENOR_IGUAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "parser.y"

    char* cadena;
    int entero;
    char* id;
    struct ASTNode* node;

#line 114 "parser.tab.h"

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


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
