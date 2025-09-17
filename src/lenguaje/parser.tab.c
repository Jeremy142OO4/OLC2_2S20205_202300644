/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "./lenguaje/parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "../ast/ast.h"
extern int yylex();
void yyerror(const char *s);
struct ASTNode* root = NULL;

#line 81 "./lenguaje/parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_PRINT = 3,                   /* TK_PRINT  */
  YYSYMBOL_TK_IF = 4,                      /* TK_IF  */
  YYSYMBOL_TK_ELSE = 5,                    /* TK_ELSE  */
  YYSYMBOL_TK_WHILE = 6,                   /* TK_WHILE  */
  YYSYMBOL_TK_FOR = 7,                     /* TK_FOR  */
  YYSYMBOL_TK_DO = 8,                      /* TK_DO  */
  YYSYMBOL_TK_SWITCH = 9,                  /* TK_SWITCH  */
  YYSYMBOL_TK_CASE = 10,                   /* TK_CASE  */
  YYSYMBOL_TK_CONTINUE = 11,               /* TK_CONTINUE  */
  YYSYMBOL_TK_BREAK = 12,                  /* TK_BREAK  */
  YYSYMBOL_TK_RETURN = 13,                 /* TK_RETURN  */
  YYSYMBOL_TK_VOID = 14,                   /* TK_VOID  */
  YYSYMBOL_TK_MAIN = 15,                   /* TK_MAIN  */
  YYSYMBOL_TK_DEFAULT = 16,                /* TK_DEFAULT  */
  YYSYMBOL_TK_NUEVO = 17,                  /* TK_NUEVO  */
  YYSYMBOL_TK_INT = 18,                    /* TK_INT  */
  YYSYMBOL_TK_FLOAT = 19,                  /* TK_FLOAT  */
  YYSYMBOL_TK_STRING = 20,                 /* TK_STRING  */
  YYSYMBOL_TK_BOOL = 21,                   /* TK_BOOL  */
  YYSYMBOL_TK_CHAR = 22,                   /* TK_CHAR  */
  YYSYMBOL_TK_PARSEINT = 23,               /* TK_PARSEINT  */
  YYSYMBOL_TK_PARSEFLOAT = 24,             /* TK_PARSEFLOAT  */
  YYSYMBOL_TK_PARSEDOUBLE = 25,            /* TK_PARSEDOUBLE  */
  YYSYMBOL_TK_VALUEOF = 26,                /* TK_VALUEOF  */
  YYSYMBOL_TK_JOIN = 27,                   /* TK_JOIN  */
  YYSYMBOL_TK_DOUBLE = 28,                 /* TK_DOUBLE  */
  YYSYMBOL_TK_EQUALS = 29,                 /* TK_EQUALS  */
  YYSYMBOL_TK_LENGTH = 30,                 /* TK_LENGTH  */
  YYSYMBOL_TK_FINAL = 31,                  /* TK_FINAL  */
  YYSYMBOL_TK_INDEXOF = 32,                /* TK_INDEXOF  */
  YYSYMBOL_TK_ADD = 33,                    /* TK_ADD  */
  YYSYMBOL_TK_PA = 34,                     /* TK_PA  */
  YYSYMBOL_TK_PC = 35,                     /* TK_PC  */
  YYSYMBOL_TK_LLA = 36,                    /* TK_LLA  */
  YYSYMBOL_TK_LLC = 37,                    /* TK_LLC  */
  YYSYMBOL_TK_PTCOMA = 38,                 /* TK_PTCOMA  */
  YYSYMBOL_TK_DOSPUNTOS = 39,              /* TK_DOSPUNTOS  */
  YYSYMBOL_TK_COMA = 40,                   /* TK_COMA  */
  YYSYMBOL_TK_CA = 41,                     /* TK_CA  */
  YYSYMBOL_TK_CC = 42,                     /* TK_CC  */
  YYSYMBOL_TK_MAYOR = 43,                  /* TK_MAYOR  */
  YYSYMBOL_TK_MENOR = 44,                  /* TK_MENOR  */
  YYSYMBOL_TK_MAYOR_IGUAL = 45,            /* TK_MAYOR_IGUAL  */
  YYSYMBOL_TK_MENOR_IGUAL = 46,            /* TK_MENOR_IGUAL  */
  YYSYMBOL_TK_AND = 47,                    /* TK_AND  */
  YYSYMBOL_TK_OR = 48,                     /* TK_OR  */
  YYSYMBOL_TK_NOT = 49,                    /* TK_NOT  */
  YYSYMBOL_TK_SUMA = 50,                   /* TK_SUMA  */
  YYSYMBOL_TK_RESTA = 51,                  /* TK_RESTA  */
  YYSYMBOL_TK_MULTIPLICACION = 52,         /* TK_MULTIPLICACION  */
  YYSYMBOL_TK_DIVISION = 53,               /* TK_DIVISION  */
  YYSYMBOL_TK_MODULAR = 54,                /* TK_MODULAR  */
  YYSYMBOL_TK_IGUAL = 55,                  /* TK_IGUAL  */
  YYSYMBOL_TK_MAS_IGUAL = 56,              /* TK_MAS_IGUAL  */
  YYSYMBOL_TK_MENOS_IGUAL = 57,            /* TK_MENOS_IGUAL  */
  YYSYMBOL_TK_POR_IGUAL = 58,              /* TK_POR_IGUAL  */
  YYSYMBOL_TK_DIVIDIR_IGUAL = 59,          /* TK_DIVIDIR_IGUAL  */
  YYSYMBOL_TK_PORCENTAJE_IGUAL = 60,       /* TK_PORCENTAJE_IGUAL  */
  YYSYMBOL_TK_AND_IGUAL = 61,              /* TK_AND_IGUAL  */
  YYSYMBOL_TK_OR_IGUAL = 62,               /* TK_OR_IGUAL  */
  YYSYMBOL_TK_POTENCIA_IGUAL = 63,         /* TK_POTENCIA_IGUAL  */
  YYSYMBOL_TK_MAYOR_MAYOR_IGUAL = 64,      /* TK_MAYOR_MAYOR_IGUAL  */
  YYSYMBOL_TK_MENOR_MENOR_IGUAL = 65,      /* TK_MENOR_MENOR_IGUAL  */
  YYSYMBOL_TK_DOSPUNTOS_IGUAL = 66,        /* TK_DOSPUNTOS_IGUAL  */
  YYSYMBOL_TK_IGUAL_IGUAL = 67,            /* TK_IGUAL_IGUAL  */
  YYSYMBOL_TK_DIFERENTE = 68,              /* TK_DIFERENTE  */
  YYSYMBOL_INT = 69,                       /* INT  */
  YYSYMBOL_DECIMAL = 70,                   /* DECIMAL  */
  YYSYMBOL_CARACTER = 71,                  /* CARACTER  */
  YYSYMBOL_CADENA = 72,                    /* CADENA  */
  YYSYMBOL_ID = 73,                        /* ID  */
  YYSYMBOL_BOOL = 74,                      /* BOOL  */
  YYSYMBOL_DOUBLE = 75,                    /* DOUBLE  */
  YYSYMBOL_UMINUS = 76,                    /* UMINUS  */
  YYSYMBOL_YYACCEPT = 77,                  /* $accept  */
  YYSYMBOL_inicio = 78,                    /* inicio  */
  YYSYMBOL_listainstrucciones = 79,        /* listainstrucciones  */
  YYSYMBOL_instruccion = 80,               /* instruccion  */
  YYSYMBOL_DECLARACION = 81,               /* DECLARACION  */
  YYSYMBOL_DECLARAR_VECTOR = 82,           /* DECLARAR_VECTOR  */
  YYSYMBOL_ASIGNACION = 83,                /* ASIGNACION  */
  YYSYMBOL_IMPRIMIR = 84,                  /* IMPRIMIR  */
  YYSYMBOL_INCREMENTO_DECREMENTO = 85,     /* INCREMENTO_DECREMENTO  */
  YYSYMBOL_IF = 86,                        /* IF  */
  YYSYMBOL_BREAK = 87,                     /* BREAK  */
  YYSYMBOL_CONTINUAR = 88,                 /* CONTINUAR  */
  YYSYMBOL_RETORNAR = 89,                  /* RETORNAR  */
  YYSYMBOL_SWITCH = 90,                    /* SWITCH  */
  YYSYMBOL_CASES = 91,                     /* CASES  */
  YYSYMBOL_CASE = 92,                      /* CASE  */
  YYSYMBOL_WHILE = 93,                     /* WHILE  */
  YYSYMBOL_FOR = 94,                       /* FOR  */
  YYSYMBOL_PARAMETROS = 95,                /* PARAMETROS  */
  YYSYMBOL_DECLARAR_FUNCION = 96,          /* DECLARAR_FUNCION  */
  YYSYMBOL_LLAMADA_PROCEDIMIENTO = 97,     /* LLAMADA_PROCEDIMIENTO  */
  YYSYMBOL_TIPO = 98,                      /* TIPO  */
  YYSYMBOL_expr = 99,                      /* expr  */
  YYSYMBOL_ARITMETICOS = 100,              /* ARITMETICOS  */
  YYSYMBOL_OP_ASIGNACION = 101,            /* OP_ASIGNACION  */
  YYSYMBOL_RELACIONALES = 102,             /* RELACIONALES  */
  YYSYMBOL_LOGICOS = 103,                  /* LOGICOS  */
  YYSYMBOL_VALORES = 104,                  /* VALORES  */
  YYSYMBOL_LLAMADA_FUNCION = 105           /* LLAMADA_FUNCION  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  82
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1591

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  257

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   331


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    76,    76,    80,    81,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     103,   104,   105,   109,   113,   117,   118,   122,   125,   126,
     130,   131,   132,   136,   140,   143,   144,   148,   152,   153,
     157,   158,   162,   166,   170,   171,   172,   176,   177,   181,
     187,   188,   189,   190,   191,   192,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   224,   225,
     226,   227,   228,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   248,   249,   250,   251,   252,
     253,   254,   259,   260,   261,   266,   267,   268,   272
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TK_PRINT", "TK_IF",
  "TK_ELSE", "TK_WHILE", "TK_FOR", "TK_DO", "TK_SWITCH", "TK_CASE",
  "TK_CONTINUE", "TK_BREAK", "TK_RETURN", "TK_VOID", "TK_MAIN",
  "TK_DEFAULT", "TK_NUEVO", "TK_INT", "TK_FLOAT", "TK_STRING", "TK_BOOL",
  "TK_CHAR", "TK_PARSEINT", "TK_PARSEFLOAT", "TK_PARSEDOUBLE",
  "TK_VALUEOF", "TK_JOIN", "TK_DOUBLE", "TK_EQUALS", "TK_LENGTH",
  "TK_FINAL", "TK_INDEXOF", "TK_ADD", "TK_PA", "TK_PC", "TK_LLA", "TK_LLC",
  "TK_PTCOMA", "TK_DOSPUNTOS", "TK_COMA", "TK_CA", "TK_CC", "TK_MAYOR",
  "TK_MENOR", "TK_MAYOR_IGUAL", "TK_MENOR_IGUAL", "TK_AND", "TK_OR",
  "TK_NOT", "TK_SUMA", "TK_RESTA", "TK_MULTIPLICACION", "TK_DIVISION",
  "TK_MODULAR", "TK_IGUAL", "TK_MAS_IGUAL", "TK_MENOS_IGUAL",
  "TK_POR_IGUAL", "TK_DIVIDIR_IGUAL", "TK_PORCENTAJE_IGUAL",
  "TK_AND_IGUAL", "TK_OR_IGUAL", "TK_POTENCIA_IGUAL",
  "TK_MAYOR_MAYOR_IGUAL", "TK_MENOR_MENOR_IGUAL", "TK_DOSPUNTOS_IGUAL",
  "TK_IGUAL_IGUAL", "TK_DIFERENTE", "INT", "DECIMAL", "CARACTER", "CADENA",
  "ID", "BOOL", "DOUBLE", "UMINUS", "$accept", "inicio",
  "listainstrucciones", "instruccion", "DECLARACION", "DECLARAR_VECTOR",
  "ASIGNACION", "IMPRIMIR", "INCREMENTO_DECREMENTO", "IF", "BREAK",
  "CONTINUAR", "RETORNAR", "SWITCH", "CASES", "CASE", "WHILE", "FOR",
  "PARAMETROS", "DECLARAR_FUNCION", "LLAMADA_PROCEDIMIENTO", "TIPO",
  "expr", "ARITMETICOS", "OP_ASIGNACION", "RELACIONALES", "LOGICOS",
  "VALORES", "LLAMADA_FUNCION", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-183)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     656,    -2,     1,     9,    10,    12,   -19,   -12,    68,   -46,
    -183,  -183,  -183,  -183,  -183,    17,    19,    20,    21,    22,
    -183,   171,    37,   690,   748,   748,  -183,  -183,  -183,  -183,
     131,  -183,  -183,    75,   656,  -183,  -183,  -183,  -183,  -183,
      38,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
     -37,   810,  -183,  -183,  -183,  -183,   748,   748,   748,     3,
     748,  -183,  -183,  -183,    67,   850,    44,   748,   748,   748,
     748,   748,    23,   748,    63,   876,  1523,  1523,  -183,    65,
     748,   748,  -183,  -183,  -183,    69,   -25,    76,   748,   748,
     748,   748,   748,   748,   719,   777,   748,   748,   748,  -183,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,   748,   748,   748,   902,   928,   954,   748,    41,   980,
     748,   748,  -183,   748,   748,   171,  1006,  1032,  1058,  1084,
    1110,    66,  1136,   748,  -183,   748,  1162,    83,  1189,    47,
     171,  -183,   748,   748,    16,    16,    16,    16,  1523,   134,
    -183,   -15,   748,   -15,    95,    95,    95,    16,    16,  1215,
      88,    92,    93,  1241,   -27,    94,    97,  1268,    98,    78,
    -183,  -183,  -183,  -183,   748,   748,   748,   102,  1294,   748,
     119,   215,    81,   123,  1320,  1346,  -183,  -183,   656,   656,
     748,     2,  -183,  -183,   124,   122,   138,  1372,  1398,   121,
    -183,  -183,   748,    -7,   147,  -183,  -183,   218,   291,   139,
    1503,   748,   156,   159,     2,   656,   171,  -183,  -183,  -183,
    -183,  1424,   171,   748,   656,   192,  -183,   170,  1450,   656,
    -183,  -183,   364,  -183,  -183,   166,   173,   437,     4,   656,
     656,   656,  -183,   748,   174,  -183,   656,  -183,   510,   656,
    1477,  -183,   583,  -183,   175,  -183,  -183
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    52,    51,    53,    54,     0,     0,     0,     0,     0,
      55,     0,     0,     0,     0,     0,    65,    66,    67,    68,
      71,    69,    70,     0,     2,     4,     6,    18,     7,     5,
       0,     8,    11,    14,    15,    10,    12,    13,    16,    17,
       0,     0,    72,    73,    74,    75,     0,     0,     0,     0,
       0,    34,    33,    36,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   104,    64,    77,     0,
     107,     0,     1,     3,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,    35,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,    56,     0,   106,     0,     0,     0,
      46,    21,     0,     0,   100,   101,    98,    99,   102,   103,
      28,    78,    29,    79,    80,    81,    82,    95,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,    58,    59,    60,   107,     0,     0,    62,     0,   107,
     108,    76,     0,     0,     0,     0,    25,    27,     0,     0,
       0,     0,   108,    76,     0,    45,     0,     0,     0,     0,
     105,    49,     0,     0,     0,    20,    96,     0,     0,     0,
       0,     0,     0,     0,    39,     0,    46,    61,    22,    63,
      19,     0,     0,   107,     0,    30,    42,     0,     0,     0,
      37,    38,     0,    44,    26,     0,     0,     0,     0,     0,
       0,    41,    48,     0,     0,    47,     0,    32,     0,    40,
       0,    24,     0,    43,     0,    31,    23
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -183,  -183,  -182,   -32,   149,  -183,  -183,  -183,    24,   -20,
    -183,  -183,  -183,  -183,    -3,  -183,  -183,  -183,  -139,  -183,
    -183,   -18,    -8,  -183,    42,  -183,  -183,  -100,  -183
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,   213,   214,    46,    47,   168,    48,
      49,    50,    51,    52,   113,    53,    54,   137,    55
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      65,   183,    83,    72,    85,    74,   207,   208,     2,   140,
     222,   141,   211,   141,    87,    75,    76,    77,   212,    61,
     166,    10,    11,    12,    13,    14,    62,    66,   142,   223,
     142,    20,    56,   232,    21,    57,    86,    96,    97,    98,
     246,   118,   237,    58,    59,    87,    60,   241,   114,   115,
     116,    67,   119,    68,    69,    70,    71,   248,   249,   126,
     127,   128,   129,   130,   252,   132,   123,   124,    96,    97,
      98,    73,   136,   138,   196,    82,    84,   233,   125,   200,
     144,   145,   146,   147,   148,   149,   151,   153,   154,   155,
     156,    15,    16,    17,    18,    19,   131,    78,   133,   135,
      22,   120,    23,   157,   158,   159,    63,   169,   121,   163,
     143,   139,   136,   167,   164,   151,   153,    24,   180,    25,
     182,   175,   169,   236,    87,   177,   187,   178,   188,   189,
     191,    87,   192,   194,   184,   185,   203,    26,    27,    28,
      29,    64,    31,    32,    77,    88,    89,    90,    91,    92,
      93,   195,   123,   124,    96,    97,    98,   201,   204,   220,
     215,    78,   216,    87,    79,    80,   136,   197,   198,   111,
     112,   136,    81,   217,   227,    83,    83,    88,    89,    90,
      91,    92,   210,   224,   123,   124,    96,    97,    98,    10,
      11,    12,    13,    14,   221,   229,   230,   238,   169,    20,
      83,   111,   112,   228,   235,    83,   239,   243,   117,    83,
     244,   231,   251,   256,   209,   136,    83,    83,   247,     0,
      83,     1,     2,   202,     3,     4,     0,     5,     0,     6,
       7,     8,     9,     0,     0,   250,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,     0,    21,
      22,     0,    23,     0,     0,   225,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,    25,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,    26,    27,    28,
      29,    30,    31,    32,     1,     2,     0,     3,     4,     0,
       5,     0,     6,     7,     8,     9,     0,     0,     0,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,    21,    22,     0,    23,     0,     0,   226,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,    30,    31,    32,     1,     2,     0,
       3,     4,     0,     5,     0,     6,     7,     8,     9,     0,
       0,     0,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,    21,    22,     0,    23,     0,
       0,   242,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    27,    28,    29,    30,    31,    32,
       1,     2,     0,     3,     4,     0,     5,     0,     6,     7,
       8,     9,     0,     0,     0,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,    21,    22,
       0,    23,     0,     0,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,     0,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
      30,    31,    32,     1,     2,     0,     3,     4,     0,     5,
       0,     6,     7,     8,     9,     0,     0,     0,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,    21,    22,     0,    23,     0,     0,   253,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    29,    30,    31,    32,     1,     2,     0,     3,
       4,     0,     5,     0,     6,     7,     8,     9,     0,     0,
       0,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     0,    21,    22,     0,    23,     0,     0,
     255,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     0,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    29,    30,    31,    32,     1,
       2,     0,     3,     4,     0,     5,     0,     6,     7,     8,
       9,     0,     0,     0,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,    21,    22,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,    25,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,    22,     0,    23,    26,    27,    28,    29,    30,
      31,    32,     0,     0,     0,     0,     0,     0,     0,    24,
       0,    25,    15,    16,    17,    18,    19,     0,     0,     0,
       0,    22,     0,    23,     0,     0,     0,     0,     0,    26,
      27,    28,    29,    64,    31,    32,     0,     0,    24,   150,
      25,    15,    16,    17,    18,    19,     0,     0,     0,     0,
      22,     0,    23,     0,     0,     0,     0,     0,    26,    27,
      28,    29,    64,    31,    32,     0,     0,    24,     0,    25,
      15,    16,    17,    18,    19,     0,     0,     0,     0,    22,
       0,    23,     0,     0,     0,     0,     0,    26,    27,    28,
      29,    64,    31,    32,     0,     0,    24,     0,   152,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
      64,    31,    32,    88,    89,    90,    91,    92,    93,     0,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    87,
       0,     0,     0,     0,     0,     0,     0,     0,   122,     0,
       0,     0,     0,    88,    89,    90,    91,    92,    93,     0,
     123,   124,    96,    97,    98,    87,     0,     0,     0,     0,
       0,   134,     0,     0,     0,     0,     0,   111,   112,    88,
      89,    90,    91,    92,    93,     0,   123,   124,    96,    97,
      98,    87,     0,     0,     0,     0,     0,   160,     0,     0,
       0,     0,     0,   111,   112,    88,    89,    90,    91,    92,
      93,     0,   123,   124,    96,    97,    98,    87,     0,     0,
       0,     0,     0,   161,     0,     0,     0,     0,     0,   111,
     112,    88,    89,    90,    91,    92,    93,     0,   123,   124,
      96,    97,    98,    87,     0,     0,     0,     0,     0,   162,
       0,     0,     0,     0,     0,   111,   112,    88,    89,    90,
      91,    92,    93,     0,   123,   124,    96,    97,    98,    87,
       0,     0,     0,     0,     0,   165,     0,     0,     0,     0,
       0,   111,   112,    88,    89,    90,    91,    92,    93,     0,
     123,   124,    96,    97,    98,    87,     0,     0,     0,     0,
       0,   170,     0,     0,     0,     0,     0,   111,   112,    88,
      89,    90,    91,    92,    93,     0,   123,   124,    96,    97,
      98,    87,     0,     0,     0,     0,     0,   171,     0,     0,
       0,     0,     0,   111,   112,    88,    89,    90,    91,    92,
      93,     0,   123,   124,    96,    97,    98,    87,     0,     0,
       0,     0,     0,   172,     0,     0,     0,     0,     0,   111,
     112,    88,    89,    90,    91,    92,    93,     0,   123,   124,
      96,    97,    98,    87,     0,     0,     0,     0,     0,   173,
       0,     0,     0,     0,     0,   111,   112,    88,    89,    90,
      91,    92,    93,     0,   123,   124,    96,    97,    98,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     174,   111,   112,    88,    89,    90,    91,    92,    93,     0,
     123,   124,    96,    97,    98,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   176,   111,   112,    88,
      89,    90,    91,    92,    93,     0,   123,   124,    96,    97,
      98,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   179,   111,   112,    88,    89,    90,    91,    92,
      93,     0,   123,   124,    96,    97,    98,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
     112,   181,    88,    89,    90,    91,    92,    93,     0,   123,
     124,    96,    97,    98,    87,     0,     0,     0,     0,     0,
       0,     0,     0,   186,     0,     0,   111,   112,    88,    89,
      90,    91,    92,    93,     0,   123,   124,    96,    97,    98,
      87,     0,     0,     0,     0,     0,     0,     0,     0,   190,
       0,     0,   111,   112,    88,    89,    90,    91,    92,    93,
       0,   123,   124,    96,    97,    98,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,   112,
     193,    88,    89,    90,    91,    92,    93,     0,   123,   124,
      96,    97,    98,    87,     0,     0,     0,     0,     0,   199,
       0,     0,     0,     0,     0,   111,   112,    88,    89,    90,
      91,    92,    93,     0,   123,   124,    96,    97,    98,    87,
       0,     0,     0,     0,     0,     0,     0,     0,   205,     0,
       0,   111,   112,    88,    89,    90,    91,    92,    93,     0,
     123,   124,    96,    97,    98,    87,     0,     0,     0,     0,
       0,   206,     0,     0,     0,     0,     0,   111,   112,    88,
      89,    90,    91,    92,    93,     0,   123,   124,    96,    97,
      98,    87,     0,     0,     0,     0,     0,     0,     0,     0,
     218,     0,     0,   111,   112,    88,    89,    90,    91,    92,
      93,     0,   123,   124,    96,    97,    98,    87,     0,     0,
       0,     0,     0,   219,     0,     0,     0,     0,     0,   111,
     112,    88,    89,    90,    91,    92,    93,     0,   123,   124,
      96,    97,    98,    87,     0,     0,     0,     0,     0,     0,
       0,     0,   234,     0,     0,   111,   112,    88,    89,    90,
      91,    92,    93,     0,   123,   124,    96,    97,    98,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   240,
       0,   111,   112,    88,    89,    90,    91,    92,    93,     0,
     123,   124,    96,    97,    98,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,   112,   254,
      88,    89,    90,    91,    92,    93,     0,   123,   124,    96,
      97,    98,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,   112,    88,    89,    90,    91,
      92,    93,    87,    94,    95,    96,    97,    98,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
     111,   112,     0,   123,   124,    96,    97,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,   112
};

static const yytype_int16 yycheck[] =
{
       8,   140,    34,    21,    41,    23,   188,   189,     4,    34,
      17,    38,    10,    38,    29,    23,    24,    25,    16,    38,
     120,    18,    19,    20,    21,    22,    38,    73,    55,    36,
      55,    28,    34,   215,    31,    34,    73,    52,    53,    54,
      36,    59,   224,    34,    34,    29,    34,   229,    56,    57,
      58,    34,    60,    34,    34,    34,    34,   239,   240,    67,
      68,    69,    70,    71,   246,    73,    50,    51,    52,    53,
      54,    34,    80,    81,   174,     0,    38,   216,    34,   179,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    23,    24,    25,    26,    27,    73,    30,    35,    34,
      32,    34,    34,   111,   112,   113,    38,   125,    41,   117,
      34,    42,   120,   121,    73,   123,   124,    49,    35,    51,
      73,    55,   140,   223,    29,   133,    38,   135,    36,    36,
      36,    29,    35,    35,   142,   143,    55,    69,    70,    71,
      72,    73,    74,    75,   152,    43,    44,    45,    46,    47,
      48,    73,    50,    51,    52,    53,    54,    38,    35,    38,
      36,    30,    40,    29,    33,    34,   174,   175,   176,    67,
      68,   179,    41,    35,    35,   207,   208,    43,    44,    45,
      46,    47,   190,    36,    50,    51,    52,    53,    54,    18,
      19,    20,    21,    22,   202,    39,    37,     5,   216,    28,
     232,    67,    68,   211,   222,   237,    36,    41,    59,   241,
      37,   214,    38,    38,   190,   223,   248,   249,   238,    -1,
     252,     3,     4,   181,     6,     7,    -1,     9,    -1,    11,
      12,    13,    14,    -1,    -1,   243,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    31,
      32,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    75,     3,     4,    -1,     6,     7,    -1,
       9,    -1,    11,    12,    13,    14,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    31,    32,    -1,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    75,     3,     4,    -1,
       6,     7,    -1,     9,    -1,    11,    12,    13,    14,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    32,    -1,    34,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    75,
       3,     4,    -1,     6,     7,    -1,     9,    -1,    11,    12,
      13,    14,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    31,    32,
      -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,     3,     4,    -1,     6,     7,    -1,     9,
      -1,    11,    12,    13,    14,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    31,    32,    -1,    34,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,     3,     4,    -1,     6,
       7,    -1,     9,    -1,    11,    12,    13,    14,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    31,    32,    -1,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    75,     3,
       4,    -1,     6,     7,    -1,     9,    -1,    11,    12,    13,
      14,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    32,    -1,    34,    69,    70,    71,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    51,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    -1,    -1,    49,    50,
      51,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    49,    -1,    51,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    43,    44,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    29,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    67,    68,    43,
      44,    45,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    29,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    67,    68,    43,    44,    45,    46,    47,
      48,    -1,    50,    51,    52,    53,    54,    29,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    67,
      68,    43,    44,    45,    46,    47,    48,    -1,    50,    51,
      52,    53,    54,    29,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    67,    68,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    29,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    67,    68,    43,    44,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    29,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    67,    68,    43,
      44,    45,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    29,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    67,    68,    43,    44,    45,    46,    47,
      48,    -1,    50,    51,    52,    53,    54,    29,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    67,
      68,    43,    44,    45,    46,    47,    48,    -1,    50,    51,
      52,    53,    54,    29,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    67,    68,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    67,    68,    43,    44,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    67,    68,    43,
      44,    45,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    67,    68,    43,    44,    45,    46,    47,
      48,    -1,    50,    51,    52,    53,    54,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    67,    68,    43,    44,
      45,    46,    47,    48,    -1,    50,    51,    52,    53,    54,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    67,    68,    43,    44,    45,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    51,
      52,    53,    54,    29,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    67,    68,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    67,    68,    43,    44,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    29,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    67,    68,    43,
      44,    45,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    67,    68,    43,    44,    45,    46,    47,
      48,    -1,    50,    51,    52,    53,    54,    29,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    67,
      68,    43,    44,    45,    46,    47,    48,    -1,    50,    51,
      52,    53,    54,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    67,    68,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    67,    68,    43,    44,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    51,    52,
      53,    54,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    43,    44,    45,    46,
      47,    48,    29,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,
      67,    68,    -1,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     6,     7,     9,    11,    12,    13,    14,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    31,    32,    34,    49,    51,    69,    70,    71,    72,
      73,    74,    75,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    93,    94,    96,    97,
      98,    99,   100,   102,   103,   105,    34,    34,    34,    34,
      34,    38,    38,    38,    73,    99,    73,    34,    34,    34,
      34,    34,    98,    34,    98,    99,    99,    99,    30,    33,
      34,    41,     0,    80,    38,    41,    73,    29,    43,    44,
      45,    46,    47,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,   101,    99,    99,    99,    81,    98,    99,
      34,    41,    38,    50,    51,    34,    99,    99,    99,    99,
      99,    73,    99,    35,    35,    34,    99,   104,    99,    42,
      34,    38,    55,    34,    99,    99,    99,    99,    99,    99,
      50,    99,    51,    99,    99,    99,    99,    99,    99,    99,
      35,    35,    35,    99,    73,    35,   104,    99,    95,    98,
      35,    35,    35,    35,    40,    55,    40,    99,    99,    40,
      35,    42,    73,    95,    99,    99,    38,    38,    36,    36,
      38,    36,    35,    42,    35,    73,   104,    99,    99,    35,
     104,    38,   101,    55,    35,    38,    35,    79,    79,    85,
      99,    10,    16,    91,    92,    36,    40,    35,    38,    35,
      38,    99,    17,    36,    36,    37,    37,    35,    99,    39,
      37,    91,    79,    95,    38,    98,   104,    79,     5,    36,
      39,    79,    37,    41,    37,    37,    36,    86,    79,    79,
      99,    38,    79,    37,    42,    37,    38
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    77,    78,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      81,    81,    81,    82,    82,    83,    83,    84,    85,    85,
      86,    86,    86,    87,    88,    89,    89,    90,    91,    91,
      92,    92,    93,    94,    95,    95,    95,    96,    96,    97,
      98,    98,    98,    98,    98,    98,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,   100,   100,
     100,   100,   100,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   102,   102,   102,   102,   102,
     102,   102,   103,   103,   103,   104,   104,   104,   105
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       5,     3,     6,    11,     9,     4,     7,     5,     3,     3,
       7,    11,     9,     2,     2,     3,     2,     7,     2,     1,
       4,     3,     7,    10,     4,     2,     0,     8,     8,     5,
       1,     1,     1,     1,     1,     1,     3,     4,     4,     4,
       4,     6,     4,     6,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     2,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     5,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     1,     0,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* inicio: listainstrucciones  */
#line 76 "./lenguaje/parser.y"
                       { printf("Analisis completado.\n"); root = (yyvsp[0].node);}
#line 1730 "./lenguaje/parser.tab.c"
    break;

  case 3: /* listainstrucciones: listainstrucciones instruccion  */
#line 80 "./lenguaje/parser.y"
                                        {(yyval.node) = ast_link((yyvsp[-1].node), (yyvsp[0].node));}
#line 1736 "./lenguaje/parser.tab.c"
    break;

  case 4: /* listainstrucciones: instruccion  */
#line 81 "./lenguaje/parser.y"
                                        { (yyval.node) = (yyvsp[0].node); }
#line 1742 "./lenguaje/parser.tab.c"
    break;

  case 19: /* instruccion: ID TK_ADD TK_PA expr TK_PC TK_PTCOMA  */
#line 99 "./lenguaje/parser.y"
                                             { (yyval.node) = ast_array_add((yyvsp[-5].str), (yyvsp[-2].node)); }
#line 1748 "./lenguaje/parser.tab.c"
    break;

  case 20: /* DECLARACION: TIPO ID TK_IGUAL expr TK_PTCOMA  */
#line 103 "./lenguaje/parser.y"
                                                 { (yyval.node) = ast_var_decl((yyvsp[-3].str), (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1754 "./lenguaje/parser.tab.c"
    break;

  case 21: /* DECLARACION: TIPO ID TK_PTCOMA  */
#line 104 "./lenguaje/parser.y"
                                                 { (yyval.node) = ast_var_decl((yyvsp[-1].str), (yyvsp[-2].node), NULL); }
#line 1760 "./lenguaje/parser.tab.c"
    break;

  case 22: /* DECLARACION: TK_FINAL TIPO ID TK_IGUAL expr TK_PTCOMA  */
#line 105 "./lenguaje/parser.y"
                                                 {  (yyval.node) = ast_var_decl_const((yyvsp[-3].str), (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1766 "./lenguaje/parser.tab.c"
    break;

  case 23: /* DECLARAR_VECTOR: TIPO TK_CA TK_CC ID TK_IGUAL TK_NUEVO TIPO TK_CA expr TK_CC TK_PTCOMA  */
#line 110 "./lenguaje/parser.y"
      { if ((yyvsp[-10].node) && (yyvsp[-4].node) && strcmp((yyvsp[-10].node)->value,(yyvsp[-4].node)->value)==0) (yyval.node) = ast_vector_decl((yyvsp[-7].str),(yyvsp[-10].node),(yyvsp[-2].node));
      else (yyval.node) = NULL; }
#line 1773 "./lenguaje/parser.tab.c"
    break;

  case 24: /* DECLARAR_VECTOR: TIPO TK_CA TK_CC ID TK_IGUAL TK_LLA VALORES TK_LLC TK_PTCOMA  */
#line 113 "./lenguaje/parser.y"
                                                                 { (yyval.node) = ast_vector_decl_init((yyvsp[-5].str),(yyvsp[-8].node),(yyvsp[-2].node)); }
#line 1779 "./lenguaje/parser.tab.c"
    break;

  case 25: /* ASIGNACION: expr OP_ASIGNACION expr TK_PTCOMA  */
#line 117 "./lenguaje/parser.y"
                                                         { (yyval.node) = ast_assign((yyvsp[-2].str), (yyvsp[-1].node), (yyvsp[-3].node)); }
#line 1785 "./lenguaje/parser.tab.c"
    break;

  case 26: /* ASIGNACION: ID TK_CA expr TK_CC OP_ASIGNACION expr TK_PTCOMA  */
#line 118 "./lenguaje/parser.y"
                                                         { (yyval.node) = ast_assign((yyvsp[-2].str), (yyvsp[-1].node), ast_index1((yyvsp[-6].str), (yyvsp[-4].node))); }
#line 1791 "./lenguaje/parser.tab.c"
    break;

  case 27: /* IMPRIMIR: TK_PRINT TK_PA expr TK_PC TK_PTCOMA  */
#line 122 "./lenguaje/parser.y"
                                                  { (yyval.node) = ast_print_stmt((yyvsp[-2].node));}
#line 1797 "./lenguaje/parser.tab.c"
    break;

  case 28: /* INCREMENTO_DECREMENTO: expr TK_SUMA TK_SUMA  */
#line 125 "./lenguaje/parser.y"
                                   { (yyval.node) = ast_incremento_decremento("++", (yyvsp[-2].node)); }
#line 1803 "./lenguaje/parser.tab.c"
    break;

  case 29: /* INCREMENTO_DECREMENTO: expr TK_RESTA TK_RESTA  */
#line 126 "./lenguaje/parser.y"
                                   { (yyval.node) = ast_incremento_decremento("--", (yyvsp[-2].node)); }
#line 1809 "./lenguaje/parser.tab.c"
    break;

  case 30: /* IF: TK_IF TK_PA expr TK_PC TK_LLA listainstrucciones TK_LLC  */
#line 130 "./lenguaje/parser.y"
                                                            { (yyval.node) = ast_if((yyvsp[-4].node), (yyvsp[-1].node), NULL); }
#line 1815 "./lenguaje/parser.tab.c"
    break;

  case 31: /* IF: TK_IF TK_PA expr TK_PC TK_LLA listainstrucciones TK_LLC TK_ELSE TK_LLA listainstrucciones TK_LLC  */
#line 131 "./lenguaje/parser.y"
                                                                                                     { (yyval.node) = ast_if((yyvsp[-8].node), (yyvsp[-5].node), (yyvsp[-1].node)); }
#line 1821 "./lenguaje/parser.tab.c"
    break;

  case 32: /* IF: TK_IF TK_PA expr TK_PC TK_LLA listainstrucciones TK_LLC TK_ELSE IF  */
#line 132 "./lenguaje/parser.y"
                                                                       { (yyval.node) = ast_if((yyvsp[-6].node), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1827 "./lenguaje/parser.tab.c"
    break;

  case 33: /* BREAK: TK_BREAK TK_PTCOMA  */
#line 136 "./lenguaje/parser.y"
                            { (yyval.node) = ast_break(); }
#line 1833 "./lenguaje/parser.tab.c"
    break;

  case 34: /* CONTINUAR: TK_CONTINUE TK_PTCOMA  */
#line 140 "./lenguaje/parser.y"
                            { (yyval.node) = ast_continue(); }
#line 1839 "./lenguaje/parser.tab.c"
    break;

  case 35: /* RETORNAR: TK_RETURN expr TK_PTCOMA  */
#line 143 "./lenguaje/parser.y"
                             { (yyval.node) = ast_return((yyvsp[-1].node)); }
#line 1845 "./lenguaje/parser.tab.c"
    break;

  case 36: /* RETORNAR: TK_RETURN TK_PTCOMA  */
#line 144 "./lenguaje/parser.y"
                             { (yyval.node) = ast_return(NULL);}
#line 1851 "./lenguaje/parser.tab.c"
    break;

  case 37: /* SWITCH: TK_SWITCH TK_PA expr TK_PC TK_LLA CASES TK_LLC  */
#line 148 "./lenguaje/parser.y"
                                                   { (yyval.node) = ast_switch((yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1857 "./lenguaje/parser.tab.c"
    break;

  case 38: /* CASES: CASE CASES  */
#line 152 "./lenguaje/parser.y"
                            { (yyval.node) = ast_link((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1863 "./lenguaje/parser.tab.c"
    break;

  case 39: /* CASES: CASE  */
#line 153 "./lenguaje/parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1869 "./lenguaje/parser.tab.c"
    break;

  case 40: /* CASE: TK_CASE expr TK_DOSPUNTOS listainstrucciones  */
#line 157 "./lenguaje/parser.y"
                                                  { (yyval.node) = ast_case((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1875 "./lenguaje/parser.tab.c"
    break;

  case 41: /* CASE: TK_DEFAULT TK_DOSPUNTOS listainstrucciones  */
#line 158 "./lenguaje/parser.y"
                                                  { (yyval.node) = ast_case(NULL, (yyvsp[0].node)); }
#line 1881 "./lenguaje/parser.tab.c"
    break;

  case 42: /* WHILE: TK_WHILE TK_PA expr TK_PC TK_LLA listainstrucciones TK_LLC  */
#line 162 "./lenguaje/parser.y"
                                                               { (yyval.node) = ast_while((yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1887 "./lenguaje/parser.tab.c"
    break;

  case 43: /* FOR: TK_FOR TK_PA DECLARACION expr TK_PTCOMA INCREMENTO_DECREMENTO TK_PC TK_LLA listainstrucciones TK_LLC  */
#line 166 "./lenguaje/parser.y"
                                                                                                         { (yyval.node) = ast_for((yyvsp[-7].node), (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1893 "./lenguaje/parser.tab.c"
    break;

  case 44: /* PARAMETROS: TIPO ID TK_COMA PARAMETROS  */
#line 170 "./lenguaje/parser.y"
                                   { (yyval.node) = ast_parametros((yyvsp[-2].str), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1899 "./lenguaje/parser.tab.c"
    break;

  case 45: /* PARAMETROS: TIPO ID  */
#line 171 "./lenguaje/parser.y"
                                   { (yyval.node) = ast_parametros((yyvsp[0].str), (yyvsp[-1].node), NULL); }
#line 1905 "./lenguaje/parser.tab.c"
    break;

  case 46: /* PARAMETROS: %empty  */
#line 172 "./lenguaje/parser.y"
                                   { (yyval.node) = NULL; }
#line 1911 "./lenguaje/parser.tab.c"
    break;

  case 47: /* DECLARAR_FUNCION: TIPO ID TK_PA PARAMETROS TK_PC TK_LLA listainstrucciones TK_LLC  */
#line 176 "./lenguaje/parser.y"
                                                                          { (yyval.node) = ast_funcion_decl((yyvsp[-6].str), (yyvsp[-4].node), (yyvsp[-7].node), (yyvsp[-1].node)); }
#line 1917 "./lenguaje/parser.tab.c"
    break;

  case 48: /* DECLARAR_FUNCION: TK_VOID ID TK_PA PARAMETROS TK_PC TK_LLA listainstrucciones TK_LLC  */
#line 177 "./lenguaje/parser.y"
                                                                          { (yyval.node) = ast_funcion_decl((yyvsp[-6].str), (yyvsp[-4].node), NULL, (yyvsp[-1].node)); }
#line 1923 "./lenguaje/parser.tab.c"
    break;

  case 49: /* LLAMADA_PROCEDIMIENTO: ID TK_PA VALORES TK_PC TK_PTCOMA  */
#line 181 "./lenguaje/parser.y"
                                     { (yyval.node) = ast_funcion_call((yyvsp[-4].str), (yyvsp[-2].node)); }
#line 1929 "./lenguaje/parser.tab.c"
    break;

  case 50: /* TIPO: TK_INT  */
#line 187 "./lenguaje/parser.y"
                 { (yyval.node) = ast_type("int");}
#line 1935 "./lenguaje/parser.tab.c"
    break;

  case 51: /* TIPO: TK_STRING  */
#line 188 "./lenguaje/parser.y"
                 { (yyval.node) = ast_type("string");}
#line 1941 "./lenguaje/parser.tab.c"
    break;

  case 52: /* TIPO: TK_FLOAT  */
#line 189 "./lenguaje/parser.y"
                 { (yyval.node) = ast_type("float");}
#line 1947 "./lenguaje/parser.tab.c"
    break;

  case 53: /* TIPO: TK_BOOL  */
#line 190 "./lenguaje/parser.y"
                 { (yyval.node) = ast_type("bool");}
#line 1953 "./lenguaje/parser.tab.c"
    break;

  case 54: /* TIPO: TK_CHAR  */
#line 191 "./lenguaje/parser.y"
                 { (yyval.node) = ast_type("char");}
#line 1959 "./lenguaje/parser.tab.c"
    break;

  case 55: /* TIPO: TK_DOUBLE  */
#line 192 "./lenguaje/parser.y"
                 { (yyval.node) = ast_type("double");}
#line 1965 "./lenguaje/parser.tab.c"
    break;

  case 56: /* expr: TK_PA expr TK_PC  */
#line 196 "./lenguaje/parser.y"
                               {(yyval.node) = (yyvsp[-1].node);}
#line 1971 "./lenguaje/parser.tab.c"
    break;

  case 57: /* expr: TK_PARSEINT TK_PA expr TK_PC  */
#line 197 "./lenguaje/parser.y"
                                      { (yyval.node) = ast_parser("parseInt", (yyvsp[-1].node) );}
#line 1977 "./lenguaje/parser.tab.c"
    break;

  case 58: /* expr: TK_PARSEFLOAT TK_PA expr TK_PC  */
#line 198 "./lenguaje/parser.y"
                                      { (yyval.node) = ast_parser("parseFloat", (yyvsp[-1].node)); }
#line 1983 "./lenguaje/parser.tab.c"
    break;

  case 59: /* expr: TK_PARSEDOUBLE TK_PA expr TK_PC  */
#line 199 "./lenguaje/parser.y"
                                      { (yyval.node) = ast_parser("parseDouble", (yyvsp[-1].node)); }
#line 1989 "./lenguaje/parser.tab.c"
    break;

  case 60: /* expr: TK_VALUEOF TK_PA expr TK_PC  */
#line 200 "./lenguaje/parser.y"
                                      { (yyval.node) = ast_parser("valueOf", (yyvsp[-1].node)); }
#line 1995 "./lenguaje/parser.tab.c"
    break;

  case 61: /* expr: TK_JOIN TK_PA expr TK_COMA VALORES TK_PC  */
#line 201 "./lenguaje/parser.y"
                                               { (yyval.node) = ast_join((yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2001 "./lenguaje/parser.tab.c"
    break;

  case 62: /* expr: TK_PA TIPO TK_PC expr  */
#line 202 "./lenguaje/parser.y"
                                { (yyval.node) = ast_cast((yyvsp[0].node), (yyvsp[-2].node)); }
#line 2007 "./lenguaje/parser.tab.c"
    break;

  case 63: /* expr: TK_INDEXOF TK_PA expr TK_COMA expr TK_PC  */
#line 203 "./lenguaje/parser.y"
                                                { (yyval.node) = ast_indexof((yyvsp[-3].node),(yyvsp[-1].node));}
#line 2013 "./lenguaje/parser.tab.c"
    break;

  case 64: /* expr: TK_RESTA expr  */
#line 204 "./lenguaje/parser.y"
                                 { (yyval.node) = ast_unop("-", (yyvsp[0].node)); }
#line 2019 "./lenguaje/parser.tab.c"
    break;

  case 65: /* expr: INT  */
#line 205 "./lenguaje/parser.y"
                                { (yyval.node) = ast_literal((yyvsp[0].str)); }
#line 2025 "./lenguaje/parser.tab.c"
    break;

  case 66: /* expr: DECIMAL  */
#line 206 "./lenguaje/parser.y"
                                { (yyval.node) = ast_literal((yyvsp[0].str)); }
#line 2031 "./lenguaje/parser.tab.c"
    break;

  case 67: /* expr: CARACTER  */
#line 207 "./lenguaje/parser.y"
                                { (yyval.node) = ast_literal((yyvsp[0].str)); }
#line 2037 "./lenguaje/parser.tab.c"
    break;

  case 68: /* expr: CADENA  */
#line 208 "./lenguaje/parser.y"
                                { (yyval.node) = ast_literal((yyvsp[0].str)); }
#line 2043 "./lenguaje/parser.tab.c"
    break;

  case 69: /* expr: BOOL  */
#line 209 "./lenguaje/parser.y"
                                { (yyval.node) = ast_literal((yyvsp[0].str)); }
#line 2049 "./lenguaje/parser.tab.c"
    break;

  case 70: /* expr: DOUBLE  */
#line 210 "./lenguaje/parser.y"
                                { (yyval.node) = ast_literal((yyvsp[0].str)); }
#line 2055 "./lenguaje/parser.tab.c"
    break;

  case 71: /* expr: ID  */
#line 211 "./lenguaje/parser.y"
                                { (yyval.node) = ast_identifier((yyvsp[0].str)); }
#line 2061 "./lenguaje/parser.tab.c"
    break;

  case 72: /* expr: ARITMETICOS  */
#line 212 "./lenguaje/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2067 "./lenguaje/parser.tab.c"
    break;

  case 73: /* expr: RELACIONALES  */
#line 213 "./lenguaje/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2073 "./lenguaje/parser.tab.c"
    break;

  case 74: /* expr: LOGICOS  */
#line 214 "./lenguaje/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2079 "./lenguaje/parser.tab.c"
    break;

  case 75: /* expr: LLAMADA_FUNCION  */
#line 215 "./lenguaje/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2085 "./lenguaje/parser.tab.c"
    break;

  case 76: /* expr: ID TK_CA expr TK_CC  */
#line 216 "./lenguaje/parser.y"
                                { (yyval.node) = ast_index1((yyvsp[-3].str), (yyvsp[-1].node)); }
#line 2091 "./lenguaje/parser.tab.c"
    break;

  case 77: /* expr: ID TK_LENGTH  */
#line 217 "./lenguaje/parser.y"
                                { (yyval.node) = ast_array_length((yyvsp[-1].str)); }
#line 2097 "./lenguaje/parser.tab.c"
    break;

  case 78: /* ARITMETICOS: expr TK_SUMA expr  */
#line 224 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("+", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2103 "./lenguaje/parser.tab.c"
    break;

  case 79: /* ARITMETICOS: expr TK_RESTA expr  */
#line 225 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("-", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2109 "./lenguaje/parser.tab.c"
    break;

  case 80: /* ARITMETICOS: expr TK_MULTIPLICACION expr  */
#line 226 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("*", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2115 "./lenguaje/parser.tab.c"
    break;

  case 81: /* ARITMETICOS: expr TK_DIVISION expr  */
#line 227 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("/", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2121 "./lenguaje/parser.tab.c"
    break;

  case 82: /* ARITMETICOS: expr TK_MODULAR expr  */
#line 228 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("%", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2127 "./lenguaje/parser.tab.c"
    break;

  case 83: /* OP_ASIGNACION: TK_IGUAL  */
#line 232 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("="); }
#line 2133 "./lenguaje/parser.tab.c"
    break;

  case 84: /* OP_ASIGNACION: TK_MAS_IGUAL  */
#line 233 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("+="); }
#line 2139 "./lenguaje/parser.tab.c"
    break;

  case 85: /* OP_ASIGNACION: TK_MENOS_IGUAL  */
#line 234 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("-="); }
#line 2145 "./lenguaje/parser.tab.c"
    break;

  case 86: /* OP_ASIGNACION: TK_POR_IGUAL  */
#line 235 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("*="); }
#line 2151 "./lenguaje/parser.tab.c"
    break;

  case 87: /* OP_ASIGNACION: TK_DIVIDIR_IGUAL  */
#line 236 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("/="); }
#line 2157 "./lenguaje/parser.tab.c"
    break;

  case 88: /* OP_ASIGNACION: TK_PORCENTAJE_IGUAL  */
#line 237 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("%="); }
#line 2163 "./lenguaje/parser.tab.c"
    break;

  case 89: /* OP_ASIGNACION: TK_AND_IGUAL  */
#line 238 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("&="); }
#line 2169 "./lenguaje/parser.tab.c"
    break;

  case 90: /* OP_ASIGNACION: TK_OR_IGUAL  */
#line 239 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("|="); }
#line 2175 "./lenguaje/parser.tab.c"
    break;

  case 91: /* OP_ASIGNACION: TK_POTENCIA_IGUAL  */
#line 240 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("^="); }
#line 2181 "./lenguaje/parser.tab.c"
    break;

  case 92: /* OP_ASIGNACION: TK_MAYOR_MAYOR_IGUAL  */
#line 241 "./lenguaje/parser.y"
                             { (yyval.str) = strdup(">>="); }
#line 2187 "./lenguaje/parser.tab.c"
    break;

  case 93: /* OP_ASIGNACION: TK_MENOR_MENOR_IGUAL  */
#line 242 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("<<="); }
#line 2193 "./lenguaje/parser.tab.c"
    break;

  case 94: /* OP_ASIGNACION: TK_DOSPUNTOS_IGUAL  */
#line 243 "./lenguaje/parser.y"
                             { (yyval.str) = strdup(":="); }
#line 2199 "./lenguaje/parser.tab.c"
    break;

  case 95: /* RELACIONALES: expr TK_IGUAL_IGUAL expr  */
#line 248 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("==", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2205 "./lenguaje/parser.tab.c"
    break;

  case 96: /* RELACIONALES: expr TK_EQUALS TK_PA expr TK_PC  */
#line 249 "./lenguaje/parser.y"
                                      { (yyval.node) = ast_binop("==", (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 2211 "./lenguaje/parser.tab.c"
    break;

  case 97: /* RELACIONALES: expr TK_DIFERENTE expr  */
#line 250 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("!=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2217 "./lenguaje/parser.tab.c"
    break;

  case 98: /* RELACIONALES: expr TK_MAYOR_IGUAL expr  */
#line 251 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop(">=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2223 "./lenguaje/parser.tab.c"
    break;

  case 99: /* RELACIONALES: expr TK_MENOR_IGUAL expr  */
#line 252 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("<=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2229 "./lenguaje/parser.tab.c"
    break;

  case 100: /* RELACIONALES: expr TK_MAYOR expr  */
#line 253 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop(">", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2235 "./lenguaje/parser.tab.c"
    break;

  case 101: /* RELACIONALES: expr TK_MENOR expr  */
#line 254 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("<", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2241 "./lenguaje/parser.tab.c"
    break;

  case 102: /* LOGICOS: expr TK_AND expr  */
#line 259 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("&&", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2247 "./lenguaje/parser.tab.c"
    break;

  case 103: /* LOGICOS: expr TK_OR expr  */
#line 260 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("||", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2253 "./lenguaje/parser.tab.c"
    break;

  case 104: /* LOGICOS: TK_NOT expr  */
#line 261 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_unop("!", (yyvsp[0].node)); }
#line 2259 "./lenguaje/parser.tab.c"
    break;

  case 105: /* VALORES: expr TK_COMA VALORES  */
#line 266 "./lenguaje/parser.y"
                               { (yyval.node) = ast_link((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2265 "./lenguaje/parser.tab.c"
    break;

  case 106: /* VALORES: expr  */
#line 267 "./lenguaje/parser.y"
                               { (yyval.node) = ast_link((yyvsp[0].node), NULL); }
#line 2271 "./lenguaje/parser.tab.c"
    break;

  case 107: /* VALORES: %empty  */
#line 268 "./lenguaje/parser.y"
                              { (yyval.node) = NULL; }
#line 2277 "./lenguaje/parser.tab.c"
    break;

  case 108: /* LLAMADA_FUNCION: ID TK_PA VALORES TK_PC  */
#line 272 "./lenguaje/parser.y"
                           { (yyval.node) = ast_funcion_call((yyvsp[-3].str), (yyvsp[-1].node)); }
#line 2283 "./lenguaje/parser.tab.c"
    break;


#line 2287 "./lenguaje/parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 275 "./lenguaje/parser.y"







void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
