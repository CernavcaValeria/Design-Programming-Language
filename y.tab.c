/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "pr.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "print_functie.h"
#include "print_variabila.h"
#include "print_clasa.h"
#include "check.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;

int number_erori=0;



#line 84 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ASSIGN = 258,
    OPLOG = 259,
    NR = 260,
    BB = 261,
    FUNCT = 262,
    ENDFUNCT = 263,
    WHILE = 264,
    ENDWHILE = 265,
    IF = 266,
    ENDIF = 267,
    FOR = 268,
    ENDFOR = 269,
    THEN = 270,
    ENDTHEN = 271,
    ELSE = 272,
    ENDELSE = 273,
    RETURN = 274,
    CLASS = 275,
    ENDCLASS = 276,
    STRING = 277,
    STRLEN = 278,
    STRCMP = 279,
    STRREV = 280,
    STRCAT = 281,
    PRINT = 282,
    INTMAIN = 283,
    ENDMAIN = 284,
    EVAL = 285,
    INDEX = 286,
    NR_NEG = 287,
    NR_FLOAT = 288,
    TIP = 289,
    ID = 290,
    STR = 291
  };
#endif
/* Tokens.  */
#define ASSIGN 258
#define OPLOG 259
#define NR 260
#define BB 261
#define FUNCT 262
#define ENDFUNCT 263
#define WHILE 264
#define ENDWHILE 265
#define IF 266
#define ENDIF 267
#define FOR 268
#define ENDFOR 269
#define THEN 270
#define ENDTHEN 271
#define ELSE 272
#define ENDELSE 273
#define RETURN 274
#define CLASS 275
#define ENDCLASS 276
#define STRING 277
#define STRLEN 278
#define STRCMP 279
#define STRREV 280
#define STRCAT 281
#define PRINT 282
#define INTMAIN 283
#define ENDMAIN 284
#define EVAL 285
#define INDEX 286
#define NR_NEG 287
#define NR_FLOAT 288
#define TIP 289
#define ID 290
#define STR 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 19 "pr.y" /* yacc.c:355  */

	int intval;
	char* strval;

#line 201 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 218 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   496

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  414

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,     2,     2,    44,    51,     2,
      38,    39,    42,    41,    37,    40,    50,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,    52,    49,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    52,    53,    59,    63,    64,    69,    70,
      71,    72,    73,    74,    81,    86,    89,    92,   101,   105,
     114,   118,   127,   131,   139,   147,   152,   153,   156,   157,
     158,   159,   160,   161,   164,   165,   169,   174,   175,   176,
     179,   180,   183,   184,   185,   186,   191,   195,   198,   202,
     211,   215,   224,   228,   235,   238,   247,   251,   256,   259,
     267,   271,   279,   283,   290,   294,   302,   303,   304,   308,
     309,   313,   321,   322,   327,   331,   334,   338,   342,   346,
     350,   355,   359,   362,   365,   371,   375,   381,   391,   395,
     396,   397,   398,   405,   406,   407,   408,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   428,   429,   430,
     433,   439,   443,   448,   452,   457,   461,   465,   470,   473,
     478,   483,   488,   492,   493,   494,   498,   499,   503
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ASSIGN", "OPLOG", "NR", "BB", "FUNCT",
  "ENDFUNCT", "WHILE", "ENDWHILE", "IF", "ENDIF", "FOR", "ENDFOR", "THEN",
  "ENDTHEN", "ELSE", "ENDELSE", "RETURN", "CLASS", "ENDCLASS", "STRING",
  "STRLEN", "STRCMP", "STRREV", "STRCAT", "PRINT", "INTMAIN", "ENDMAIN",
  "EVAL", "INDEX", "NR_NEG", "NR_FLOAT", "TIP", "ID", "STR", "','", "'('",
  "')'", "'-'", "'+'", "'*'", "'/'", "'%'", "';'", "'['", "']'", "'{'",
  "'}'", "'.'", "'&'", "'|'", "'!'", "$accept", "progr", "biblioteci",
  "mainul", "declaratii", "declaratie", "variabila", "vector", "matrice",
  "cub", "functie", "clasa", "class_objects", "in_clasa",
  "fruntie_in_clasa", "functie2", "in_functie", "return",
  "decla_for_funct", "variabila_from_funct", "vector_from_funct",
  "matrice_from_funct", "cub_from_funct", "variabila_from_cl",
  "vector_from_cl", "matrice_from_cl", "cub_from_cl", "lista_param",
  "parametri", "parametru", "instructiuni", "statement", "intructiuni",
  "condition_for_instr", "regex", "number", "e", "lista_param2",
  "parametri2", "parametru2", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    44,    40,    41,
      45,    43,    42,    47,    37,    59,    91,    93,   123,   125,
      46,    38,   124,    33
};
# endif

#define YYPACT_NINF -193

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-193)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -193,    10,    30,  -193,  -193,   103,    41,    23,    50,   286,
     -26,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,    57,
     125,    14,    45,    64,    69,    73,    76,    88,   104,    12,
      34,   156,   109,  -193,    15,    85,   134,    74,    -9,   157,
     173,   125,   125,   125,   125,   150,   165,  -193,   328,   328,
     163,   168,   177,   138,   138,   344,   344,   176,   167,   178,
     171,  -193,   175,  -193,   344,  -193,   180,   192,    16,    18,
     197,   184,   202,  -193,  -193,  -193,  -193,  -193,   125,   186,
     199,   201,  -193,  -193,  -193,    48,   328,   210,   344,   206,
     242,  -193,  -193,   211,   212,   213,   214,   216,   220,   344,
    -193,  -193,   221,   218,  -193,  -193,     3,    47,  -193,   217,
      53,   228,   225,   230,   229,  -193,   344,  -193,   227,  -193,
     240,  -193,  -193,   -23,     7,   344,   241,   239,     4,   232,
    -193,   286,   360,   265,   278,  -193,   113,   248,   237,   375,
    -193,   344,   250,   344,   344,   289,   262,  -193,    19,   270,
    -193,    78,   192,  -193,   257,   258,    55,   269,   268,   276,
     280,   272,   283,   284,   287,   303,   344,   344,   344,   344,
     344,   271,   279,    71,   179,   328,  -193,   286,   344,   285,
     294,   295,   293,  -193,   344,  -193,   296,   344,   290,   344,
    -193,   291,   344,   301,    94,   335,  -193,    78,  -193,  -193,
    -193,  -193,   299,   230,  -193,  -193,    21,   315,   312,   192,
    -193,  -193,   122,   128,  -193,   344,   376,   309,   314,   316,
     318,   325,   344,   344,  -193,   323,  -193,   326,   208,   324,
    -193,  -193,  -193,   331,  -193,  -193,  -193,    97,   327,   100,
     340,    22,    24,   339,   341,  -193,    78,  -193,   344,  -193,
     333,   342,   332,   334,   349,   350,   355,   357,   328,  -193,
    -193,  -193,  -193,  -193,  -193,   362,   363,   356,  -193,   387,
     328,  -193,   402,   379,  -193,    25,   381,  -193,   384,  -193,
     344,  -193,   374,  -193,  -193,   378,   110,  -193,    78,  -193,
    -193,  -193,  -193,  -193,   385,  -193,  -193,   131,   286,   380,
     382,   386,   383,  -193,   388,   389,   391,   152,  -193,    26,
     397,   424,  -193,  -193,   406,   231,   286,   344,   403,   344,
     404,  -193,  -193,    27,   409,   393,  -193,   395,   398,   399,
    -193,   405,   408,   444,   411,    28,   344,  -193,   407,   344,
     414,  -193,   415,   286,   344,   410,   344,   412,  -193,   416,
     161,   418,    29,  -193,   259,   413,   344,   417,   344,  -193,
      31,   420,   344,   419,  -193,  -193,  -193,   422,   423,   426,
     421,  -193,   425,   427,   344,   344,  -193,   344,   344,   429,
     428,   433,   434,   437,   438,    32,  -193,   344,   344,   344,
     344,   430,  -193,   440,   431,   432,   435,   344,   344,  -193,
     441,   442,   445,   436,  -193,  -193,   344,   443,   446,  -193,
     344,   447,   448,  -193
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     7,     1,     3,     0,     0,     0,     0,     0,
       0,     2,     6,     8,    11,     9,    10,    12,    13,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,     0,     0,
      33,    35,    35,    35,    35,     0,     0,    16,     0,     0,
       0,     0,     0,     0,     0,     0,   125,     0,     0,     0,
       0,     5,     0,    72,     0,    14,     0,    68,     0,     0,
       0,     0,     0,    34,    28,    31,    29,    30,    35,     0,
       0,     0,   107,   108,   109,   110,     0,     0,     0,     0,
       0,   106,   105,     0,     0,     0,     0,     0,     0,     0,
      77,   128,     0,   123,    79,    78,     0,     0,    73,     0,
       0,     0,     0,    66,     0,    58,     0,    56,     0,    27,
       0,    32,    17,     0,     0,   125,     0,     0,     0,     0,
     104,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      74,     0,   124,     0,   125,     0,     0,    15,     0,     0,
      71,    41,     0,    67,     0,     0,     0,    25,     0,     0,
       0,     0,     0,     0,   111,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,   126,     0,    76,     0,     0,     0,     0,
      18,     0,     0,     0,     0,     0,    39,    41,    45,    42,
      43,    44,     0,    69,    59,    57,     0,     0,     0,    68,
     117,   118,     0,     0,   116,   125,     0,     0,     0,     0,
       0,     0,     0,     0,   112,     0,    91,     0,     0,     0,
      84,    85,    86,     0,   127,    75,    80,     0,     0,     0,
       0,     0,     0,     0,     0,    37,    41,    70,     0,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
     100,    99,    97,    98,   101,     0,     0,     0,    95,    89,
       0,    87,     0,     0,    19,     0,     0,    40,     0,    48,
       0,    46,     0,    24,    38,     0,     0,    26,    41,   119,
     120,   121,   122,   115,     0,   102,   103,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,    60,     0,
       0,     0,    96,   113,     0,     0,     0,     0,     0,     0,
       0,    49,    47,     0,     0,     0,    63,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,    36,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,   114,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,    65,    92,    81,     0,     0,     0,
       0,    52,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    62,     0,     0,     0,
       0,     0,    54,     0,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    23,    53,     0,     0,     0,    64,
       0,     0,     0,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,    37,  -193,  -193,  -192,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,  -193,   243,   253,   305,
    -128,     2,  -193,   -47,   -48,  -193,   140,  -121,  -193,  -127
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    11,     5,    12,    13,    14,    15,    16,
      17,    18,   157,    39,    40,    73,   195,   196,   197,   198,
     199,   200,   201,    41,    42,    43,    44,   112,   153,   113,
      31,    45,    33,    89,   101,    91,    92,   102,   142,   103
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      90,    90,    93,   174,   163,   245,   143,   100,   132,    34,
       3,    32,   159,   160,   183,    55,   109,    46,    64,   114,
      35,   116,   189,   186,   248,   278,    69,   280,   302,   325,
     336,   347,   363,    62,   370,   391,     4,    70,   128,   127,
     130,   144,   161,   162,   166,   167,   168,   169,   170,   228,
      56,   139,    57,    58,   284,   171,   172,   234,    20,    47,
      65,   115,    59,   117,   190,    60,   249,   279,   155,   281,
     303,   326,   337,   348,   364,    19,   371,   392,    74,    75,
      76,    77,   145,    48,   176,    21,   125,    22,   148,    23,
     206,    24,    36,   146,   257,   185,   311,   192,   126,   149,
     193,   207,    49,    25,    26,    27,   224,    50,    28,    68,
       6,    51,   194,    29,    52,   121,    66,   225,   217,   218,
     219,   220,   221,     7,    30,     8,    53,   128,   227,   242,
     229,     9,   272,    32,    22,   275,    23,    10,    24,   236,
     243,   238,    54,   273,   240,   309,   276,    37,   179,   180,
      25,    26,    27,   202,    63,    28,   310,   253,   254,    38,
      29,    80,    81,   255,   256,    22,   313,    23,   259,    24,
     315,    30,    67,    85,   265,   266,    62,   314,    71,    32,
      72,    25,    26,    27,    87,    61,    28,   323,    22,   226,
      23,    29,    24,    97,    98,    78,   360,    94,   324,   202,
     285,    79,    30,    95,    25,    26,    27,   361,   105,    28,
     128,   294,    96,   106,    29,   354,   104,    22,   107,    23,
     108,    24,    90,   299,   269,    30,   111,   110,   118,   119,
      62,   122,   306,    25,    26,    27,   120,   123,    28,   124,
      22,   129,    23,    29,    24,   131,   132,   134,   202,   330,
     133,   136,   135,   137,    30,   141,    25,    26,    27,   138,
     140,    28,   147,   150,   151,   154,    29,   152,    22,   332,
      23,   334,    24,   365,   156,   158,   164,    30,   165,   173,
     177,   178,   181,   182,    25,    26,    27,   184,   349,    28,
     202,   351,   187,   188,    29,    22,   355,    23,   357,    24,
      32,   191,   204,   205,   208,    30,   209,   216,   367,   212,
     369,    25,    26,    27,   373,   210,    28,    62,   331,   211,
     213,    29,   222,   214,   230,   215,   381,   382,   233,   383,
     384,   223,    30,   231,   232,   235,   241,   237,   239,   393,
     394,   395,   396,   244,   246,    32,   250,   251,   260,   402,
     403,    80,    81,   261,   267,   262,    62,   263,   408,    82,
      83,    84,   411,    85,   264,   268,    86,    80,    81,   270,
     282,   288,   274,   289,    87,    82,    83,    84,   271,    85,
     286,    88,    99,    80,    81,   277,   283,   287,   290,   291,
      87,    82,    83,    84,   292,    85,   293,    88,   175,    80,
      81,   295,   296,   297,   298,   300,    87,    82,    83,    84,
     301,    85,   304,    88,   258,   166,   167,   168,   169,   170,
     305,   307,    87,   308,   312,   316,   171,   172,   327,    88,
     317,   319,   328,   318,   321,   320,   322,   329,   333,   335,
     338,   339,   340,   341,   343,   344,   342,   345,   346,   352,
     353,   372,   252,     0,   350,   362,   247,   203,   356,   375,
     358,   359,   366,   377,   385,     0,   368,   374,   376,   378,
     387,   388,   379,   386,   389,   390,   380,   398,   397,     0,
     399,   400,   406,   410,   401,   407,   404,   405,   409,     0,
       0,     0,     0,   413,     0,     0,   412
};

static const yytype_int16 yycheck[] =
{
      48,    49,    49,   131,   125,   197,     3,    55,     4,    35,
       0,     9,    35,    36,   141,     3,    64,     3,     3,     3,
      46,     3,     3,   144,     3,     3,    35,     3,     3,     3,
       3,     3,     3,    31,     3,     3,     6,    46,    86,    86,
      88,    38,    35,    36,    40,    41,    42,    43,    44,   177,
      38,    99,    40,    41,   246,    51,    52,   184,    35,    45,
      45,    45,    50,    45,    45,    31,    45,    45,   116,    45,
      45,    45,    45,    45,    45,    34,    45,    45,    41,    42,
      43,    44,    35,    38,   132,    35,    38,     9,    35,    11,
      35,    13,    35,    46,   215,   143,   288,    19,    50,    46,
      22,    46,    38,    25,    26,    27,    35,    38,    30,    35,
       7,    38,    34,    35,    38,    78,    31,    46,   166,   167,
     168,   169,   170,    20,    46,    22,    38,   175,   175,    35,
     178,    28,    35,   131,     9,    35,    11,    34,    13,   187,
      46,   189,    38,    46,   192,    35,    46,    22,    35,    36,
      25,    26,    27,   151,    45,    30,    46,    35,    36,    34,
      35,    23,    24,    35,    36,     9,    35,    11,   216,    13,
     298,    46,    38,    35,   222,   223,   174,    46,    21,   177,
       7,    25,    26,    27,    46,    29,    30,    35,     9,    10,
      11,    35,    13,    53,    54,    45,    35,    34,    46,   197,
     248,    36,    46,    35,    25,    26,    27,    46,    41,    30,
     258,   258,    35,    35,    35,   343,    40,     9,    47,    11,
      45,    13,   270,   270,    16,    46,    34,    47,    31,    45,
     228,    45,   280,    25,    26,    27,    34,    38,    30,    38,
       9,    31,    11,    35,    13,    39,     4,    35,   246,    18,
      39,    37,    39,    37,    46,    37,    25,    26,    27,    39,
      39,    30,    45,    35,    39,    36,    35,    37,     9,   317,
      11,   319,    13,    14,    47,    35,    35,    46,    39,    47,
      15,     3,    34,    46,    25,    26,    27,    37,   336,    30,
     288,   339,     3,    31,    35,     9,   344,    11,   346,    13,
     298,    31,    45,    45,    35,    46,    38,     4,   356,    37,
     358,    25,    26,    27,   362,    39,    30,   315,   316,    39,
      37,    35,    51,    39,    39,    38,   374,   375,    35,   377,
     378,    52,    46,    39,    39,    39,    35,    47,    47,   387,
     388,   389,   390,     8,    45,   343,    31,    35,    39,   397,
     398,    23,    24,    39,    31,    39,   354,    39,   406,    31,
      32,    33,   410,    35,    39,    39,    38,    23,    24,    45,
      31,    39,    45,    39,    46,    31,    32,    33,    47,    35,
      47,    53,    38,    23,    24,    45,    45,    45,    39,    39,
      46,    31,    32,    33,    39,    35,    39,    53,    38,    23,
      24,    39,    39,    47,    17,     3,    46,    31,    32,    33,
      31,    35,    31,    53,    38,    40,    41,    42,    43,    44,
      36,    47,    46,    45,    39,    45,    51,    52,    31,    53,
      48,    48,     8,    47,    45,    47,    45,    31,    35,    35,
      31,    48,    47,    45,    39,    37,    47,     3,    37,    35,
      35,    31,   209,    -1,    47,    37,   203,   152,    48,    37,
      48,    45,    49,    37,    35,    -1,    49,    48,    45,    48,
      37,    37,    47,    45,    37,    37,    49,    37,    48,    -1,
      49,    49,    37,    37,    49,    49,    45,    45,    45,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    56,     0,     6,    58,     7,    20,    22,    28,
      34,    57,    59,    60,    61,    62,    63,    64,    65,    34,
      35,    35,     9,    11,    13,    25,    26,    27,    30,    35,
      46,    84,    85,    86,    35,    46,    35,    22,    34,    67,
      68,    77,    78,    79,    80,    85,     3,    45,    38,    38,
      38,    38,    38,    38,    38,     3,    38,    40,    41,    50,
      31,    29,    85,    45,     3,    45,    31,    38,    35,    35,
      46,    21,     7,    69,    67,    67,    67,    67,    45,    36,
      23,    24,    31,    32,    33,    35,    38,    46,    53,    87,
      88,    89,    90,    87,    34,    35,    35,    90,    90,    38,
      88,    88,    91,    93,    40,    41,    35,    47,    45,    88,
      47,    34,    81,    83,     3,    45,     3,    45,    31,    45,
      34,    67,    45,    38,    38,    38,    50,    87,    88,    31,
      88,    39,     4,    39,    35,    39,    37,    37,    39,    88,
      39,    37,    92,     3,    38,    35,    46,    45,    35,    46,
      35,    39,    37,    82,    36,    88,    47,    66,    35,    35,
      36,    35,    36,    91,    35,    39,    40,    41,    42,    43,
      44,    51,    52,    47,    84,    38,    88,    15,     3,    35,
      36,    34,    46,    93,    37,    88,    91,     3,    31,     3,
      45,    31,    19,    22,    34,    70,    71,    72,    73,    74,
      75,    76,    85,    83,    45,    45,    35,    46,    35,    38,
      39,    39,    37,    37,    39,    38,     4,    88,    88,    88,
      88,    88,    51,    52,    35,    46,    10,    87,    84,    88,
      39,    39,    39,    35,    93,    39,    88,    47,    88,    47,
      88,    35,    35,    46,     8,    70,    45,    82,     3,    45,
      31,    35,    81,    35,    36,    35,    36,    91,    38,    88,
      39,    39,    39,    39,    39,    88,    88,    31,    39,    16,
      45,    47,    35,    46,    45,    35,    46,    45,     3,    45,
       3,    45,    31,    45,    70,    88,    47,    45,    39,    39,
      39,    39,    39,    39,    87,    39,    39,    47,    17,    87,
       3,    31,     3,    45,    31,    36,    88,    47,    45,    35,
      46,    70,    39,    35,    46,    84,    45,    48,    47,    48,
      47,    45,    45,    35,    46,     3,    45,    31,     8,    31,
      18,    85,    88,    35,    88,    35,     3,    45,    31,    48,
      47,    45,    47,    39,    37,     3,    37,     3,    45,    88,
      47,    88,    35,    35,    84,    88,    48,    88,    48,    45,
      35,    46,    37,     3,    45,    14,    49,    88,    49,    88,
       3,    45,    31,    88,    48,    37,    45,    37,    48,    47,
      49,    88,    88,    88,    88,    35,    45,    37,    37,    37,
      37,     3,    45,    88,    88,    88,    88,    48,    37,    49,
      49,    49,    88,    88,    45,    45,    37,    49,    88,    45,
      37,    88,    49,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    58,    58,    59,    59,
      59,    59,    59,    59,    60,    60,    60,    60,    61,    61,
      62,    62,    63,    63,    64,    65,    66,    66,    67,    67,
      67,    67,    67,    67,    68,    68,    69,    70,    70,    70,
      71,    71,    72,    72,    72,    72,    73,    73,    73,    73,
      74,    74,    75,    75,    76,    76,    77,    77,    77,    77,
      78,    78,    79,    79,    80,    80,    81,    81,    81,    82,
      82,    83,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    86,
      86,    86,    86,    87,    87,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    89,    89,    89,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    91,    91,    91,    92,    92,    93
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     0,     3,     2,     0,     1,     1,
       1,     1,     1,     1,     3,     5,     3,     5,     6,     8,
       9,    15,    12,    20,     9,     6,     4,     0,     2,     2,
       2,     2,     3,     1,     2,     0,     9,     2,     3,     1,
       3,     0,     1,     1,     1,     1,     3,     5,     3,     5,
       6,     8,     9,    15,    12,    20,     3,     5,     3,     5,
       8,     6,    15,     9,    20,    12,     1,     2,     0,     2,
       3,     2,     2,     3,     4,     6,     5,     3,     3,     3,
       6,    13,    18,     4,     6,     6,     6,     7,     1,     7,
      10,     6,    13,     3,     5,     5,     7,     5,     5,     5,
       5,     5,     6,     6,     2,     1,     1,     1,     1,     1,
       1,     3,     4,     7,    10,     6,     4,     4,     4,     6,
       6,     6,     6,     1,     2,     0,     2,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 43 "pr.y" /* yacc.c:1646  */
    {  if(number_erori==0)
                                    		 { printf("Program Corect Sintactic\n"); }
                                        else
                                   		 { printf("Program Gresit Semantic\n");
                                                   printf("Numarul de erori: [%d]\n", number_erori); }  
                                      }
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 82 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-1].strval)); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1){printf("\n[EROARE] variabila %s este declarata de mai multe ori [line: %d]\n", (yyvsp[-1].strval), yylineno+2); number_erori++;}
strcpy(v[number_total_of_var].tip,(yyvsp[-2].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-1].strval)); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 0; strcpy(v[number_total_of_var].value, "\0"); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 87 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-3].strval)); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1) {printf("\n[EROARE] variabila %s este declarata de mai multe ori [line: %d]\n", (yyvsp[-3].strval), yylineno+2); number_erori++;} strcpy(v[number_total_of_var].tip,(yyvsp[-4].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-3].strval)); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 0; char valoare[256]; sprintf(valoare, "%d", (yyvsp[-1].intval)); strcpy(v[number_total_of_var].value, valoare);  insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 90 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-1].strval)); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1) {printf("\n[EROARE] variabila %s este declarata de mai multe ori [line: %d]\n", (yyvsp[-1].strval), yylineno+2); number_erori++;} 							  strcpy(v[number_total_of_var].tip,"$string"); strcpy(v[number_total_of_var].nm,(yyvsp[-1].strval)); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 0; strcpy(v[number_total_of_var].value, "\0"); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 93 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-3].strval)); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] variabila %s este declarata de mai multe ori [line: %d]\n", (yyvsp[-3].strval), yylineno+2);  number_erori++;}						  strcpy(v[number_total_of_var].tip,"$string"); strcpy(v[number_total_of_var].nm,(yyvsp[-3].strval)); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 0; insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 102 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-1].strval)); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1){printf("\n[EROARE] arrayul %s este declarat de mai multe ori [line: %d]\n", (yyvsp[-1].strval), yylineno+2); number_erori++;}
strcpy(v[number_total_of_var].tip,(yyvsp[-5].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-1].strval)); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 1; insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 106 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-3].strval)); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1){printf("\n[EROARE] arrayul %s este declarat de mai multe ori [line: %d]\n", (yyvsp[-3].strval), yylineno+2); number_erori++;}
strcpy(v[number_total_of_var].tip,(yyvsp[-7].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-3].strval)); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 1; char valoare[256];sprintf(valoare, "%d", (yyvsp[-1].intval)); strcpy(v[number_total_of_var].value, valoare); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 115 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-1].strval)); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1){printf("\n[EROARE] matricea %s este declarata de mai multe ori [line: %d]\n", (yyvsp[-1].strval), yylineno+2); number_erori++;}
strcpy(v[number_total_of_var].tip,(yyvsp[-8].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-1].strval)); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 2; insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 119 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-7].strval)); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1){printf("\n[EROARE] matricea %s este declarata de mai multe ori [line: %d]\n", (yyvsp[-7].strval), yylineno+2); number_erori++;}
strcpy(v[number_total_of_var].tip,(yyvsp[-14].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-7].strval)); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 2; char valoare[256];char valoare1[256];sprintf(valoare, "%d", (yyvsp[-4].intval));sprintf(valoare1, "%d", (yyvsp[-2].intval)); strcpy(v[number_total_of_var].value, valoare); strcpy(v[number_total_of_var].value1, valoare1); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 128 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-1].strval)); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1){printf("\n[EROARE] cubul %s este declarat de mai multe ori [line: %d]\n", (yyvsp[-1].strval), yylineno+2); number_erori++;}
strcpy(v[number_total_of_var].tip,(yyvsp[-11].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-1].strval)); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 3; insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 132 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-9].strval)); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1){printf("\n[EROARE] cubul %s este declarat de mai multe ori [line: %d]\n", (yyvsp[-9].strval), yylineno+2); number_erori++;}
strcpy(v[number_total_of_var].tip,(yyvsp[-19].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-9].strval)); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 3;char valoare[256];char valoare1[256]; char valoare2[256];sprintf(valoare, "%d", (yyvsp[-6].intval));sprintf(valoare1, "%d", (yyvsp[-4].intval));sprintf(valoare2, "%d", (yyvsp[-2].intval)); strcpy(v[number_total_of_var].value, valoare); strcpy(v[number_total_of_var].value1, valoare1);strcpy(v[number_total_of_var].value2, valoare2); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 140 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-6].strval)); if(control_err_funct(s)==1){ printf("\n[EROARE] functia %s este declarata de mai multe ori [line: %d]\n", s, yylineno+2); number_erori++;}  strcat(f[number_total_of_funct].tip, (yyvsp[-7].strval)); strcat(f[number_total_of_funct].nm, (yyvsp[-6].strval)); strcpy(f[number_total_of_funct].rol, "globala"); insert_in_table_functie(number_total_of_funct); number_total_of_funct++;}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 148 "pr.y" /* yacc.c:1646  */
    {strcpy(c[number_total_of_class].nm, (yyvsp[-4].strval)); insert_in_table_clasa(number_total_of_class); number_total_of_class++;}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 170 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-6].strval)); if(control_err_funct(s)==1){ printf("\nroare functia %s este declarata de mai multe ori [line: %d]\n", s, yylineno+2); number_erori++;} strcat(f[number_total_of_funct].tip, (yyvsp[-7].strval)); strcat(f[number_total_of_funct].nm, (yyvsp[-6].strval)); strcpy(f[number_total_of_funct].rol, "metoda"); insert_in_table_functie(number_total_of_funct); number_total_of_funct++;}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 192 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-1].strval)); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] variabila %s este declarata de mai multe ori in functie [line: %d]\n", (yyvsp[-1].strval),yylineno+2);number_erori++;}  strcpy(v[number_total_of_var].tip,(yyvsp[-2].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-1].strval)); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 0; strcpy(v[number_total_of_var].value, "\0"); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 196 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-3].strval)); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1) {printf("\n[EROARE] variabila %s este declarata de mai multe ori in functie [line: %d]\n", (yyvsp[-3].strval),yylineno+2); number_erori++;}  strcpy(v[number_total_of_var].tip,(yyvsp[-4].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-3].strval)); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 0; char valoare[256]; sprintf(valoare, "%d", (yyvsp[-1].intval)); strcpy(v[number_total_of_var].value, valoare); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 199 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-1].strval)); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] variabila %s este declarata de mai multe ori in functie [line: %d]\n", (yyvsp[-1].strval),yylineno+2);number_erori++;} 					strcpy(v[number_total_of_var].tip,"$string"); strcpy(v[number_total_of_var].nm,(yyvsp[-1].strval)); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 0; strcpy(v[number_total_of_var].value, "\0"); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 203 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-3].strval)); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1) {printf("\n[EROARE] variabila %s este declarata de mai multe ori in functie [line: %d]\n", (yyvsp[-3].strval),yylineno+2); number_erori++;}						strcpy(v[number_total_of_var].tip,"$string"); strcpy(v[number_total_of_var].nm,(yyvsp[-3].strval)); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 0; insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 212 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-1].strval)); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] arrayul %s este declarat de mai multe ori in functie [line: %d]\n", (yyvsp[-1].strval),yylineno+2);number_erori++;} 
strcpy(v[number_total_of_var].tip,(yyvsp[-5].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-1].strval)); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 1; insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 216 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-3].strval)); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] arrayul %s este declarat de mai multe ori in functie [line: %d]\n", (yyvsp[-3].strval),yylineno+2);number_erori++;} 
strcpy(v[number_total_of_var].tip,(yyvsp[-7].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-3].strval)); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 1; char valoare[256];sprintf(valoare, "%d", (yyvsp[-1].intval)); strcpy(v[number_total_of_var].value, valoare); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 225 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-1].strval)); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] matricea %s este declarata de mai multe ori in functie [line: %d]\n", (yyvsp[-1].strval),yylineno+2);number_erori++;} 
strcpy(v[number_total_of_var].tip,(yyvsp[-8].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-1].strval)); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 2; insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 229 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-7].strval)); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] matricea %s este declarata de mai multe ori in functie [line: %d]\n", (yyvsp[-7].strval),yylineno+2);number_erori++;} 
strcpy(v[number_total_of_var].tip,(yyvsp[-14].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-7].strval)); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 2; char valoare[256];char valoare1[256];sprintf(valoare, "%d", (yyvsp[-4].intval));sprintf(valoare1, "%d", (yyvsp[-2].intval)); strcpy(v[number_total_of_var].value, valoare); strcpy(v[number_total_of_var].value1, valoare1); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 236 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-1].strval)); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] cubul %s este declarat de mai multe ori in functie [line: %d]\n", (yyvsp[-1].strval),yylineno+2);number_erori++;}  strcpy(v[number_total_of_var].tip,(yyvsp[-11].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-1].strval)); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 3; insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 239 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-9].strval)); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] cubul %s este declarat de mai multe ori in functie [line: %d]\n", (yyvsp[-9].strval),yylineno+2);number_erori++;}  strcpy(v[number_total_of_var].tip,(yyvsp[-19].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-9].strval)); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 3; char valoare[256];char valoare1[256]; char valoare2[256];sprintf(valoare, "%d", (yyvsp[-6].intval));sprintf(valoare1, "%d", (yyvsp[-4].intval));sprintf(valoare2, "%d", (yyvsp[-2].intval)); strcpy(v[number_total_of_var].value, valoare); strcpy(v[number_total_of_var].value1, valoare1);strcpy(v[number_total_of_var].value2, valoare2); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 248 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-1].strval)); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] variabila %s este declarata de mai multe ori in clasa [line: %d]\n", (yyvsp[-1].strval), yylineno+2);number_erori++;} 										 strcpy(v[number_total_of_var].tip,(yyvsp[-2].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-1].strval)); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 0; strcpy(v[number_total_of_var].value, "\0"); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 252 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-3].strval)); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] variabila %s este declarata de mai multe ori [line: %d]\n", (yyvsp[-3].strval), yylineno+2);number_erori++;} 	
strcpy(v[number_total_of_var].tip,(yyvsp[-4].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-3].strval)); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 0; char valoare[256]; sprintf(valoare, "%d", (yyvsp[-1].intval)); strcpy(v[number_total_of_var].value, valoare); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 257 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-1].strval)); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1) {printf("\n[EROARE] variabila %s este declarata de mai multe ori [line: %d]\n", (yyvsp[-1].strval), yylineno+2);number_erori++;} 						 strcpy(v[number_total_of_var].tip,"$string"); strcpy(v[number_total_of_var].nm,(yyvsp[-1].strval)); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 0; strcpy(v[number_total_of_var].value, "\0"); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 260 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-3].strval)); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1) {printf("\n[EROARE] variabila %s este declarata de mai multe ori [line: %d]\n", (yyvsp[-3].strval), yylineno+2); number_erori++;}					 strcpy(v[number_total_of_var].tip,"$string"); strcpy(v[number_total_of_var].nm,(yyvsp[-3].strval)); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 0; insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 268 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-3].strval)); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] array %s este declarat de mai multe ori in clasa [line: %d]\n", (yyvsp[-3].strval), yylineno+2);number_erori++;}
strcpy(v[number_total_of_var].tip,(yyvsp[-7].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-3].strval)); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 1; char valoare[256];sprintf(valoare, "%d", (yyvsp[-1].intval)); strcpy(v[number_total_of_var].value, valoare); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 272 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-1].strval)); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] array %s este declarat de mai multe ori in clasa [line: %d]\n", (yyvsp[-1].strval), yylineno+2);number_erori++;}
strcpy(v[number_total_of_var].tip,(yyvsp[-5].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-1].strval)); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 1; insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 280 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-7].strval)); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] matricea %s este declarata de mai multe ori in clasa [line: %d]\n", (yyvsp[-7].strval), yylineno+2);number_erori++;}
strcpy(v[number_total_of_var].tip,(yyvsp[-14].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-7].strval)); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 2; char valoare[256];char valoare1[256];sprintf(valoare, "%d", (yyvsp[-4].intval));sprintf(valoare1, "%d", (yyvsp[-2].intval)); strcpy(v[number_total_of_var].value, valoare); strcpy(v[number_total_of_var].value1, valoare1); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 284 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-1].strval)); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] matricea %s este declarata de mai multe ori in clasa [line: %d]\n", (yyvsp[-1].strval), yylineno+2);number_erori++;}
strcpy(v[number_total_of_var].tip,(yyvsp[-8].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-1].strval)); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 2; insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 291 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-9].strval)); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] cubul %s este declarat de mai multe ori in clasa [line: %d]\n", (yyvsp[-9].strval), yylineno+2);number_erori++;}
strcpy(v[number_total_of_var].tip,(yyvsp[-19].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-9].strval)); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 3;  char valoare[256];char valoare1[256]; char valoare2[256];sprintf(valoare, "%d", (yyvsp[-6].intval));sprintf(valoare1, "%d", (yyvsp[-4].intval));sprintf(valoare2, "%d", (yyvsp[-2].intval)); strcpy(v[number_total_of_var].value, valoare); strcpy(v[number_total_of_var].value1, valoare1);strcpy(v[number_total_of_var].value2, valoare2); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 295 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-1].strval)); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] cubul %s este declarat de mai multe ori in clasa [line: %d]\n", (yyvsp[-1].strval), yylineno+2);number_erori++;}
strcpy(v[number_total_of_var].tip,(yyvsp[-11].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-1].strval)); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 3; insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 304 "pr.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 313 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-1].strval)); strcat(s, " "); strcat(s, (yyvsp[0].strval)); strcat(s, " "); strcat(f[number_total_of_funct].params, s);}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 328 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-3].strval)); if(control_err_funct(s) == 0) {printf("\n[EROARE] functia %s nu este declarata [line: %d]\n", (yyvsp[-3].strval), yylineno+2);number_erori++;}}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 332 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-3].strval)); if(control_err_funct(s)==0){ printf("\n[EROARE] functia %s nu este declarata [line: %d]\n", (yyvsp[-3].strval), yylineno+2);number_erori++;}}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 335 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-2].strval)); if(Control_declar_var_in_main(s) == 0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n", (yyvsp[-2].strval), yylineno+2);number_erori++;}}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 339 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-2].strval)); if(Control_declar_var_in_main(s) == 0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n", (yyvsp[-2].strval), yylineno+2);number_erori++;}   else {char valoare[256]; sprintf(valoare, "%d", (yyvsp[0].intval)); strcpy(v[retIndex(s)].value, valoare);}}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 343 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-2].strval)); if(Control_increment(s) == 0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2);number_erori++;}}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 347 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-2].strval)); if(Control_decrement(s) == 0){ printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2);number_erori++;}}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 351 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-2].strval)); if(Control_declar_var_in_main(s) == 0) {printf("\n[EROARE] arrayul %s nu este declarat [line: %d]\n",s,yylineno+2);number_erori++;}}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 356 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-6].strval)); if(Control_declar_var_in_main(s) == 0) {printf("\n[EROARE] matricea %s nu este declarata [line: %d]\n",s,yylineno+2);number_erori++;}}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 360 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-8].strval)); if(Control_declar_var_in_main(s) == 0){ printf("\n[EROARE] cubul %s nu este declarat [line: %d]\n",s,yylineno+2);number_erori++;}}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 363 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-1].strval)); if(Control_declar_var_in_main(s) == 0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2); number_erori++;} else if(Control_string_funct(s, "$string") == 0 && Control_string_funct(s, "$char") == 0) { printf("\n[EROARE] STRREV nu primeste decat $string sau $char [line: %d] \n",yylineno+2);  number_erori++; } }
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 366 "pr.y" /* yacc.c:1646  */
    {char s[256]; char s2[256]; strcpy(s, (yyvsp[-3].strval)); strcpy(s2, (yyvsp[-1].strval)); 
if(Control_declar_var_in_main(s)==0 || Control_declar_var_in_main(s2)==0){ printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2);number_erori++;} 
 else if((Control_string_funct(s, "$string") == 0 && Control_string_funct(s, "$char") == 0) || (Control_string_funct(s2, "$string") == 0 && Control_string_funct(s2, "$char") == 0)) printf("\n[EROARE] STRCAT nu primeste decat $string sau $char [line: %d] \n",yylineno+2);}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 372 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-3].strval)); if(Control_declar_var_in_main(s)==0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2);number_erori++;} else if(Control_string_funct(s, "$string") == 0 && Control_string_funct(s, "$char") == 0) printf("\n[EROARE] STRCAT nu primeste decat $string sau $char [line: %d] \n",yylineno+2);}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 375 "pr.y" /* yacc.c:1646  */
    {printf("%d\n", (yyvsp[-3].intval));}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 381 "pr.y" /* yacc.c:1646  */
    { char s[256]; strcpy(s, (yyvsp[-1].strval)); 
 if(Control_tip_for_Eval(s,"$int") == 0){printf("\n[EROARE] functia Eval nu primeste decat valori $int [line: %d] \n",yylineno+2);number_erori++;} else
 {printf("[S-a apelat functia Eval] valoarea expresiei este : %d\n", (yyvsp[-4].intval));} }
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 399 "pr.y" /* yacc.c:1646  */
    {char s1[256]; char s2[256]; strcpy(s1, (yyvsp[-9].strval)); strcpy(s2, "for_iterator"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] variabila %s este declarata de mai multe ori [line: %d]\n", (yyvsp[-11].strval),yylineno+2); number_erori++;} strcpy(v[number_total_of_var].tip,(yyvsp[-10].strval)); strcpy(v[number_total_of_var].nm,(yyvsp[-9].strval));strcpy(v[number_total_of_var].rol,"iterator"); v[number_total_of_var].size = 0; char valoare[256]; sprintf(valoare, "%d", (yyvsp[-7].intval)); strcpy(v[number_total_of_var].value, valoare);
insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 415 "pr.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-3].intval) * (yyvsp[-1].intval);}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 416 "pr.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-3].intval) / (yyvsp[-1].intval);}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 417 "pr.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-3].intval) + (yyvsp[-1].intval);}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 418 "pr.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-3].intval) - (yyvsp[-1].intval);}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 419 "pr.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-3].intval) % (yyvsp[-1].intval);}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 420 "pr.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-4].intval) && (yyvsp[-1].intval);}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 421 "pr.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-4].intval) || (yyvsp[-1].intval);}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 422 "pr.y" /* yacc.c:1646  */
    {(yyval.intval) = 404;}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 423 "pr.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[0].intval);}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 424 "pr.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[0].intval);}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 434 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[0].strval)); if(Control_declar_var_in_main(s)==0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2);number_erori++;}
 else {char s2[256]; strcpy(s2, returnVal(s)); if(strcmp(s2, "\0") == 0){ printf("\n[EROARE] variabila %s nu este initializata [line: %d]\n",s,yylineno+2);number_erori++;}} 
 (yyval.intval) = atoi(v[retIndex((yyvsp[0].strval))].value);}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 440 "pr.y" /* yacc.c:1646  */
    {char s[256]; char s2[256]; strcpy(s, (yyvsp[-2].strval)); strcpy(s2, (yyvsp[0].strval)); if(Control_declar_var_in_main(s)==0 && Control_declar_var_in_main(s2)==0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno);number_erori++;}}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 444 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[0].strval)); if(Control_declar_var_in_main(s)==0) {printf("\n[EROARE] arrayul %s nu este declarat [line: %d]\n",s,yylineno+2);number_erori++;}else {char s2[256]; strcpy(s2, returnVal_vect(s)); if(strcmp(s2, "\0") == 0){ printf("\n[EROARE] vectorul %s nu este initializat [line: %d]\n",s,yylineno+2);number_erori++;}} (yyval.intval) = atoi(v[retIndex((yyvsp[0].strval))].value);}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 449 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[0].strval)); if(Control_declar_var_in_main(s)==0){ printf("\n[EROARE] matricea %s nu este declarata [line: %d]\n",s,yylineno+2);number_erori++;}else {char s2[256]; strcpy(s2, returnVal_matrix(s)); if(strcmp(s2, "\0") == 0){ printf("\n[EROARE] matricea %s nu este initializata [line: %d]\n",s,yylineno+2);number_erori++;}} (yyval.intval) = atoi(v[retIndex((yyvsp[0].strval))].value);}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 453 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[0].strval)); if(Control_declar_var_in_main(s)==0){ printf("\n[EROARE] cubul %s nu este declarat [line: %d]\n",s,yylineno+2);number_erori++;}  else {char s2[256]; strcpy(s2, returnVal_cub(s)); if(strcmp(s2, "\0") == 0){ printf("\n[EROARE] cubul %s nu este initializat [line: %d]\n",s,yylineno+2);number_erori++;}} 
 (yyval.intval) = atoi(v[retIndex((yyvsp[0].strval))].value);}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 458 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-3].strval)); if(control_err_funct(s)==0){ printf("\n[EROARE] functia %s nu este declarata [line: %d]\n", (yyvsp[-3].strval), yylineno+2);number_erori++;}}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 462 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-3].strval)); if(control_err_funct(s)==0) {printf("\n[EROARE] functia %s nu este declarata [line: %d]\n", (yyvsp[-3].strval), yylineno+2);number_erori++;}}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 466 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-1].strval)); if(Control_declar_var_in_main(s)==0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2);number_erori++;} 
                else if(Control_string_funct(s, "$string") == 0 && Control_string_funct(s, "$char") == 0) {printf("\n[EROARE] functia STRLEN nu primeste decat $string sau $char [line: %d]\n",yylineno+2);number_erori++;}}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 470 "pr.y" /* yacc.c:1646  */
    {(yyval.intval) = 404;}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 474 "pr.y" /* yacc.c:1646  */
    {char s[256]; char s2[256]; strcpy(s, (yyvsp[-3].strval)); strcpy(s2, (yyvsp[-1].strval)); if(Control_declar_var_in_main(s)==0 || Control_declar_var_in_main(s2)==0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2);number_erori++;} else if((Control_string_funct(s, "$string") == 0 && Control_string_funct(s, "$char") == 0) || (Control_string_funct(s2, "$string") == 0 && Control_string_funct(s2, "$char") == 0)) {printf("\n[EROARE]-functia STRLEN nu primeste decat $string sau $char [line: %d]\n",yylineno+2);number_erori++;}}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 479 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-3].strval)); if(Control_declar_var_in_main(s)==0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2); number_erori++;}
else if(Control_string_funct(s, "$string") == 0 && Control_string_funct(s, "$char") == 0){ printf("\n[EROARE]-functia STRCMP nu primeste decat $string sau $char [line: %d]\n",yylineno+2);number_erori++;} (yyval.intval) = 404;}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 484 "pr.y" /* yacc.c:1646  */
    {char s[256]; strcpy(s, (yyvsp[-1].strval)); if(Control_declar_var_in_main(s)==0){ printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2); number_erori++;}
 else if(Control_string_funct(s, "$string") == 0 && Control_string_funct(s, "$char") == 0) {printf("\n[EROARE]-functia STRCMP nu primeste decat $string sau $char [line: %d]\n",yylineno+2); number_erori++;}(yyval.intval) = 404;}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 488 "pr.y" /* yacc.c:1646  */
    {(yyval.intval) = 404;}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2045 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 509 "pr.y" /* yacc.c:1906  */

int yyerror(char * s){
printf("[EROARE]: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
FILE* file1,* file2,* file3;

file1 = fopen("symbol_table.txt", "w");
 
fprintf(file1, "\n  [Nume]	     [Type]              [Scop]           [Size]          [Value]\n================================================================================\n");      
fclose(file1);
file2 = fopen("funct.txt", "w");
fprintf(file2, "\n [Nume functie]        [Type]                  [Parametrii functiei]	        [Scop]					\n=========================================================================================\n");
fclose(file2);
file3 = fopen("class.txt", "w");
fprintf(file3, "\n [Nume clasa]  \n=============\n");
fclose(file3);
yyparse();
FILE* file4;
FILE* file5;
FILE* file6;
char c;
file4 = fopen("symbol_table.txt", "a");
fprintf(file4, "\n\n\n\n\n");
file5 = fopen("funct.txt", "r");
    c = fgetc(file5); 
    while (c != EOF) 
    { 
        fputc(c, file4); 
        c = fgetc(file5); 
    }
fprintf(file4, "\n\n\n\n\n");
file6 = fopen("class.txt", "r");
    c = fgetc(file6); 
    while (c != EOF) 
    { 
        fputc(c, file4); 
        c = fgetc(file6); 
    } 
fclose(file4);
fclose(file5);
fclose(file6);
system("rm class.txt");
system("rm funct.txt");
} 
