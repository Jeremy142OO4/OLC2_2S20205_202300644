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
  YYSYMBOL_TK_INT = 17,                    /* TK_INT  */
  YYSYMBOL_TK_FLOAT = 18,                  /* TK_FLOAT  */
  YYSYMBOL_TK_STRING = 19,                 /* TK_STRING  */
  YYSYMBOL_TK_BOOL = 20,                   /* TK_BOOL  */
  YYSYMBOL_TK_CHAR = 21,                   /* TK_CHAR  */
  YYSYMBOL_TK_FINAL = 22,                  /* TK_FINAL  */
  YYSYMBOL_TK_PA = 23,                     /* TK_PA  */
  YYSYMBOL_TK_PC = 24,                     /* TK_PC  */
  YYSYMBOL_TK_LLA = 25,                    /* TK_LLA  */
  YYSYMBOL_TK_LLC = 26,                    /* TK_LLC  */
  YYSYMBOL_TK_PTCOMA = 27,                 /* TK_PTCOMA  */
  YYSYMBOL_TK_DOSPUNTOS = 28,              /* TK_DOSPUNTOS  */
  YYSYMBOL_TK_COMA = 29,                   /* TK_COMA  */
  YYSYMBOL_TK_CA = 30,                     /* TK_CA  */
  YYSYMBOL_TK_CC = 31,                     /* TK_CC  */
  YYSYMBOL_TK_MAYOR = 32,                  /* TK_MAYOR  */
  YYSYMBOL_TK_MENOR = 33,                  /* TK_MENOR  */
  YYSYMBOL_TK_MAYOR_IGUAL = 34,            /* TK_MAYOR_IGUAL  */
  YYSYMBOL_TK_MENOR_IGUAL = 35,            /* TK_MENOR_IGUAL  */
  YYSYMBOL_TK_AND = 36,                    /* TK_AND  */
  YYSYMBOL_TK_OR = 37,                     /* TK_OR  */
  YYSYMBOL_TK_NOT = 38,                    /* TK_NOT  */
  YYSYMBOL_TK_SUMA = 39,                   /* TK_SUMA  */
  YYSYMBOL_TK_RESTA = 40,                  /* TK_RESTA  */
  YYSYMBOL_TK_MULTIPLICACION = 41,         /* TK_MULTIPLICACION  */
  YYSYMBOL_TK_DIVISION = 42,               /* TK_DIVISION  */
  YYSYMBOL_TK_MODULAR = 43,                /* TK_MODULAR  */
  YYSYMBOL_TK_IGUAL = 44,                  /* TK_IGUAL  */
  YYSYMBOL_TK_MAS_IGUAL = 45,              /* TK_MAS_IGUAL  */
  YYSYMBOL_TK_MENOS_IGUAL = 46,            /* TK_MENOS_IGUAL  */
  YYSYMBOL_TK_POR_IGUAL = 47,              /* TK_POR_IGUAL  */
  YYSYMBOL_TK_DIVIDIR_IGUAL = 48,          /* TK_DIVIDIR_IGUAL  */
  YYSYMBOL_TK_PORCENTAJE_IGUAL = 49,       /* TK_PORCENTAJE_IGUAL  */
  YYSYMBOL_TK_AND_IGUAL = 50,              /* TK_AND_IGUAL  */
  YYSYMBOL_TK_OR_IGUAL = 51,               /* TK_OR_IGUAL  */
  YYSYMBOL_TK_POTENCIA_IGUAL = 52,         /* TK_POTENCIA_IGUAL  */
  YYSYMBOL_TK_MAYOR_MAYOR_IGUAL = 53,      /* TK_MAYOR_MAYOR_IGUAL  */
  YYSYMBOL_TK_MENOR_MENOR_IGUAL = 54,      /* TK_MENOR_MENOR_IGUAL  */
  YYSYMBOL_TK_DOSPUNTOS_IGUAL = 55,        /* TK_DOSPUNTOS_IGUAL  */
  YYSYMBOL_TK_IGUAL_IGUAL = 56,            /* TK_IGUAL_IGUAL  */
  YYSYMBOL_TK_DIFERENTE = 57,              /* TK_DIFERENTE  */
  YYSYMBOL_INT = 58,                       /* INT  */
  YYSYMBOL_DECIMAL = 59,                   /* DECIMAL  */
  YYSYMBOL_CARACTER = 60,                  /* CARACTER  */
  YYSYMBOL_CADENA = 61,                    /* CADENA  */
  YYSYMBOL_ID = 62,                        /* ID  */
  YYSYMBOL_BOOL = 63,                      /* BOOL  */
  YYSYMBOL_YYACCEPT = 64,                  /* $accept  */
  YYSYMBOL_inicio = 65,                    /* inicio  */
  YYSYMBOL_listainstrucciones = 66,        /* listainstrucciones  */
  YYSYMBOL_instruccion = 67,               /* instruccion  */
  YYSYMBOL_DECLARACION = 68,               /* DECLARACION  */
  YYSYMBOL_ASIGNACION = 69,                /* ASIGNACION  */
  YYSYMBOL_IMPRIMIR = 70,                  /* IMPRIMIR  */
  YYSYMBOL_INCREMENTO_DECREMENTO = 71,     /* INCREMENTO_DECREMENTO  */
  YYSYMBOL_IF = 72,                        /* IF  */
  YYSYMBOL_BREAK = 73,                     /* BREAK  */
  YYSYMBOL_CONTINUAR = 74,                 /* CONTINUAR  */
  YYSYMBOL_RETORNAR = 75,                  /* RETORNAR  */
  YYSYMBOL_SWITCH = 76,                    /* SWITCH  */
  YYSYMBOL_CASES = 77,                     /* CASES  */
  YYSYMBOL_CASE = 78,                      /* CASE  */
  YYSYMBOL_WHILE = 79,                     /* WHILE  */
  YYSYMBOL_FOR = 80,                       /* FOR  */
  YYSYMBOL_PARAMETROS = 81,                /* PARAMETROS  */
  YYSYMBOL_DECLARAR_FUNCION = 82,          /* DECLARAR_FUNCION  */
  YYSYMBOL_LLAMADA_PROCEDIMIENTO = 83,     /* LLAMADA_PROCEDIMIENTO  */
  YYSYMBOL_TIPO = 84,                      /* TIPO  */
  YYSYMBOL_expr = 85,                      /* expr  */
  YYSYMBOL_ARITMETICOS = 86,               /* ARITMETICOS  */
  YYSYMBOL_OP_ASIGNACION = 87,             /* OP_ASIGNACION  */
  YYSYMBOL_RELACIONALES = 88,              /* RELACIONALES  */
  YYSYMBOL_LOGICOS = 89,                   /* LOGICOS  */
  YYSYMBOL_VALORES = 90,                   /* VALORES  */
  YYSYMBOL_LLAMADA_FUNCION = 91            /* LLAMADA_FUNCION  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   852

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   318


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
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    75,    75,    79,    80,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,   100,   101,
     102,   106,   110,   113,   114,   118,   119,   120,   124,   128,
     131,   135,   139,   140,   144,   145,   149,   153,   157,   158,
     159,   163,   164,   168,   174,   175,   176,   177,   178,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   199,   200,   201,   202,   203,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   223,   224,
     225,   226,   227,   228,   233,   234,   235,   240,   241,   242,
     246
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
  "TK_DEFAULT", "TK_INT", "TK_FLOAT", "TK_STRING", "TK_BOOL", "TK_CHAR",
  "TK_FINAL", "TK_PA", "TK_PC", "TK_LLA", "TK_LLC", "TK_PTCOMA",
  "TK_DOSPUNTOS", "TK_COMA", "TK_CA", "TK_CC", "TK_MAYOR", "TK_MENOR",
  "TK_MAYOR_IGUAL", "TK_MENOR_IGUAL", "TK_AND", "TK_OR", "TK_NOT",
  "TK_SUMA", "TK_RESTA", "TK_MULTIPLICACION", "TK_DIVISION", "TK_MODULAR",
  "TK_IGUAL", "TK_MAS_IGUAL", "TK_MENOS_IGUAL", "TK_POR_IGUAL",
  "TK_DIVIDIR_IGUAL", "TK_PORCENTAJE_IGUAL", "TK_AND_IGUAL", "TK_OR_IGUAL",
  "TK_POTENCIA_IGUAL", "TK_MAYOR_MAYOR_IGUAL", "TK_MENOR_MENOR_IGUAL",
  "TK_DOSPUNTOS_IGUAL", "TK_IGUAL_IGUAL", "TK_DIFERENTE", "INT", "DECIMAL",
  "CARACTER", "CADENA", "ID", "BOOL", "$accept", "inicio",
  "listainstrucciones", "instruccion", "DECLARACION", "ASIGNACION",
  "IMPRIMIR", "INCREMENTO_DECREMENTO", "IF", "BREAK", "CONTINUAR",
  "RETORNAR", "SWITCH", "CASES", "CASE", "WHILE", "FOR", "PARAMETROS",
  "DECLARAR_FUNCION", "LLAMADA_PROCEDIMIENTO", "TIPO", "expr",
  "ARITMETICOS", "OP_ASIGNACION", "RELACIONALES", "LOGICOS", "VALORES",
  "LLAMADA_FUNCION", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-107)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     399,   -14,   -13,    -2,     8,    18,     3,    24,    78,    -8,
    -107,  -107,  -107,  -107,  -107,   210,    15,    78,  -107,  -107,
    -107,  -107,    32,  -107,    56,   399,  -107,  -107,  -107,  -107,
      33,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
      -1,   738,  -107,  -107,  -107,  -107,    78,    78,    78,   126,
      78,  -107,  -107,    57,   556,    58,    17,    35,   -17,    70,
      78,  -107,  -107,  -107,   -15,    78,    78,    78,    78,    78,
      78,    60,   392,    78,    78,    78,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,    78,    78,
      78,   452,   478,   504,    78,    20,   530,    78,  -107,    78,
      78,   210,    40,    78,  -107,   712,    64,   210,  -107,    78,
     193,   193,   193,   193,    70,   795,  -107,     7,  -107,     7,
    -107,  -107,  -107,   193,   193,   582,    63,    67,    68,   608,
     -16,    82,    84,    90,    53,    78,   764,    78,    97,    93,
     634,  -107,  -107,   399,   399,    78,    36,  -107,   100,    99,
     660,  -107,  -107,   104,  -107,   160,   188,   109,   776,    78,
     107,   124,    36,   399,   210,  -107,   399,   148,  -107,   129,
     686,   399,  -107,  -107,   249,  -107,   277,     2,   399,   399,
     399,  -107,  -107,   399,  -107,   338,   399,   366,  -107,  -107
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      44,    46,    45,    47,    48,     0,     0,     0,    51,    52,
      53,    54,    56,    55,     0,     2,     4,     6,     7,     5,
       0,     8,    11,    14,    15,    10,    12,    13,    16,    17,
       0,     0,    57,    58,    59,    60,     0,     0,     0,     0,
       0,    29,    28,    56,     0,     0,     0,     0,     0,    86,
      89,     1,     3,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,    30,     0,
       0,    40,     0,     0,    49,    88,     0,    40,    19,     0,
      82,    83,    80,    81,    84,    85,    23,    61,    24,    62,
      63,    64,    65,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    89,    90,     0,
       0,    21,    22,     0,     0,     0,     0,    90,     0,    39,
       0,    87,    43,     0,    18,     0,     0,     0,     0,     0,
       0,     0,    33,     0,    40,    20,     0,    25,    36,     0,
       0,     0,    31,    32,     0,    38,     0,     0,     0,     0,
      35,    42,    41,     0,    27,     0,    34,     0,    37,    26
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -107,  -107,   300,   -25,   108,  -107,  -107,    13,   -18,  -107,
    -107,  -107,  -107,     6,  -107,  -107,  -107,  -106,  -107,  -107,
     -12,    -3,  -107,  -107,  -107,  -107,   -95,  -107
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,   161,   162,    36,    37,   133,    38,    39,
      40,    41,    42,    90,    43,    44,   106,    45
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      62,   139,   132,    56,    57,    54,     2,   104,   107,    46,
      47,   108,   108,    58,    59,    65,    66,    67,    68,    69,
      70,    48,    99,   100,    73,    74,    75,   183,   109,   109,
      51,    49,    10,    11,    12,    13,    14,    95,    16,    88,
      89,    50,   151,    91,    92,    93,   159,    96,    73,    74,
      75,    52,   160,    17,    55,    60,    61,   105,   175,   103,
      63,    64,   110,   111,   112,   113,   114,   115,   117,   119,
     120,   121,   122,    18,    19,    20,    21,    53,    23,   102,
      97,   101,   130,    16,   135,   123,   124,   125,   138,   134,
     142,   129,   143,   144,   105,   134,   117,   119,    17,   116,
     136,    16,    65,    66,    67,    68,   140,   146,   147,    99,
     100,    73,    74,    75,   148,   149,    17,   153,    18,    19,
      20,    21,    53,    23,   152,   163,    88,    89,   164,   166,
      62,    62,   150,   169,   105,   171,    18,    19,    20,    21,
      53,    23,   158,    10,    11,    12,    13,    14,    15,    62,
     172,    62,   134,   177,   178,    62,   170,    94,   157,   184,
      62,    62,    62,     1,     2,     0,     3,     4,   173,     5,
       0,     6,     7,     8,     9,     0,     0,    10,    11,    12,
      13,    14,    15,    16,     0,     0,   167,     0,     0,     0,
       0,     1,     2,     0,     3,     4,     0,     5,    17,     6,
       7,     8,     9,     0,     0,    10,    11,    12,    13,    14,
      15,    16,     0,     0,   168,     0,     0,     0,    18,    19,
      20,    21,    22,    23,     0,     0,    17,    10,    11,    12,
      13,    14,    99,   100,    73,    74,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,    19,    20,    21,
      22,    23,     1,     2,     0,     3,     4,     0,     5,     0,
       6,     7,     8,     9,     0,     0,    10,    11,    12,    13,
      14,    15,    16,     0,     0,   181,     0,     0,     0,     0,
       1,     2,     0,     3,     4,     0,     5,    17,     6,     7,
       8,     9,     0,     0,    10,    11,    12,    13,    14,    15,
      16,     0,     0,   182,     0,     0,     0,    18,    19,    20,
      21,    22,    23,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,    19,    20,    21,    22,
      23,     1,     2,     0,     3,     4,     0,     5,     0,     6,
       7,     8,     9,     0,     0,    10,    11,    12,    13,    14,
      15,    16,     0,     0,   188,     0,     0,     0,     0,     1,
       2,     0,     3,     4,     0,     5,    17,     6,     7,     8,
       9,     0,     0,    10,    11,    12,    13,    14,    15,    16,
       0,     0,   189,     0,     0,     0,    18,    19,    20,    21,
      22,    23,     1,     2,    17,     3,     4,     0,     5,     0,
       6,     7,     8,     9,     0,    16,    10,    11,    12,    13,
      14,    15,    16,     0,    18,    19,    20,    21,    22,    23,
      17,     0,   118,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,   155,   156,     0,     0,     0,     0,     0,
      18,    19,    20,    21,    53,    23,     0,    18,    19,    20,
      21,    22,    23,   174,     0,     0,   176,     0,     0,     0,
       0,   180,     0,     0,     0,     0,   126,     0,   185,   186,
       0,     0,     0,   187,    65,    66,    67,    68,    69,    70,
       0,    99,   100,    73,    74,    75,     0,     0,     0,     0,
       0,     0,   127,     0,     0,     0,     0,     0,    88,    89,
      65,    66,    67,    68,    69,    70,     0,    99,   100,    73,
      74,    75,     0,     0,     0,     0,     0,     0,   128,     0,
       0,     0,     0,     0,    88,    89,    65,    66,    67,    68,
      69,    70,     0,    99,   100,    73,    74,    75,     0,     0,
       0,     0,     0,     0,   131,     0,     0,     0,     0,     0,
      88,    89,    65,    66,    67,    68,    69,    70,     0,    99,
     100,    73,    74,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,    88,    89,    65,    66,
      67,    68,    69,    70,     0,    99,   100,    73,    74,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   141,
       0,     0,    88,    89,    65,    66,    67,    68,    69,    70,
       0,    99,   100,    73,    74,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   145,     0,     0,    88,    89,
      65,    66,    67,    68,    69,    70,     0,    99,   100,    73,
      74,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   154,     0,     0,    88,    89,    65,    66,    67,    68,
      69,    70,     0,    99,   100,    73,    74,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   165,     0,     0,
      88,    89,    65,    66,    67,    68,    69,    70,     0,    99,
     100,    73,    74,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   179,     0,    88,    89,    65,    66,
      67,    68,    69,    70,     0,    99,   100,    73,    74,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   137,    88,    89,    65,    66,    67,    68,    69,    70,
       0,    99,   100,    73,    74,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      65,    66,    67,    68,    69,    70,     0,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    65,    66,    67,    68,
      69,    70,     0,    99,   100,    73,    74,    75,    65,    66,
      67,    68,    69,    70,     0,    71,    72,    73,    74,    75,
      88,    89,     0,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    88,    89,    99,   100,    73,    74,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89
};

static const yytype_int16 yycheck[] =
{
      25,   107,    97,    15,    16,     8,     4,    24,    23,    23,
      23,    27,    27,    16,    17,    32,    33,    34,    35,    36,
      37,    23,    39,    40,    41,    42,    43,    25,    44,    44,
      27,    23,    17,    18,    19,    20,    21,    49,    23,    56,
      57,    23,   137,    46,    47,    48,    10,    50,    41,    42,
      43,    27,    16,    38,    62,    23,     0,    60,   164,    24,
      27,    62,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    58,    59,    60,    61,    62,    63,    62,
      23,    23,    62,    23,    44,    88,    89,    90,    24,   101,
      27,    94,    25,    25,    97,   107,    99,   100,    38,    39,
     103,    23,    32,    33,    34,    35,   109,    25,    24,    39,
      40,    41,    42,    43,    24,    62,    38,    24,    58,    59,
      60,    61,    62,    63,    27,    25,    56,    57,    29,    25,
     155,   156,   135,    24,   137,    28,    58,    59,    60,    61,
      62,    63,   145,    17,    18,    19,    20,    21,    22,   174,
      26,   176,   164,     5,    25,   180,   159,    49,   145,   177,
     185,   186,   187,     3,     4,    -1,     6,     7,   162,     9,
      -1,    11,    12,    13,    14,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    38,    11,
      12,    13,    14,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    -1,    -1,    38,    17,    18,    19,
      20,    21,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,     3,     4,    -1,     6,     7,    -1,     9,    -1,
      11,    12,    13,    14,    -1,    -1,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    38,    11,    12,
      13,    14,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,     3,     4,    -1,     6,     7,    -1,     9,    -1,    11,
      12,    13,    14,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    38,    11,    12,    13,
      14,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,     3,     4,    38,     6,     7,    -1,     9,    -1,
      11,    12,    13,    14,    -1,    23,    17,    18,    19,    20,
      21,    22,    23,    -1,    58,    59,    60,    61,    62,    63,
      38,    -1,    40,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,   143,   144,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    -1,    58,    59,    60,
      61,    62,    63,   163,    -1,    -1,   166,    -1,    -1,    -1,
      -1,   171,    -1,    -1,    -1,    -1,    24,    -1,   178,   179,
      -1,    -1,    -1,   183,    32,    33,    34,    35,    36,    37,
      -1,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    56,    57,
      32,    33,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    56,    57,    32,    33,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      56,    57,    32,    33,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    56,    57,    32,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    56,    57,    32,    33,    34,    35,    36,    37,
      -1,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    56,    57,
      32,    33,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    56,    57,    32,    33,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      56,    57,    32,    33,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    56,    57,    32,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    56,    57,    32,    33,    34,    35,    36,    37,
      -1,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      32,    33,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    32,    33,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    32,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      56,    57,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    56,    57,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     6,     7,     9,    11,    12,    13,    14,
      17,    18,    19,    20,    21,    22,    23,    38,    58,    59,
      60,    61,    62,    63,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    79,    80,    82,    83,
      84,    85,    86,    88,    89,    91,    23,    23,    23,    23,
      23,    27,    27,    62,    85,    62,    84,    84,    85,    85,
      23,     0,    67,    27,    62,    32,    33,    34,    35,    36,
      37,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      87,    85,    85,    85,    68,    84,    85,    23,    27,    39,
      40,    23,    62,    24,    24,    85,    90,    23,    27,    44,
      85,    85,    85,    85,    85,    85,    39,    85,    40,    85,
      85,    85,    85,    85,    85,    85,    24,    24,    24,    85,
      62,    24,    90,    81,    84,    44,    85,    29,    24,    81,
      85,    27,    27,    25,    25,    27,    25,    24,    24,    62,
      85,    90,    27,    24,    27,    66,    66,    71,    85,    10,
      16,    77,    78,    25,    29,    27,    25,    26,    26,    24,
      85,    28,    26,    77,    66,    81,    66,     5,    25,    28,
      66,    26,    26,    25,    72,    66,    66,    66,    26,    26
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    66,    66,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    68,    68,
      68,    69,    70,    71,    71,    72,    72,    72,    73,    74,
      75,    76,    77,    77,    78,    78,    79,    80,    81,    81,
      81,    82,    82,    83,    84,    84,    84,    84,    84,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    86,    86,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    88,    88,
      88,    88,    88,    88,    89,    89,    89,    90,    90,    90,
      91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     3,
       6,     4,     5,     3,     3,     7,    11,     9,     2,     2,
       3,     7,     2,     1,     4,     3,     7,    10,     4,     2,
       0,     8,     8,     5,     1,     1,     1,     1,     1,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     1,     0,
       4
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
#line 75 "./lenguaje/parser.y"
                       { printf("Analisis completado.\n"); root = (yyvsp[0].node);}
#line 1539 "./lenguaje/parser.tab.c"
    break;

  case 3: /* listainstrucciones: listainstrucciones instruccion  */
#line 79 "./lenguaje/parser.y"
                                        {(yyval.node) = ast_link((yyvsp[-1].node), (yyvsp[0].node));}
#line 1545 "./lenguaje/parser.tab.c"
    break;

  case 4: /* listainstrucciones: instruccion  */
#line 80 "./lenguaje/parser.y"
                                        { (yyval.node) = (yyvsp[0].node); }
#line 1551 "./lenguaje/parser.tab.c"
    break;

  case 18: /* DECLARACION: TIPO ID TK_IGUAL expr TK_PTCOMA  */
#line 100 "./lenguaje/parser.y"
                                                 { (yyval.node) = ast_var_decl((yyvsp[-3].str), (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1557 "./lenguaje/parser.tab.c"
    break;

  case 19: /* DECLARACION: TIPO ID TK_PTCOMA  */
#line 101 "./lenguaje/parser.y"
                                                 { (yyval.node) = ast_var_decl((yyvsp[-1].str), (yyvsp[-2].node), NULL); }
#line 1563 "./lenguaje/parser.tab.c"
    break;

  case 20: /* DECLARACION: TK_FINAL TIPO ID TK_IGUAL expr TK_PTCOMA  */
#line 102 "./lenguaje/parser.y"
                                                 {  (yyval.node) = ast_var_decl_const((yyvsp[-3].str), (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1569 "./lenguaje/parser.tab.c"
    break;

  case 21: /* ASIGNACION: expr OP_ASIGNACION expr TK_PTCOMA  */
#line 106 "./lenguaje/parser.y"
                                                       { (yyval.node) = ast_assign((yyvsp[-2].str), (yyvsp[-1].node), (yyvsp[-3].node)); }
#line 1575 "./lenguaje/parser.tab.c"
    break;

  case 22: /* IMPRIMIR: TK_PRINT TK_PA expr TK_PC TK_PTCOMA  */
#line 110 "./lenguaje/parser.y"
                                                  { (yyval.node) = ast_print_stmt((yyvsp[-2].node));}
#line 1581 "./lenguaje/parser.tab.c"
    break;

  case 23: /* INCREMENTO_DECREMENTO: expr TK_SUMA TK_SUMA  */
#line 113 "./lenguaje/parser.y"
                                   { (yyval.node) = ast_incremento_decremento("++", (yyvsp[-2].node)); }
#line 1587 "./lenguaje/parser.tab.c"
    break;

  case 24: /* INCREMENTO_DECREMENTO: expr TK_RESTA TK_RESTA  */
#line 114 "./lenguaje/parser.y"
                                   { (yyval.node) = ast_incremento_decremento("--", (yyvsp[-2].node)); }
#line 1593 "./lenguaje/parser.tab.c"
    break;

  case 25: /* IF: TK_IF TK_PA expr TK_PC TK_LLA listainstrucciones TK_LLC  */
#line 118 "./lenguaje/parser.y"
                                                            { (yyval.node) = ast_if((yyvsp[-4].node), (yyvsp[-1].node), NULL); }
#line 1599 "./lenguaje/parser.tab.c"
    break;

  case 26: /* IF: TK_IF TK_PA expr TK_PC TK_LLA listainstrucciones TK_LLC TK_ELSE TK_LLA listainstrucciones TK_LLC  */
#line 119 "./lenguaje/parser.y"
                                                                                                     { (yyval.node) = ast_if((yyvsp[-8].node), (yyvsp[-5].node), (yyvsp[-1].node)); }
#line 1605 "./lenguaje/parser.tab.c"
    break;

  case 27: /* IF: TK_IF TK_PA expr TK_PC TK_LLA listainstrucciones TK_LLC TK_ELSE IF  */
#line 120 "./lenguaje/parser.y"
                                                                       { (yyval.node) = ast_if((yyvsp[-6].node), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1611 "./lenguaje/parser.tab.c"
    break;

  case 28: /* BREAK: TK_BREAK TK_PTCOMA  */
#line 124 "./lenguaje/parser.y"
                            { (yyval.node) = ast_break(); }
#line 1617 "./lenguaje/parser.tab.c"
    break;

  case 29: /* CONTINUAR: TK_CONTINUE TK_PTCOMA  */
#line 128 "./lenguaje/parser.y"
                            { (yyval.node) = ast_continue(); }
#line 1623 "./lenguaje/parser.tab.c"
    break;

  case 30: /* RETORNAR: TK_RETURN expr TK_PTCOMA  */
#line 131 "./lenguaje/parser.y"
                             { (yyval.node) = ast_return((yyvsp[-1].node)); }
#line 1629 "./lenguaje/parser.tab.c"
    break;

  case 31: /* SWITCH: TK_SWITCH TK_PA expr TK_PC TK_LLA CASES TK_LLC  */
#line 135 "./lenguaje/parser.y"
                                                   { (yyval.node) = ast_switch((yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1635 "./lenguaje/parser.tab.c"
    break;

  case 32: /* CASES: CASE CASES  */
#line 139 "./lenguaje/parser.y"
                            { (yyval.node) = ast_link((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1641 "./lenguaje/parser.tab.c"
    break;

  case 33: /* CASES: CASE  */
#line 140 "./lenguaje/parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1647 "./lenguaje/parser.tab.c"
    break;

  case 34: /* CASE: TK_CASE expr TK_DOSPUNTOS listainstrucciones  */
#line 144 "./lenguaje/parser.y"
                                                  { (yyval.node) = ast_case((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1653 "./lenguaje/parser.tab.c"
    break;

  case 35: /* CASE: TK_DEFAULT TK_DOSPUNTOS listainstrucciones  */
#line 145 "./lenguaje/parser.y"
                                                  { (yyval.node) = ast_case(NULL, (yyvsp[0].node)); }
#line 1659 "./lenguaje/parser.tab.c"
    break;

  case 36: /* WHILE: TK_WHILE TK_PA expr TK_PC TK_LLA listainstrucciones TK_LLC  */
#line 149 "./lenguaje/parser.y"
                                                               { (yyval.node) = ast_while((yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1665 "./lenguaje/parser.tab.c"
    break;

  case 37: /* FOR: TK_FOR TK_PA DECLARACION expr TK_PTCOMA INCREMENTO_DECREMENTO TK_PC TK_LLA listainstrucciones TK_LLC  */
#line 153 "./lenguaje/parser.y"
                                                                                                         { (yyval.node) = ast_for((yyvsp[-7].node), (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1671 "./lenguaje/parser.tab.c"
    break;

  case 38: /* PARAMETROS: TIPO ID TK_COMA PARAMETROS  */
#line 157 "./lenguaje/parser.y"
                                   { (yyval.node) = ast_parametros((yyvsp[-2].str), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1677 "./lenguaje/parser.tab.c"
    break;

  case 39: /* PARAMETROS: TIPO ID  */
#line 158 "./lenguaje/parser.y"
                                   { (yyval.node) = ast_parametros((yyvsp[0].str), (yyvsp[-1].node), NULL); }
#line 1683 "./lenguaje/parser.tab.c"
    break;

  case 40: /* PARAMETROS: %empty  */
#line 159 "./lenguaje/parser.y"
                                   { (yyval.node) = NULL; }
#line 1689 "./lenguaje/parser.tab.c"
    break;

  case 41: /* DECLARAR_FUNCION: TIPO ID TK_PA PARAMETROS TK_PC TK_LLA listainstrucciones TK_LLC  */
#line 163 "./lenguaje/parser.y"
                                                                          { (yyval.node) = ast_funcion_decl((yyvsp[-6].str), (yyvsp[-4].node), (yyvsp[-7].node), (yyvsp[-1].node)); }
#line 1695 "./lenguaje/parser.tab.c"
    break;

  case 42: /* DECLARAR_FUNCION: TK_VOID ID TK_PA PARAMETROS TK_PC TK_LLA listainstrucciones TK_LLC  */
#line 164 "./lenguaje/parser.y"
                                                                          { (yyval.node) = ast_funcion_decl((yyvsp[-6].str), (yyvsp[-4].node), NULL, (yyvsp[-1].node)); }
#line 1701 "./lenguaje/parser.tab.c"
    break;

  case 43: /* LLAMADA_PROCEDIMIENTO: ID TK_PA VALORES TK_PC TK_PTCOMA  */
#line 168 "./lenguaje/parser.y"
                                     { (yyval.node) = ast_funcion_call((yyvsp[-4].str), (yyvsp[-2].node)); }
#line 1707 "./lenguaje/parser.tab.c"
    break;

  case 44: /* TIPO: TK_INT  */
#line 174 "./lenguaje/parser.y"
                 { (yyval.node) = ast_type("int");}
#line 1713 "./lenguaje/parser.tab.c"
    break;

  case 45: /* TIPO: TK_STRING  */
#line 175 "./lenguaje/parser.y"
                 { (yyval.node) = ast_type("string");}
#line 1719 "./lenguaje/parser.tab.c"
    break;

  case 46: /* TIPO: TK_FLOAT  */
#line 176 "./lenguaje/parser.y"
                 { (yyval.node) = ast_type("float");}
#line 1725 "./lenguaje/parser.tab.c"
    break;

  case 47: /* TIPO: TK_BOOL  */
#line 177 "./lenguaje/parser.y"
                 { (yyval.node) = ast_type("bool");}
#line 1731 "./lenguaje/parser.tab.c"
    break;

  case 48: /* TIPO: TK_CHAR  */
#line 178 "./lenguaje/parser.y"
                 { (yyval.node) = ast_type("char");}
#line 1737 "./lenguaje/parser.tab.c"
    break;

  case 49: /* expr: TK_PA expr TK_PC  */
#line 182 "./lenguaje/parser.y"
                                {(yyval.node) = (yyvsp[-1].node);}
#line 1743 "./lenguaje/parser.tab.c"
    break;

  case 50: /* expr: TK_PA TIPO TK_PC expr  */
#line 183 "./lenguaje/parser.y"
                                { (yyval.node) = ast_cast((yyvsp[0].node), (yyvsp[-2].node)); }
#line 1749 "./lenguaje/parser.tab.c"
    break;

  case 51: /* expr: INT  */
#line 184 "./lenguaje/parser.y"
                                { (yyval.node) = ast_literal((yyvsp[0].str)); }
#line 1755 "./lenguaje/parser.tab.c"
    break;

  case 52: /* expr: DECIMAL  */
#line 185 "./lenguaje/parser.y"
                                { (yyval.node) = ast_literal((yyvsp[0].str)); }
#line 1761 "./lenguaje/parser.tab.c"
    break;

  case 53: /* expr: CARACTER  */
#line 186 "./lenguaje/parser.y"
                                { (yyval.node) = ast_literal((yyvsp[0].str)); }
#line 1767 "./lenguaje/parser.tab.c"
    break;

  case 54: /* expr: CADENA  */
#line 187 "./lenguaje/parser.y"
                                { (yyval.node) = ast_literal((yyvsp[0].str)); }
#line 1773 "./lenguaje/parser.tab.c"
    break;

  case 55: /* expr: BOOL  */
#line 188 "./lenguaje/parser.y"
                                { (yyval.node) = ast_literal((yyvsp[0].str)); }
#line 1779 "./lenguaje/parser.tab.c"
    break;

  case 56: /* expr: ID  */
#line 189 "./lenguaje/parser.y"
                                { (yyval.node) = ast_identifier((yyvsp[0].str)); }
#line 1785 "./lenguaje/parser.tab.c"
    break;

  case 57: /* expr: ARITMETICOS  */
#line 190 "./lenguaje/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1791 "./lenguaje/parser.tab.c"
    break;

  case 58: /* expr: RELACIONALES  */
#line 191 "./lenguaje/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1797 "./lenguaje/parser.tab.c"
    break;

  case 59: /* expr: LOGICOS  */
#line 192 "./lenguaje/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1803 "./lenguaje/parser.tab.c"
    break;

  case 60: /* expr: LLAMADA_FUNCION  */
#line 193 "./lenguaje/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1809 "./lenguaje/parser.tab.c"
    break;

  case 61: /* ARITMETICOS: expr TK_SUMA expr  */
#line 199 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("+", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1815 "./lenguaje/parser.tab.c"
    break;

  case 62: /* ARITMETICOS: expr TK_RESTA expr  */
#line 200 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("-", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1821 "./lenguaje/parser.tab.c"
    break;

  case 63: /* ARITMETICOS: expr TK_MULTIPLICACION expr  */
#line 201 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("*", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1827 "./lenguaje/parser.tab.c"
    break;

  case 64: /* ARITMETICOS: expr TK_DIVISION expr  */
#line 202 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("/", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1833 "./lenguaje/parser.tab.c"
    break;

  case 65: /* ARITMETICOS: expr TK_MODULAR expr  */
#line 203 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("%", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1839 "./lenguaje/parser.tab.c"
    break;

  case 66: /* OP_ASIGNACION: TK_IGUAL  */
#line 207 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("="); }
#line 1845 "./lenguaje/parser.tab.c"
    break;

  case 67: /* OP_ASIGNACION: TK_MAS_IGUAL  */
#line 208 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("+="); }
#line 1851 "./lenguaje/parser.tab.c"
    break;

  case 68: /* OP_ASIGNACION: TK_MENOS_IGUAL  */
#line 209 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("-="); }
#line 1857 "./lenguaje/parser.tab.c"
    break;

  case 69: /* OP_ASIGNACION: TK_POR_IGUAL  */
#line 210 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("*="); }
#line 1863 "./lenguaje/parser.tab.c"
    break;

  case 70: /* OP_ASIGNACION: TK_DIVIDIR_IGUAL  */
#line 211 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("/="); }
#line 1869 "./lenguaje/parser.tab.c"
    break;

  case 71: /* OP_ASIGNACION: TK_PORCENTAJE_IGUAL  */
#line 212 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("%="); }
#line 1875 "./lenguaje/parser.tab.c"
    break;

  case 72: /* OP_ASIGNACION: TK_AND_IGUAL  */
#line 213 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("&="); }
#line 1881 "./lenguaje/parser.tab.c"
    break;

  case 73: /* OP_ASIGNACION: TK_OR_IGUAL  */
#line 214 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("|="); }
#line 1887 "./lenguaje/parser.tab.c"
    break;

  case 74: /* OP_ASIGNACION: TK_POTENCIA_IGUAL  */
#line 215 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("^="); }
#line 1893 "./lenguaje/parser.tab.c"
    break;

  case 75: /* OP_ASIGNACION: TK_MAYOR_MAYOR_IGUAL  */
#line 216 "./lenguaje/parser.y"
                             { (yyval.str) = strdup(">>="); }
#line 1899 "./lenguaje/parser.tab.c"
    break;

  case 76: /* OP_ASIGNACION: TK_MENOR_MENOR_IGUAL  */
#line 217 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("<<="); }
#line 1905 "./lenguaje/parser.tab.c"
    break;

  case 77: /* OP_ASIGNACION: TK_DOSPUNTOS_IGUAL  */
#line 218 "./lenguaje/parser.y"
                             { (yyval.str) = strdup(":="); }
#line 1911 "./lenguaje/parser.tab.c"
    break;

  case 78: /* RELACIONALES: expr TK_IGUAL_IGUAL expr  */
#line 223 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("==", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1917 "./lenguaje/parser.tab.c"
    break;

  case 79: /* RELACIONALES: expr TK_DIFERENTE expr  */
#line 224 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("!=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1923 "./lenguaje/parser.tab.c"
    break;

  case 80: /* RELACIONALES: expr TK_MAYOR_IGUAL expr  */
#line 225 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop(">=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1929 "./lenguaje/parser.tab.c"
    break;

  case 81: /* RELACIONALES: expr TK_MENOR_IGUAL expr  */
#line 226 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("<=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1935 "./lenguaje/parser.tab.c"
    break;

  case 82: /* RELACIONALES: expr TK_MAYOR expr  */
#line 227 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop(">", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1941 "./lenguaje/parser.tab.c"
    break;

  case 83: /* RELACIONALES: expr TK_MENOR expr  */
#line 228 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("<", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1947 "./lenguaje/parser.tab.c"
    break;

  case 84: /* LOGICOS: expr TK_AND expr  */
#line 233 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("&&", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1953 "./lenguaje/parser.tab.c"
    break;

  case 85: /* LOGICOS: expr TK_OR expr  */
#line 234 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("||", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1959 "./lenguaje/parser.tab.c"
    break;

  case 86: /* LOGICOS: TK_NOT expr  */
#line 235 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_unop("!", (yyvsp[0].node)); }
#line 1965 "./lenguaje/parser.tab.c"
    break;

  case 87: /* VALORES: expr TK_COMA VALORES  */
#line 240 "./lenguaje/parser.y"
                               { (yyval.node) = ast_link((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1971 "./lenguaje/parser.tab.c"
    break;

  case 88: /* VALORES: expr  */
#line 241 "./lenguaje/parser.y"
                               { (yyval.node) = ast_link((yyvsp[0].node), NULL); }
#line 1977 "./lenguaje/parser.tab.c"
    break;

  case 89: /* VALORES: %empty  */
#line 242 "./lenguaje/parser.y"
                              { (yyval.node) = NULL; }
#line 1983 "./lenguaje/parser.tab.c"
    break;

  case 90: /* LLAMADA_FUNCION: ID TK_PA VALORES TK_PC  */
#line 246 "./lenguaje/parser.y"
                           { (yyval.node) = ast_funcion_call((yyvsp[-3].str), (yyvsp[-1].node)); }
#line 1989 "./lenguaje/parser.tab.c"
    break;


#line 1993 "./lenguaje/parser.tab.c"

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

#line 249 "./lenguaje/parser.y"







void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
