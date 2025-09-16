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
  YYSYMBOL_TK_PA = 32,                     /* TK_PA  */
  YYSYMBOL_TK_PC = 33,                     /* TK_PC  */
  YYSYMBOL_TK_LLA = 34,                    /* TK_LLA  */
  YYSYMBOL_TK_LLC = 35,                    /* TK_LLC  */
  YYSYMBOL_TK_PTCOMA = 36,                 /* TK_PTCOMA  */
  YYSYMBOL_TK_DOSPUNTOS = 37,              /* TK_DOSPUNTOS  */
  YYSYMBOL_TK_COMA = 38,                   /* TK_COMA  */
  YYSYMBOL_TK_CA = 39,                     /* TK_CA  */
  YYSYMBOL_TK_CC = 40,                     /* TK_CC  */
  YYSYMBOL_TK_MAYOR = 41,                  /* TK_MAYOR  */
  YYSYMBOL_TK_MENOR = 42,                  /* TK_MENOR  */
  YYSYMBOL_TK_MAYOR_IGUAL = 43,            /* TK_MAYOR_IGUAL  */
  YYSYMBOL_TK_MENOR_IGUAL = 44,            /* TK_MENOR_IGUAL  */
  YYSYMBOL_TK_AND = 45,                    /* TK_AND  */
  YYSYMBOL_TK_OR = 46,                     /* TK_OR  */
  YYSYMBOL_TK_NOT = 47,                    /* TK_NOT  */
  YYSYMBOL_TK_SUMA = 48,                   /* TK_SUMA  */
  YYSYMBOL_TK_RESTA = 49,                  /* TK_RESTA  */
  YYSYMBOL_TK_MULTIPLICACION = 50,         /* TK_MULTIPLICACION  */
  YYSYMBOL_TK_DIVISION = 51,               /* TK_DIVISION  */
  YYSYMBOL_TK_MODULAR = 52,                /* TK_MODULAR  */
  YYSYMBOL_TK_IGUAL = 53,                  /* TK_IGUAL  */
  YYSYMBOL_TK_MAS_IGUAL = 54,              /* TK_MAS_IGUAL  */
  YYSYMBOL_TK_MENOS_IGUAL = 55,            /* TK_MENOS_IGUAL  */
  YYSYMBOL_TK_POR_IGUAL = 56,              /* TK_POR_IGUAL  */
  YYSYMBOL_TK_DIVIDIR_IGUAL = 57,          /* TK_DIVIDIR_IGUAL  */
  YYSYMBOL_TK_PORCENTAJE_IGUAL = 58,       /* TK_PORCENTAJE_IGUAL  */
  YYSYMBOL_TK_AND_IGUAL = 59,              /* TK_AND_IGUAL  */
  YYSYMBOL_TK_OR_IGUAL = 60,               /* TK_OR_IGUAL  */
  YYSYMBOL_TK_POTENCIA_IGUAL = 61,         /* TK_POTENCIA_IGUAL  */
  YYSYMBOL_TK_MAYOR_MAYOR_IGUAL = 62,      /* TK_MAYOR_MAYOR_IGUAL  */
  YYSYMBOL_TK_MENOR_MENOR_IGUAL = 63,      /* TK_MENOR_MENOR_IGUAL  */
  YYSYMBOL_TK_DOSPUNTOS_IGUAL = 64,        /* TK_DOSPUNTOS_IGUAL  */
  YYSYMBOL_TK_IGUAL_IGUAL = 65,            /* TK_IGUAL_IGUAL  */
  YYSYMBOL_TK_DIFERENTE = 66,              /* TK_DIFERENTE  */
  YYSYMBOL_INT = 67,                       /* INT  */
  YYSYMBOL_DECIMAL = 68,                   /* DECIMAL  */
  YYSYMBOL_CARACTER = 69,                  /* CARACTER  */
  YYSYMBOL_CADENA = 70,                    /* CADENA  */
  YYSYMBOL_ID = 71,                        /* ID  */
  YYSYMBOL_BOOL = 72,                      /* BOOL  */
  YYSYMBOL_DOUBLE = 73,                    /* DOUBLE  */
  YYSYMBOL_YYACCEPT = 74,                  /* $accept  */
  YYSYMBOL_inicio = 75,                    /* inicio  */
  YYSYMBOL_listainstrucciones = 76,        /* listainstrucciones  */
  YYSYMBOL_instruccion = 77,               /* instruccion  */
  YYSYMBOL_DECLARACION = 78,               /* DECLARACION  */
  YYSYMBOL_DECLARAR_VECTOR = 79,           /* DECLARAR_VECTOR  */
  YYSYMBOL_ASIGNACION = 80,                /* ASIGNACION  */
  YYSYMBOL_IMPRIMIR = 81,                  /* IMPRIMIR  */
  YYSYMBOL_INCREMENTO_DECREMENTO = 82,     /* INCREMENTO_DECREMENTO  */
  YYSYMBOL_IF = 83,                        /* IF  */
  YYSYMBOL_BREAK = 84,                     /* BREAK  */
  YYSYMBOL_CONTINUAR = 85,                 /* CONTINUAR  */
  YYSYMBOL_RETORNAR = 86,                  /* RETORNAR  */
  YYSYMBOL_SWITCH = 87,                    /* SWITCH  */
  YYSYMBOL_CASES = 88,                     /* CASES  */
  YYSYMBOL_CASE = 89,                      /* CASE  */
  YYSYMBOL_WHILE = 90,                     /* WHILE  */
  YYSYMBOL_FOR = 91,                       /* FOR  */
  YYSYMBOL_PARAMETROS = 92,                /* PARAMETROS  */
  YYSYMBOL_DECLARAR_FUNCION = 93,          /* DECLARAR_FUNCION  */
  YYSYMBOL_LLAMADA_PROCEDIMIENTO = 94,     /* LLAMADA_PROCEDIMIENTO  */
  YYSYMBOL_TIPO = 95,                      /* TIPO  */
  YYSYMBOL_expr = 96,                      /* expr  */
  YYSYMBOL_ARITMETICOS = 97,               /* ARITMETICOS  */
  YYSYMBOL_OP_ASIGNACION = 98,             /* OP_ASIGNACION  */
  YYSYMBOL_RELACIONALES = 99,              /* RELACIONALES  */
  YYSYMBOL_LOGICOS = 100,                  /* LOGICOS  */
  YYSYMBOL_VALORES = 101,                  /* VALORES  */
  YYSYMBOL_LLAMADA_FUNCION = 102           /* LLAMADA_FUNCION  */
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
#define YYFINAL  76
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1350

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  243

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   328


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
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    75,    75,    79,    80,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,   101,
     102,   103,   107,   111,   115,   116,   120,   123,   124,   128,
     129,   130,   134,   138,   141,   145,   149,   150,   154,   155,
     159,   163,   167,   168,   169,   173,   174,   178,   184,   185,
     186,   187,   188,   189,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   219,   220,   221,   222,   223,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   243,   244,   245,   246,   247,   248,   249,   254,   255,
     256,   261,   262,   263,   267
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
  "TK_FINAL", "TK_PA", "TK_PC", "TK_LLA", "TK_LLC", "TK_PTCOMA",
  "TK_DOSPUNTOS", "TK_COMA", "TK_CA", "TK_CC", "TK_MAYOR", "TK_MENOR",
  "TK_MAYOR_IGUAL", "TK_MENOR_IGUAL", "TK_AND", "TK_OR", "TK_NOT",
  "TK_SUMA", "TK_RESTA", "TK_MULTIPLICACION", "TK_DIVISION", "TK_MODULAR",
  "TK_IGUAL", "TK_MAS_IGUAL", "TK_MENOS_IGUAL", "TK_POR_IGUAL",
  "TK_DIVIDIR_IGUAL", "TK_PORCENTAJE_IGUAL", "TK_AND_IGUAL", "TK_OR_IGUAL",
  "TK_POTENCIA_IGUAL", "TK_MAYOR_MAYOR_IGUAL", "TK_MENOR_MENOR_IGUAL",
  "TK_DOSPUNTOS_IGUAL", "TK_IGUAL_IGUAL", "TK_DIFERENTE", "INT", "DECIMAL",
  "CARACTER", "CADENA", "ID", "BOOL", "DOUBLE", "$accept", "inicio",
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

#define YYPACT_NINF (-120)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     508,   -24,    11,    20,    22,    23,   -26,    32,   586,    -2,
    -120,  -120,  -120,  -120,  -120,    39,    41,    54,    57,    58,
    -120,   124,   524,   586,  -120,  -120,  -120,  -120,    12,  -120,
    -120,    91,   508,  -120,  -120,  -120,  -120,  -120,    65,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,   -34,   619,
    -120,  -120,  -120,  -120,   586,   586,   586,    74,   586,  -120,
    -120,    33,   -25,    79,   586,   586,   586,   586,   586,    44,
      83,   657,  1284,  -120,   586,   586,  -120,  -120,  -120,    77,
      17,    88,   586,   586,   586,   586,   586,   586,   106,   535,
     586,   586,   586,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,   586,   586,   586,   683,   709,
     735,   586,    50,   761,   586,   586,  -120,   586,   586,   124,
     787,   813,   839,   865,   891,    69,   586,  -120,   917,    90,
     944,    66,   124,  -120,   586,   586,   -17,   -17,   -17,   -17,
    1284,  1258,  -120,   -22,  -120,   -22,    96,    96,    96,   -17,
     -17,   970,    92,   102,   105,   996,   -14,   113,   107,  1023,
     115,    78,  -120,  -120,  -120,  -120,   586,   586,  1206,   586,
     114,   230,   103,   118,  1049,  1075,  -120,  -120,   508,   508,
     586,    98,  -120,  -120,   121,   119,   127,  1101,  -120,  -120,
     586,    28,   128,  -120,  -120,   205,   235,   130,  1232,   586,
     129,   132,    98,   508,   124,  -120,  -120,  1127,   124,   586,
     508,   163,  -120,   135,  1153,   508,  -120,  -120,   306,  -120,
    -120,   131,   136,   336,     2,   508,   508,   508,  -120,   586,
     144,  -120,   508,  -120,   407,   508,  1180,  -120,   437,  -120,
     145,  -120,  -120
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    50,    49,    51,    52,     0,     0,     0,     0,     0,
      53,     0,     0,     0,    61,    62,    63,    64,    67,    65,
      66,     0,     2,     4,     6,    18,     7,     5,     0,     8,
      11,    14,    15,    10,    12,    13,    16,    17,     0,     0,
      68,    69,    70,    71,     0,     0,     0,     0,     0,    33,
      32,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,    73,   103,     0,     1,     3,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,     0,    34,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,    54,   102,     0,
       0,     0,    44,    20,     0,     0,    96,    97,    94,    95,
      98,    99,    27,    74,    28,    75,    76,    77,    78,    91,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,   103,     0,    60,   103,
     104,    72,     0,     0,     0,     0,    24,    26,     0,     0,
       0,     0,   104,    72,     0,    43,     0,     0,   101,    47,
       0,     0,     0,    19,    92,     0,     0,     0,     0,     0,
       0,     0,    37,     0,    44,    59,    21,     0,     0,   103,
       0,    29,    40,     0,     0,     0,    35,    36,     0,    42,
      25,     0,     0,     0,     0,     0,     0,    39,    46,     0,
       0,    45,     0,    31,     0,    38,     0,    23,     0,    41,
       0,    30,    22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -120,  -120,   -91,   -31,   126,  -120,  -120,  -120,     4,   -38,
    -120,  -120,  -120,  -120,   -12,  -120,  -120,  -120,  -119,  -120,
    -120,   -19,    -8,  -120,    24,  -120,  -120,  -105,  -120
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,   201,   202,    44,    45,   160,    46,
      47,    48,    49,    50,   107,    51,    52,   129,    53
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      62,    77,    69,    70,    81,    79,     2,    81,    54,   158,
      59,   116,    81,   173,    71,    72,    82,    83,    84,    85,
      86,    87,   133,   117,   118,    90,    91,    92,    90,    91,
      92,   117,   118,    90,    91,    92,   232,    80,   112,   134,
     105,   106,    73,    55,    74,   208,   108,   109,   110,   132,
     113,    75,    56,   133,    57,    58,   120,   121,   122,   123,
     124,   186,   209,    73,   188,   114,   128,   130,    60,    63,
     134,    64,   115,    65,   136,   137,   138,   139,   140,   141,
     143,   145,   146,   147,   148,   219,    66,   195,   196,    67,
      68,    76,    10,    11,    12,    13,    14,   149,   150,   151,
     161,    78,    20,   155,   222,    21,   128,   159,   199,   143,
     145,   119,   218,   161,   200,   125,   126,   131,   168,   223,
     135,   156,   167,   170,   227,    81,   174,   175,   177,    15,
      16,    17,    18,    19,   234,   235,   178,   172,    22,   179,
     182,   238,    10,    11,    12,    13,    14,   181,   184,   185,
     189,   192,    20,    23,   142,   203,   191,   204,   128,   187,
     205,   128,   210,   213,    77,    77,   215,   216,   224,   225,
     229,   230,   198,    24,    25,    26,    27,    61,    29,    30,
     237,   242,   207,   111,   197,   161,   233,    77,     0,   221,
     217,   214,    77,     0,     0,   190,    77,     0,     0,     0,
       0,   128,     0,    77,    77,     0,     0,    77,     1,     2,
       0,     3,     4,     0,     5,     0,     6,     7,     8,     9,
       0,   236,     0,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,     0,    21,    22,     1,     2,
     211,     3,     4,     0,     5,     0,     6,     7,     8,     9,
       0,     0,    23,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,     0,    21,    22,     0,     0,
     212,     0,    24,    25,    26,    27,    28,    29,    30,     0,
       0,     0,    23,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,     0,     0,     0,     0,     0,
       0,     0,    24,    25,    26,    27,    28,    29,    30,     1,
       2,     0,     3,     4,     0,     5,     0,     6,     7,     8,
       9,     0,     0,     0,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,    21,    22,     1,
       2,   228,     3,     4,     0,     5,     0,     6,     7,     8,
       9,     0,     0,    23,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,    21,    22,     0,
       0,   231,     0,    24,    25,    26,    27,    28,    29,    30,
       0,     0,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,    26,    27,    28,    29,    30,
       1,     2,     0,     3,     4,     0,     5,     0,     6,     7,
       8,     9,     0,     0,     0,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,    21,    22,
       1,     2,   239,     3,     4,     0,     5,     0,     6,     7,
       8,     9,     0,     0,    23,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,    21,    22,
       0,     0,   241,     0,    24,    25,    26,    27,    28,    29,
      30,     0,     0,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    25,    26,    27,    28,    29,
      30,     1,     2,     0,     3,     4,     0,     5,     0,     6,
       7,     8,     9,     0,     0,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,     0,    21,
      22,     0,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,    23,    22,     0,    15,    16,
      17,    18,    19,     0,     0,     0,     0,    22,     0,     0,
       0,    23,     0,     0,     0,    24,    25,    26,    27,    28,
      29,    30,    23,     0,   144,     0,     0,     0,     0,     0,
       0,    24,    25,    26,    27,    61,    29,    30,     0,     0,
       0,     0,    24,    25,    26,    27,    61,    29,    30,    15,
      16,    17,    18,    19,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,     0,     0,    24,    25,    26,    27,    61,    29,    30,
      82,    83,    84,    85,    86,    87,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    81,     0,     0,     0,
     127,     0,     0,     0,     0,     0,     0,     0,    82,    83,
      84,    85,    86,    87,     0,   117,   118,    90,    91,    92,
       0,     0,    81,     0,     0,     0,   152,     0,     0,     0,
       0,     0,   105,   106,    82,    83,    84,    85,    86,    87,
       0,   117,   118,    90,    91,    92,     0,     0,    81,     0,
       0,     0,   153,     0,     0,     0,     0,     0,   105,   106,
      82,    83,    84,    85,    86,    87,     0,   117,   118,    90,
      91,    92,     0,     0,    81,     0,     0,     0,   154,     0,
       0,     0,     0,     0,   105,   106,    82,    83,    84,    85,
      86,    87,     0,   117,   118,    90,    91,    92,     0,     0,
      81,     0,     0,     0,   157,     0,     0,     0,     0,     0,
     105,   106,    82,    83,    84,    85,    86,    87,     0,   117,
     118,    90,    91,    92,     0,     0,    81,     0,     0,     0,
     162,     0,     0,     0,     0,     0,   105,   106,    82,    83,
      84,    85,    86,    87,     0,   117,   118,    90,    91,    92,
       0,     0,    81,     0,     0,     0,   163,     0,     0,     0,
       0,     0,   105,   106,    82,    83,    84,    85,    86,    87,
       0,   117,   118,    90,    91,    92,     0,     0,    81,     0,
       0,     0,   164,     0,     0,     0,     0,     0,   105,   106,
      82,    83,    84,    85,    86,    87,     0,   117,   118,    90,
      91,    92,     0,     0,    81,     0,     0,     0,   165,     0,
       0,     0,     0,     0,   105,   106,    82,    83,    84,    85,
      86,    87,     0,   117,   118,    90,    91,    92,     0,     0,
      81,     0,     0,     0,     0,     0,     0,     0,     0,   166,
     105,   106,    82,    83,    84,    85,    86,    87,     0,   117,
     118,    90,    91,    92,     0,     0,    81,     0,     0,     0,
       0,     0,     0,     0,     0,   169,   105,   106,    82,    83,
      84,    85,    86,    87,     0,   117,   118,    90,    91,    92,
       0,     0,     0,    81,     0,     0,     0,     0,     0,     0,
       0,     0,   105,   106,   171,    82,    83,    84,    85,    86,
      87,     0,   117,   118,    90,    91,    92,     0,     0,    81,
       0,     0,     0,     0,     0,     0,   176,     0,     0,   105,
     106,    82,    83,    84,    85,    86,    87,     0,   117,   118,
      90,    91,    92,     0,     0,    81,     0,     0,     0,     0,
       0,     0,   180,     0,     0,   105,   106,    82,    83,    84,
      85,    86,    87,     0,   117,   118,    90,    91,    92,     0,
       0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,   183,    82,    83,    84,    85,    86,    87,
       0,   117,   118,    90,    91,    92,     0,     0,    81,     0,
       0,     0,     0,     0,     0,   193,     0,     0,   105,   106,
      82,    83,    84,    85,    86,    87,     0,   117,   118,    90,
      91,    92,     0,     0,    81,     0,     0,     0,   194,     0,
       0,     0,     0,     0,   105,   106,    82,    83,    84,    85,
      86,    87,     0,   117,   118,    90,    91,    92,     0,     0,
      81,     0,     0,     0,     0,     0,     0,   206,     0,     0,
     105,   106,    82,    83,    84,    85,    86,    87,     0,   117,
     118,    90,    91,    92,     0,     0,    81,     0,     0,     0,
       0,     0,     0,   220,     0,     0,   105,   106,    82,    83,
      84,    85,    86,    87,     0,   117,   118,    90,    91,    92,
       0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
     226,     0,   105,   106,    82,    83,    84,    85,    86,    87,
       0,   117,   118,    90,    91,    92,     0,     0,     0,    81,
       0,     0,     0,     0,     0,     0,     0,     0,   105,   106,
     240,    82,    83,    84,    85,    86,    87,     0,   117,   118,
      90,    91,    92,     0,     0,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,   106,    82,    83,    84,
      85,    86,    87,     0,   117,   118,    90,    91,    92,     0,
       0,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,    82,    83,    84,    85,    86,    87,     0,
      88,    89,    90,    91,    92,     0,     0,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,   106,    82,
      83,    84,    85,    86,     0,     0,   117,   118,    90,    91,
      92,     0,     0,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,    82,    83,    84,    85,     0,
       0,     0,   117,   118,    90,    91,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
     106
};

static const yytype_int16 yycheck[] =
{
       8,    32,    21,    22,    29,    39,     4,    29,    32,   114,
      36,    36,    29,   132,    22,    23,    41,    42,    43,    44,
      45,    46,    36,    48,    49,    50,    51,    52,    50,    51,
      52,    48,    49,    50,    51,    52,    34,    71,    57,    53,
      65,    66,    30,    32,    32,    17,    54,    55,    56,    32,
      58,    39,    32,    36,    32,    32,    64,    65,    66,    67,
      68,   166,    34,    30,   169,    32,    74,    75,    36,    71,
      53,    32,    39,    32,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,   204,    32,   178,   179,    32,
      32,     0,    18,    19,    20,    21,    22,   105,   106,   107,
     119,    36,    28,   111,   209,    31,   114,   115,    10,   117,
     118,    32,   203,   132,    16,    71,    33,    40,   126,   210,
      32,    71,    53,    33,   215,    29,   134,   135,    36,    23,
      24,    25,    26,    27,   225,   226,    34,    71,    32,    34,
      33,   232,    18,    19,    20,    21,    22,    34,    33,    71,
      36,    33,    28,    47,    48,    34,    53,    38,   166,   167,
      33,   169,    34,    33,   195,   196,    37,    35,     5,    34,
      39,    35,   180,    67,    68,    69,    70,    71,    72,    73,
      36,    36,   190,    57,   180,   204,   224,   218,    -1,   208,
     202,   199,   223,    -1,    -1,   171,   227,    -1,    -1,    -1,
      -1,   209,    -1,   234,   235,    -1,    -1,   238,     3,     4,
      -1,     6,     7,    -1,     9,    -1,    11,    12,    13,    14,
      -1,   229,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    31,    32,     3,     4,
      35,     6,     7,    -1,     9,    -1,    11,    12,    13,    14,
      -1,    -1,    47,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    31,    32,    -1,    -1,
      35,    -1,    67,    68,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    47,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    73,     3,
       4,    -1,     6,     7,    -1,     9,    -1,    11,    12,    13,
      14,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    31,    32,     3,
       4,    35,     6,     7,    -1,     9,    -1,    11,    12,    13,
      14,    -1,    -1,    47,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    31,    32,    -1,
      -1,    35,    -1,    67,    68,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    73,
       3,     4,    -1,     6,     7,    -1,     9,    -1,    11,    12,
      13,    14,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    31,    32,
       3,     4,    35,     6,     7,    -1,     9,    -1,    11,    12,
      13,    14,    -1,    -1,    47,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    31,    32,
      -1,    -1,    35,    -1,    67,    68,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,
      73,     3,     4,    -1,     6,     7,    -1,     9,    -1,    11,
      12,    13,    14,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    31,
      32,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    47,    32,    -1,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,    73,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    73,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    73,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    29,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    51,    52,
      -1,    -1,    29,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    65,    66,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    51,    52,    -1,    -1,    29,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    65,    66,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      51,    52,    -1,    -1,    29,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    65,    66,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    51,    52,    -1,    -1,
      29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      65,    66,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    51,    52,    -1,    -1,    29,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    65,    66,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    51,    52,
      -1,    -1,    29,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    65,    66,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    51,    52,    -1,    -1,    29,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    65,    66,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      51,    52,    -1,    -1,    29,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    65,    66,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    51,    52,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      65,    66,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    51,    52,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    65,    66,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    51,    52,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    65,
      66,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    51,    52,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    65,    66,    41,    42,    43,
      44,    45,    46,    -1,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    51,    52,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    65,    66,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      51,    52,    -1,    -1,    29,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    65,    66,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    51,    52,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      65,    66,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    51,    52,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    65,    66,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    51,    52,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    65,    66,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    51,    52,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    51,    52,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    41,    42,    43,
      44,    45,    46,    -1,    48,    49,    50,    51,    52,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    51,    52,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    41,
      42,    43,    44,    45,    -1,    -1,    48,    49,    50,    51,
      52,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    41,    42,    43,    44,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      66
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     6,     7,     9,    11,    12,    13,    14,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    31,    32,    47,    67,    68,    69,    70,    71,    72,
      73,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    90,    91,    93,    94,    95,    96,
      97,    99,   100,   102,    32,    32,    32,    32,    32,    36,
      36,    71,    96,    71,    32,    32,    32,    32,    32,    95,
      95,    96,    96,    30,    32,    39,     0,    77,    36,    39,
      71,    29,    41,    42,    43,    44,    45,    46,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    98,    96,    96,
      96,    78,    95,    96,    32,    39,    36,    48,    49,    32,
      96,    96,    96,    96,    96,    71,    33,    33,    96,   101,
      96,    40,    32,    36,    53,    32,    96,    96,    96,    96,
      96,    96,    48,    96,    49,    96,    96,    96,    96,    96,
      96,    96,    33,    33,    33,    96,    71,    33,   101,    96,
      92,    95,    33,    33,    33,    33,    38,    53,    96,    38,
      33,    40,    71,    92,    96,    96,    36,    36,    34,    34,
      36,    34,    33,    40,    33,    71,   101,    96,   101,    36,
      98,    53,    33,    36,    33,    76,    76,    82,    96,    10,
      16,    88,    89,    34,    38,    33,    36,    96,    17,    34,
      34,    35,    35,    33,    96,    37,    35,    88,    76,    92,
      36,    95,   101,    76,     5,    34,    37,    76,    35,    39,
      35,    35,    34,    83,    76,    76,    96,    36,    76,    35,
      40,    35,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    74,    75,    76,    76,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    78,
      78,    78,    79,    79,    80,    80,    81,    82,    82,    83,
      83,    83,    84,    85,    86,    87,    88,    88,    89,    89,
      90,    91,    92,    92,    92,    93,    93,    94,    95,    95,
      95,    95,    95,    95,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    97,    97,    97,    97,    97,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    99,    99,    99,    99,    99,    99,    99,   100,   100,
     100,   101,   101,   101,   102
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       3,     6,    11,     9,     4,     7,     5,     3,     3,     7,
      11,     9,     2,     2,     3,     7,     2,     1,     4,     3,
       7,    10,     4,     2,     0,     8,     8,     5,     1,     1,
       1,     1,     1,     1,     3,     4,     4,     4,     4,     6,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     2,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     5,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     1,     0,     4
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
#line 1674 "./lenguaje/parser.tab.c"
    break;

  case 3: /* listainstrucciones: listainstrucciones instruccion  */
#line 79 "./lenguaje/parser.y"
                                        {(yyval.node) = ast_link((yyvsp[-1].node), (yyvsp[0].node));}
#line 1680 "./lenguaje/parser.tab.c"
    break;

  case 4: /* listainstrucciones: instruccion  */
#line 80 "./lenguaje/parser.y"
                                        { (yyval.node) = (yyvsp[0].node); }
#line 1686 "./lenguaje/parser.tab.c"
    break;

  case 19: /* DECLARACION: TIPO ID TK_IGUAL expr TK_PTCOMA  */
#line 101 "./lenguaje/parser.y"
                                                 { (yyval.node) = ast_var_decl((yyvsp[-3].str), (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1692 "./lenguaje/parser.tab.c"
    break;

  case 20: /* DECLARACION: TIPO ID TK_PTCOMA  */
#line 102 "./lenguaje/parser.y"
                                                 { (yyval.node) = ast_var_decl((yyvsp[-1].str), (yyvsp[-2].node), NULL); }
#line 1698 "./lenguaje/parser.tab.c"
    break;

  case 21: /* DECLARACION: TK_FINAL TIPO ID TK_IGUAL expr TK_PTCOMA  */
#line 103 "./lenguaje/parser.y"
                                                 {  (yyval.node) = ast_var_decl_const((yyvsp[-3].str), (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1704 "./lenguaje/parser.tab.c"
    break;

  case 22: /* DECLARAR_VECTOR: TIPO TK_CA TK_CC ID TK_IGUAL TK_NUEVO TIPO TK_CA expr TK_CC TK_PTCOMA  */
#line 108 "./lenguaje/parser.y"
      { if ((yyvsp[-10].node) && (yyvsp[-4].node) && strcmp((yyvsp[-10].node)->value,(yyvsp[-4].node)->value)==0) (yyval.node) = ast_vector_decl((yyvsp[-7].str),(yyvsp[-10].node),(yyvsp[-2].node));
      else (yyval.node) = NULL; }
#line 1711 "./lenguaje/parser.tab.c"
    break;

  case 23: /* DECLARAR_VECTOR: TIPO TK_CA TK_CC ID TK_IGUAL TK_LLA VALORES TK_LLC TK_PTCOMA  */
#line 111 "./lenguaje/parser.y"
                                                                 { (yyval.node) = ast_vector_decl_init((yyvsp[-5].str),(yyvsp[-8].node),(yyvsp[-2].node)); }
#line 1717 "./lenguaje/parser.tab.c"
    break;

  case 24: /* ASIGNACION: expr OP_ASIGNACION expr TK_PTCOMA  */
#line 115 "./lenguaje/parser.y"
                                                         { (yyval.node) = ast_assign((yyvsp[-2].str), (yyvsp[-1].node), (yyvsp[-3].node)); }
#line 1723 "./lenguaje/parser.tab.c"
    break;

  case 25: /* ASIGNACION: ID TK_CA expr TK_CC OP_ASIGNACION expr TK_PTCOMA  */
#line 116 "./lenguaje/parser.y"
                                                         { (yyval.node) = ast_assign((yyvsp[-2].str), (yyvsp[-1].node), ast_index1((yyvsp[-6].str), (yyvsp[-4].node))); }
#line 1729 "./lenguaje/parser.tab.c"
    break;

  case 26: /* IMPRIMIR: TK_PRINT TK_PA expr TK_PC TK_PTCOMA  */
#line 120 "./lenguaje/parser.y"
                                                  { (yyval.node) = ast_print_stmt((yyvsp[-2].node));}
#line 1735 "./lenguaje/parser.tab.c"
    break;

  case 27: /* INCREMENTO_DECREMENTO: expr TK_SUMA TK_SUMA  */
#line 123 "./lenguaje/parser.y"
                                   { (yyval.node) = ast_incremento_decremento("++", (yyvsp[-2].node)); }
#line 1741 "./lenguaje/parser.tab.c"
    break;

  case 28: /* INCREMENTO_DECREMENTO: expr TK_RESTA TK_RESTA  */
#line 124 "./lenguaje/parser.y"
                                   { (yyval.node) = ast_incremento_decremento("--", (yyvsp[-2].node)); }
#line 1747 "./lenguaje/parser.tab.c"
    break;

  case 29: /* IF: TK_IF TK_PA expr TK_PC TK_LLA listainstrucciones TK_LLC  */
#line 128 "./lenguaje/parser.y"
                                                            { (yyval.node) = ast_if((yyvsp[-4].node), (yyvsp[-1].node), NULL); }
#line 1753 "./lenguaje/parser.tab.c"
    break;

  case 30: /* IF: TK_IF TK_PA expr TK_PC TK_LLA listainstrucciones TK_LLC TK_ELSE TK_LLA listainstrucciones TK_LLC  */
#line 129 "./lenguaje/parser.y"
                                                                                                     { (yyval.node) = ast_if((yyvsp[-8].node), (yyvsp[-5].node), (yyvsp[-1].node)); }
#line 1759 "./lenguaje/parser.tab.c"
    break;

  case 31: /* IF: TK_IF TK_PA expr TK_PC TK_LLA listainstrucciones TK_LLC TK_ELSE IF  */
#line 130 "./lenguaje/parser.y"
                                                                       { (yyval.node) = ast_if((yyvsp[-6].node), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1765 "./lenguaje/parser.tab.c"
    break;

  case 32: /* BREAK: TK_BREAK TK_PTCOMA  */
#line 134 "./lenguaje/parser.y"
                            { (yyval.node) = ast_break(); }
#line 1771 "./lenguaje/parser.tab.c"
    break;

  case 33: /* CONTINUAR: TK_CONTINUE TK_PTCOMA  */
#line 138 "./lenguaje/parser.y"
                            { (yyval.node) = ast_continue(); }
#line 1777 "./lenguaje/parser.tab.c"
    break;

  case 34: /* RETORNAR: TK_RETURN expr TK_PTCOMA  */
#line 141 "./lenguaje/parser.y"
                             { (yyval.node) = ast_return((yyvsp[-1].node)); }
#line 1783 "./lenguaje/parser.tab.c"
    break;

  case 35: /* SWITCH: TK_SWITCH TK_PA expr TK_PC TK_LLA CASES TK_LLC  */
#line 145 "./lenguaje/parser.y"
                                                   { (yyval.node) = ast_switch((yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1789 "./lenguaje/parser.tab.c"
    break;

  case 36: /* CASES: CASE CASES  */
#line 149 "./lenguaje/parser.y"
                            { (yyval.node) = ast_link((yyvsp[-1].node), (yyvsp[0].node)); }
#line 1795 "./lenguaje/parser.tab.c"
    break;

  case 37: /* CASES: CASE  */
#line 150 "./lenguaje/parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1801 "./lenguaje/parser.tab.c"
    break;

  case 38: /* CASE: TK_CASE expr TK_DOSPUNTOS listainstrucciones  */
#line 154 "./lenguaje/parser.y"
                                                  { (yyval.node) = ast_case((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1807 "./lenguaje/parser.tab.c"
    break;

  case 39: /* CASE: TK_DEFAULT TK_DOSPUNTOS listainstrucciones  */
#line 155 "./lenguaje/parser.y"
                                                  { (yyval.node) = ast_case(NULL, (yyvsp[0].node)); }
#line 1813 "./lenguaje/parser.tab.c"
    break;

  case 40: /* WHILE: TK_WHILE TK_PA expr TK_PC TK_LLA listainstrucciones TK_LLC  */
#line 159 "./lenguaje/parser.y"
                                                               { (yyval.node) = ast_while((yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1819 "./lenguaje/parser.tab.c"
    break;

  case 41: /* FOR: TK_FOR TK_PA DECLARACION expr TK_PTCOMA INCREMENTO_DECREMENTO TK_PC TK_LLA listainstrucciones TK_LLC  */
#line 163 "./lenguaje/parser.y"
                                                                                                         { (yyval.node) = ast_for((yyvsp[-7].node), (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1825 "./lenguaje/parser.tab.c"
    break;

  case 42: /* PARAMETROS: TIPO ID TK_COMA PARAMETROS  */
#line 167 "./lenguaje/parser.y"
                                   { (yyval.node) = ast_parametros((yyvsp[-2].str), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1831 "./lenguaje/parser.tab.c"
    break;

  case 43: /* PARAMETROS: TIPO ID  */
#line 168 "./lenguaje/parser.y"
                                   { (yyval.node) = ast_parametros((yyvsp[0].str), (yyvsp[-1].node), NULL); }
#line 1837 "./lenguaje/parser.tab.c"
    break;

  case 44: /* PARAMETROS: %empty  */
#line 169 "./lenguaje/parser.y"
                                   { (yyval.node) = NULL; }
#line 1843 "./lenguaje/parser.tab.c"
    break;

  case 45: /* DECLARAR_FUNCION: TIPO ID TK_PA PARAMETROS TK_PC TK_LLA listainstrucciones TK_LLC  */
#line 173 "./lenguaje/parser.y"
                                                                          { (yyval.node) = ast_funcion_decl((yyvsp[-6].str), (yyvsp[-4].node), (yyvsp[-7].node), (yyvsp[-1].node)); }
#line 1849 "./lenguaje/parser.tab.c"
    break;

  case 46: /* DECLARAR_FUNCION: TK_VOID ID TK_PA PARAMETROS TK_PC TK_LLA listainstrucciones TK_LLC  */
#line 174 "./lenguaje/parser.y"
                                                                          { (yyval.node) = ast_funcion_decl((yyvsp[-6].str), (yyvsp[-4].node), NULL, (yyvsp[-1].node)); }
#line 1855 "./lenguaje/parser.tab.c"
    break;

  case 47: /* LLAMADA_PROCEDIMIENTO: ID TK_PA VALORES TK_PC TK_PTCOMA  */
#line 178 "./lenguaje/parser.y"
                                     { (yyval.node) = ast_funcion_call((yyvsp[-4].str), (yyvsp[-2].node)); }
#line 1861 "./lenguaje/parser.tab.c"
    break;

  case 48: /* TIPO: TK_INT  */
#line 184 "./lenguaje/parser.y"
                 { (yyval.node) = ast_type("int");}
#line 1867 "./lenguaje/parser.tab.c"
    break;

  case 49: /* TIPO: TK_STRING  */
#line 185 "./lenguaje/parser.y"
                 { (yyval.node) = ast_type("string");}
#line 1873 "./lenguaje/parser.tab.c"
    break;

  case 50: /* TIPO: TK_FLOAT  */
#line 186 "./lenguaje/parser.y"
                 { (yyval.node) = ast_type("float");}
#line 1879 "./lenguaje/parser.tab.c"
    break;

  case 51: /* TIPO: TK_BOOL  */
#line 187 "./lenguaje/parser.y"
                 { (yyval.node) = ast_type("bool");}
#line 1885 "./lenguaje/parser.tab.c"
    break;

  case 52: /* TIPO: TK_CHAR  */
#line 188 "./lenguaje/parser.y"
                 { (yyval.node) = ast_type("char");}
#line 1891 "./lenguaje/parser.tab.c"
    break;

  case 53: /* TIPO: TK_DOUBLE  */
#line 189 "./lenguaje/parser.y"
                 { (yyval.node) = ast_type("double");}
#line 1897 "./lenguaje/parser.tab.c"
    break;

  case 54: /* expr: TK_PA expr TK_PC  */
#line 193 "./lenguaje/parser.y"
                               {(yyval.node) = (yyvsp[-1].node);}
#line 1903 "./lenguaje/parser.tab.c"
    break;

  case 55: /* expr: TK_PARSEINT TK_PA expr TK_PC  */
#line 194 "./lenguaje/parser.y"
                                      { (yyval.node) = ast_parser("parseInt", (yyvsp[-1].node) );}
#line 1909 "./lenguaje/parser.tab.c"
    break;

  case 56: /* expr: TK_PARSEFLOAT TK_PA expr TK_PC  */
#line 195 "./lenguaje/parser.y"
                                      { (yyval.node) = ast_parser("parseFloat", (yyvsp[-1].node)); }
#line 1915 "./lenguaje/parser.tab.c"
    break;

  case 57: /* expr: TK_PARSEDOUBLE TK_PA expr TK_PC  */
#line 196 "./lenguaje/parser.y"
                                      { (yyval.node) = ast_parser("parseDouble", (yyvsp[-1].node)); }
#line 1921 "./lenguaje/parser.tab.c"
    break;

  case 58: /* expr: TK_VALUEOF TK_PA expr TK_PC  */
#line 197 "./lenguaje/parser.y"
                                      { (yyval.node) = ast_parser("valueOf", (yyvsp[-1].node)); }
#line 1927 "./lenguaje/parser.tab.c"
    break;

  case 59: /* expr: TK_JOIN TK_PA expr TK_COMA VALORES TK_PC  */
#line 198 "./lenguaje/parser.y"
                                               { (yyval.node) = ast_join((yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1933 "./lenguaje/parser.tab.c"
    break;

  case 60: /* expr: TK_PA TIPO TK_PC expr  */
#line 199 "./lenguaje/parser.y"
                                { (yyval.node) = ast_cast((yyvsp[0].node), (yyvsp[-2].node)); }
#line 1939 "./lenguaje/parser.tab.c"
    break;

  case 61: /* expr: INT  */
#line 200 "./lenguaje/parser.y"
                                { (yyval.node) = ast_literal((yyvsp[0].str)); }
#line 1945 "./lenguaje/parser.tab.c"
    break;

  case 62: /* expr: DECIMAL  */
#line 201 "./lenguaje/parser.y"
                                { (yyval.node) = ast_literal((yyvsp[0].str)); }
#line 1951 "./lenguaje/parser.tab.c"
    break;

  case 63: /* expr: CARACTER  */
#line 202 "./lenguaje/parser.y"
                                { (yyval.node) = ast_literal((yyvsp[0].str)); }
#line 1957 "./lenguaje/parser.tab.c"
    break;

  case 64: /* expr: CADENA  */
#line 203 "./lenguaje/parser.y"
                                { (yyval.node) = ast_literal((yyvsp[0].str)); }
#line 1963 "./lenguaje/parser.tab.c"
    break;

  case 65: /* expr: BOOL  */
#line 204 "./lenguaje/parser.y"
                                { (yyval.node) = ast_literal((yyvsp[0].str)); }
#line 1969 "./lenguaje/parser.tab.c"
    break;

  case 66: /* expr: DOUBLE  */
#line 205 "./lenguaje/parser.y"
                                { (yyval.node) = ast_literal((yyvsp[0].str)); }
#line 1975 "./lenguaje/parser.tab.c"
    break;

  case 67: /* expr: ID  */
#line 206 "./lenguaje/parser.y"
                                { (yyval.node) = ast_identifier((yyvsp[0].str)); }
#line 1981 "./lenguaje/parser.tab.c"
    break;

  case 68: /* expr: ARITMETICOS  */
#line 207 "./lenguaje/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1987 "./lenguaje/parser.tab.c"
    break;

  case 69: /* expr: RELACIONALES  */
#line 208 "./lenguaje/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1993 "./lenguaje/parser.tab.c"
    break;

  case 70: /* expr: LOGICOS  */
#line 209 "./lenguaje/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1999 "./lenguaje/parser.tab.c"
    break;

  case 71: /* expr: LLAMADA_FUNCION  */
#line 210 "./lenguaje/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2005 "./lenguaje/parser.tab.c"
    break;

  case 72: /* expr: ID TK_CA expr TK_CC  */
#line 211 "./lenguaje/parser.y"
                                { (yyval.node) = ast_index1((yyvsp[-3].str), (yyvsp[-1].node)); }
#line 2011 "./lenguaje/parser.tab.c"
    break;

  case 73: /* expr: ID TK_LENGTH  */
#line 212 "./lenguaje/parser.y"
                                { (yyval.node) = ast_array_length((yyvsp[-1].str)); }
#line 2017 "./lenguaje/parser.tab.c"
    break;

  case 74: /* ARITMETICOS: expr TK_SUMA expr  */
#line 219 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("+", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2023 "./lenguaje/parser.tab.c"
    break;

  case 75: /* ARITMETICOS: expr TK_RESTA expr  */
#line 220 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("-", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2029 "./lenguaje/parser.tab.c"
    break;

  case 76: /* ARITMETICOS: expr TK_MULTIPLICACION expr  */
#line 221 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("*", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2035 "./lenguaje/parser.tab.c"
    break;

  case 77: /* ARITMETICOS: expr TK_DIVISION expr  */
#line 222 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("/", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2041 "./lenguaje/parser.tab.c"
    break;

  case 78: /* ARITMETICOS: expr TK_MODULAR expr  */
#line 223 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("%", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2047 "./lenguaje/parser.tab.c"
    break;

  case 79: /* OP_ASIGNACION: TK_IGUAL  */
#line 227 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("="); }
#line 2053 "./lenguaje/parser.tab.c"
    break;

  case 80: /* OP_ASIGNACION: TK_MAS_IGUAL  */
#line 228 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("+="); }
#line 2059 "./lenguaje/parser.tab.c"
    break;

  case 81: /* OP_ASIGNACION: TK_MENOS_IGUAL  */
#line 229 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("-="); }
#line 2065 "./lenguaje/parser.tab.c"
    break;

  case 82: /* OP_ASIGNACION: TK_POR_IGUAL  */
#line 230 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("*="); }
#line 2071 "./lenguaje/parser.tab.c"
    break;

  case 83: /* OP_ASIGNACION: TK_DIVIDIR_IGUAL  */
#line 231 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("/="); }
#line 2077 "./lenguaje/parser.tab.c"
    break;

  case 84: /* OP_ASIGNACION: TK_PORCENTAJE_IGUAL  */
#line 232 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("%="); }
#line 2083 "./lenguaje/parser.tab.c"
    break;

  case 85: /* OP_ASIGNACION: TK_AND_IGUAL  */
#line 233 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("&="); }
#line 2089 "./lenguaje/parser.tab.c"
    break;

  case 86: /* OP_ASIGNACION: TK_OR_IGUAL  */
#line 234 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("|="); }
#line 2095 "./lenguaje/parser.tab.c"
    break;

  case 87: /* OP_ASIGNACION: TK_POTENCIA_IGUAL  */
#line 235 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("^="); }
#line 2101 "./lenguaje/parser.tab.c"
    break;

  case 88: /* OP_ASIGNACION: TK_MAYOR_MAYOR_IGUAL  */
#line 236 "./lenguaje/parser.y"
                             { (yyval.str) = strdup(">>="); }
#line 2107 "./lenguaje/parser.tab.c"
    break;

  case 89: /* OP_ASIGNACION: TK_MENOR_MENOR_IGUAL  */
#line 237 "./lenguaje/parser.y"
                             { (yyval.str) = strdup("<<="); }
#line 2113 "./lenguaje/parser.tab.c"
    break;

  case 90: /* OP_ASIGNACION: TK_DOSPUNTOS_IGUAL  */
#line 238 "./lenguaje/parser.y"
                             { (yyval.str) = strdup(":="); }
#line 2119 "./lenguaje/parser.tab.c"
    break;

  case 91: /* RELACIONALES: expr TK_IGUAL_IGUAL expr  */
#line 243 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("==", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2125 "./lenguaje/parser.tab.c"
    break;

  case 92: /* RELACIONALES: expr TK_EQUALS TK_PA expr TK_PC  */
#line 244 "./lenguaje/parser.y"
                                      { (yyval.node) = ast_binop("==", (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 2131 "./lenguaje/parser.tab.c"
    break;

  case 93: /* RELACIONALES: expr TK_DIFERENTE expr  */
#line 245 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("!=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2137 "./lenguaje/parser.tab.c"
    break;

  case 94: /* RELACIONALES: expr TK_MAYOR_IGUAL expr  */
#line 246 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop(">=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2143 "./lenguaje/parser.tab.c"
    break;

  case 95: /* RELACIONALES: expr TK_MENOR_IGUAL expr  */
#line 247 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("<=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2149 "./lenguaje/parser.tab.c"
    break;

  case 96: /* RELACIONALES: expr TK_MAYOR expr  */
#line 248 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop(">", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2155 "./lenguaje/parser.tab.c"
    break;

  case 97: /* RELACIONALES: expr TK_MENOR expr  */
#line 249 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("<", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2161 "./lenguaje/parser.tab.c"
    break;

  case 98: /* LOGICOS: expr TK_AND expr  */
#line 254 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("&&", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2167 "./lenguaje/parser.tab.c"
    break;

  case 99: /* LOGICOS: expr TK_OR expr  */
#line 255 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_binop("||", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2173 "./lenguaje/parser.tab.c"
    break;

  case 100: /* LOGICOS: TK_NOT expr  */
#line 256 "./lenguaje/parser.y"
                                    { (yyval.node) = ast_unop("!", (yyvsp[0].node)); }
#line 2179 "./lenguaje/parser.tab.c"
    break;

  case 101: /* VALORES: expr TK_COMA VALORES  */
#line 261 "./lenguaje/parser.y"
                               { (yyval.node) = ast_link((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2185 "./lenguaje/parser.tab.c"
    break;

  case 102: /* VALORES: expr  */
#line 262 "./lenguaje/parser.y"
                               { (yyval.node) = ast_link((yyvsp[0].node), NULL); }
#line 2191 "./lenguaje/parser.tab.c"
    break;

  case 103: /* VALORES: %empty  */
#line 263 "./lenguaje/parser.y"
                              { (yyval.node) = NULL; }
#line 2197 "./lenguaje/parser.tab.c"
    break;

  case 104: /* LLAMADA_FUNCION: ID TK_PA VALORES TK_PC  */
#line 267 "./lenguaje/parser.y"
                           { (yyval.node) = ast_funcion_call((yyvsp[-3].str), (yyvsp[-1].node)); }
#line 2203 "./lenguaje/parser.tab.c"
    break;


#line 2207 "./lenguaje/parser.tab.c"

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

#line 270 "./lenguaje/parser.y"







void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
