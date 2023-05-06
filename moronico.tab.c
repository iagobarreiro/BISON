
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 ".\\moronico.y"


  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

  void yyerror(const char* mensaje);



/* Line 189 of yacc.c  */
#line 86 "moronico.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABSTRACTO = 258,
     AND = 259,
     ASOCIATIVA = 260,
     BOOLEANO = 261,
     CABECERA = 262,
     CADENA = 263,
     CASO = 264,
     CARACTER = 265,
     CARGA = 266,
     CLASE = 267,
     CONJUNTO = 268,
     CONSTANTE = 269,
     CUERPO = 270,
     CTC_BOOLEANA = 271,
     CTC_CADENA = 272,
     CTC_CARACTER = 273,
     CTC_ENTERA = 274,
     CTC_REAL = 275,
     CONSTRUCTOR = 276,
     CUANDO = 277,
     CUATRO_PTOS = 278,
     DESCENDENTE = 279,
     DESPD = 280,
     DESPI = 281,
     DESTRUCTOR = 282,
     DE = 283,
     DEVOLVER = 284,
     DOS_PTOS = 285,
     EJECUTA = 286,
     ELEMENTO = 287,
     EN = 288,
     ENTERO = 289,
     ENTONCES = 290,
     EQ = 291,
     ESPECIFICO = 292,
     EXCEPTO = 293,
     FICHERO = 294,
     FINAL = 295,
     FINALMENTE = 296,
     FLECHA_DOBLE = 297,
     FUNCION = 298,
     GEQ = 299,
     GENERICO = 300,
     HASTA = 301,
     IDENTIFICADOR = 302,
     INTERFAZ = 303,
     LANZAR = 304,
     LEQ = 305,
     LISTA = 306,
     MIENTRAS = 307,
     MODIFICABLE = 308,
     NEQ = 309,
     OTRO = 310,
     OR = 311,
     PAQUETE = 312,
     PARA = 313,
     PATH = 314,
     POTENCIA = 315,
     PRIVADO = 316,
     PROBAR = 317,
     PROCEDIMIENTO = 318,
     PROGRAMA = 319,
     PUBLICO = 320,
     REAL = 321,
     REGISTRO = 322,
     REPITE = 323,
     SEA = 324,
     SALIR = 325,
     SEMIPUBLICO = 326,
     SI = 327,
     SINO = 328,
     TIPO = 329,
     VARIABLE = 330
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 203 "moronico.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   659

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  214
/* YYNRULES -- Number of states.  */
#define YYNSTATES  425

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    98,     2,     2,     2,    91,    93,     2,
      80,    81,    89,    92,    79,    88,    87,    90,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    83,    76,
      96,    82,    97,     2,    95,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,     2,    85,    94,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,    86,    78,     2,     2,     2,     2,
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
      75
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    12,    15,    18,    19,    23,
      29,    33,    36,    38,    44,    51,    57,    58,    62,    66,
      72,    73,    76,    77,    81,    85,    87,    88,    91,    94,
      96,   101,   105,   107,   109,   111,   113,   115,   117,   119,
     121,   123,   125,   127,   129,   131,   133,   135,   139,   141,
     145,   150,   154,   156,   161,   162,   165,   170,   174,   179,
     185,   190,   191,   194,   197,   199,   205,   207,   211,   215,
     219,   223,   225,   231,   235,   241,   245,   246,   249,   256,
     261,   264,   266,   268,   278,   289,   299,   308,   311,   313,
     314,   317,   318,   321,   323,   326,   328,   330,   332,   337,
     340,   343,   346,   351,   353,   357,   359,   361,   363,   365,
     367,   371,   374,   376,   378,   380,   382,   385,   387,   393,
     397,   401,   404,   405,   409,   411,   415,   420,   424,   429,
     431,   433,   435,   437,   439,   441,   443,   445,   447,   449,
     454,   459,   462,   466,   469,   472,   480,   484,   486,   493,
     498,   505,   510,   514,   517,   518,   522,   524,   526,   528,
     531,   536,   543,   549,   552,   556,   563,   568,   573,   577,
     579,   584,   588,   590,   592,   594,   596,   598,   600,   602,
     604,   608,   611,   613,   617,   619,   623,   627,   631,   633,
     637,   641,   643,   647,   651,   653,   657,   659,   663,   665,
     669,   671,   675,   679,   683,   687,   691,   695,   697,   700,
     702,   706,   708,   712,   714
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     100,     0,    -1,   101,    -1,   107,    -1,    64,   102,    76,
     104,    -1,   103,    47,    -1,     1,    76,    -1,    -1,   103,
      47,    23,    -1,   110,   115,   132,   139,   105,    -1,    77,
     106,    78,    -1,   106,   167,    -1,   167,    -1,    57,   102,
      76,   108,   109,    -1,     7,   110,   115,   132,   139,   141,
      -1,    15,   115,   132,   139,   156,    -1,    -1,    11,   111,
      76,    -1,   102,   112,   113,    -1,   111,    79,   102,   112,
     113,    -1,    -1,    33,    59,    -1,    -1,    80,   114,    81,
      -1,   114,    79,   102,    -1,   102,    -1,    -1,    74,   116,
      -1,   116,   117,    -1,   117,    -1,   102,    82,   118,    76,
      -1,   102,    82,   119,    -1,   102,    -1,   120,    -1,   121,
      -1,   122,    -1,   124,    -1,   128,    -1,   129,    -1,   130,
      -1,   142,    -1,    34,    -1,    66,    -1,     6,    -1,    10,
      -1,     8,    -1,    39,    -1,    80,   123,    81,    -1,   186,
      -1,   123,    79,   186,    -1,    51,   125,    28,   118,    -1,
     125,    79,   126,    -1,   126,    -1,   200,    30,   200,   127,
      -1,    -1,    30,   200,    -1,    51,     5,    28,   118,    -1,
      13,    28,   118,    -1,    67,    77,   131,    78,    -1,   131,
     114,    83,   118,    76,    -1,   114,    83,   118,    76,    -1,
      -1,    14,   133,    -1,   133,   134,    -1,   134,    -1,   102,
      76,   118,    82,   135,    -1,   200,    -1,    84,   136,    85,
      -1,    84,   137,    85,    -1,    84,   138,    85,    -1,   136,
      79,   135,    -1,   135,    -1,   137,    79,    17,    42,   135,
      -1,    17,    42,   135,    -1,   138,    79,   102,    42,   135,
      -1,   102,    42,   135,    -1,    -1,    75,   140,    -1,   114,
      83,   118,    82,   135,    76,    -1,   114,    83,   118,    76,
      -1,    48,   158,    -1,   143,    -1,   144,    -1,    12,    40,
      80,    81,    77,   145,   146,   147,    78,    -1,    12,    40,
      80,   114,    81,    77,   145,   146,   147,    78,    -1,    12,
      80,   114,    81,    77,   145,   146,   147,    78,    -1,    12,
      80,    81,    77,   145,   146,   147,    78,    -1,    65,   148,
      -1,   148,    -1,    -1,    71,   148,    -1,    -1,    61,   148,
      -1,   149,    -1,   148,   149,    -1,   150,    -1,   151,    -1,
     152,    -1,   157,    76,   153,    76,    -1,   157,    76,    -1,
      74,   117,    -1,    14,   134,    -1,   114,    83,   118,    76,
      -1,   154,    -1,   154,    79,   155,    -1,   155,    -1,    45,
      -1,     3,    -1,    37,    -1,    40,    -1,   156,   157,   166,
      -1,   157,   166,    -1,   159,    -1,   160,    -1,   161,    -1,
     162,    -1,   158,   157,    -1,   157,    -1,    43,   102,   163,
      42,   118,    -1,    63,   102,   163,    -1,    21,   102,   163,
      -1,    27,   102,    -1,    -1,    80,   164,    81,    -1,   165,
      -1,   164,    76,   165,    -1,   114,    83,   118,    53,    -1,
     114,    83,   118,    -1,   115,   132,   139,   105,    -1,    76,
      -1,   168,    -1,   169,    -1,   170,    -1,   171,    -1,   174,
      -1,   175,    -1,   180,    -1,   182,    -1,   184,    -1,   185,
      82,   200,    76,    -1,    70,    72,   200,    76,    -1,    70,
      76,    -1,    29,   200,    76,    -1,    29,    76,    -1,   172,
      76,    -1,   102,    80,   173,    81,   102,    80,    81,    -1,
     173,    79,   200,    -1,   200,    -1,    72,   200,    35,   105,
      73,   105,    -1,    72,   200,    35,   105,    -1,    33,     9,
     200,    69,   176,    76,    -1,   176,   177,    42,   105,    -1,
     177,    42,   105,    -1,   178,   179,    -1,    -1,   178,   179,
      86,    -1,   200,    -1,   126,    -1,    55,    -1,   181,   105,
      -1,    58,   102,    33,   185,    -1,    68,    32,   102,    33,
     126,    24,    -1,    68,    32,   102,    33,   126,    -1,    52,
     200,    -1,    68,    46,   200,    -1,    62,   105,    38,   183,
      41,   105,    -1,    62,   105,    38,   183,    -1,    22,   102,
      31,   105,    -1,    49,   102,    76,    -1,   102,    -1,   185,
      84,   173,    85,    -1,   185,    87,    47,    -1,    19,    -1,
      20,    -1,    17,    -1,    18,    -1,    16,    -1,   186,    -1,
     185,    -1,   172,    -1,    80,   200,    81,    -1,    88,   187,
      -1,   187,    -1,   188,    60,   189,    -1,   188,    -1,   190,
      89,   189,    -1,   190,    90,   189,    -1,   190,    91,   189,
      -1,   189,    -1,   191,    92,   190,    -1,   191,    88,   190,
      -1,   190,    -1,   192,    26,   191,    -1,   192,    25,   191,
      -1,   191,    -1,   193,    93,   192,    -1,   192,    -1,   194,
      94,   193,    -1,   193,    -1,   195,    95,   192,    -1,   194,
      -1,   196,    96,   195,    -1,   196,    97,   195,    -1,   196,
      50,   195,    -1,   196,    44,   195,    -1,   196,    36,   195,
      -1,   196,    54,   195,    -1,   195,    -1,    98,   197,    -1,
     196,    -1,   198,     4,   197,    -1,   197,    -1,   199,    56,
     198,    -1,   198,    -1,   199,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    25,    25,    26,    29,    32,    33,    36,    37,    41,
      44,    47,    48,    51,    54,    57,    59,    60,    63,    64,
      67,    68,    71,    72,    75,    76,    84,    85,    88,    89,
      92,    93,    96,    97,    98,    99,   100,   101,   102,   105,
     106,   109,   110,   111,   112,   113,   116,   119,   122,   123,
     126,   129,   130,   133,   136,   137,   140,   143,   146,   149,
     150,   158,   158,   161,   162,   165,   168,   169,   170,   171,
     174,   175,   178,   179,   182,   183,   186,   187,   190,   191,
     195,   199,   200,   203,   204,   208,   209,   213,   214,   217,
     218,   221,   222,   225,   226,   229,   230,   231,   232,   233,
     236,   239,   242,   245,   248,   249,   252,   253,   254,   255,
     264,   265,   268,   269,   270,   271,   274,   275,   277,   280,
     283,   286,   289,   290,   293,   294,   297,   298,   301,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   323,
     325,   326,   329,   330,   333,   336,   340,   341,   344,   345,
     348,   351,   352,   355,   357,   358,   361,   362,   363,   366,
     369,   370,   371,   372,   373,   376,   377,   380,   383,   391,
     392,   393,   396,   397,   398,   399,   400,   403,   404,   405,
     406,   409,   410,   413,   414,   417,   418,   419,   420,   423,
     424,   425,   428,   429,   430,   434,   435,   438,   439,   442,
     443,   446,   447,   448,   449,   450,   451,   452,   455,   456,
     459,   460,   464,   465,   469
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABSTRACTO", "AND", "ASOCIATIVA",
  "BOOLEANO", "CABECERA", "CADENA", "CASO", "CARACTER", "CARGA", "CLASE",
  "CONJUNTO", "CONSTANTE", "CUERPO", "CTC_BOOLEANA", "CTC_CADENA",
  "CTC_CARACTER", "CTC_ENTERA", "CTC_REAL", "CONSTRUCTOR", "CUANDO",
  "CUATRO_PTOS", "DESCENDENTE", "DESPD", "DESPI", "DESTRUCTOR", "DE",
  "DEVOLVER", "DOS_PTOS", "EJECUTA", "ELEMENTO", "EN", "ENTERO",
  "ENTONCES", "EQ", "ESPECIFICO", "EXCEPTO", "FICHERO", "FINAL",
  "FINALMENTE", "FLECHA_DOBLE", "FUNCION", "GEQ", "GENERICO", "HASTA",
  "IDENTIFICADOR", "INTERFAZ", "LANZAR", "LEQ", "LISTA", "MIENTRAS",
  "MODIFICABLE", "NEQ", "OTRO", "OR", "PAQUETE", "PARA", "PATH",
  "POTENCIA", "PRIVADO", "PROBAR", "PROCEDIMIENTO", "PROGRAMA", "PUBLICO",
  "REAL", "REGISTRO", "REPITE", "SEA", "SALIR", "SEMIPUBLICO", "SI",
  "SINO", "TIPO", "VARIABLE", "';'", "'{'", "'}'", "','", "'('", "')'",
  "'='", "':'", "'['", "']'", "'|'", "'.'", "'-'", "'*'", "'/'", "'%'",
  "'+'", "'&'", "'^'", "'@'", "'<'", "'>'", "'!'", "$accept", "programa",
  "definicion_programa", "nombre", "id_op", "bloque_programa",
  "bloque_instrucciones", "instruccion_unoomas", "definicion_paquete",
  "seccion_cabecera", "seccion_cuerpo", "declaracion_cargas",
  "declaracion_carga_unoomas", "en_path_op", "nombres_op", "nombres_comas",
  "declaracion_tipos", "declaracion_tipo_unoomas", "declaracion_tipo",
  "tipo_no_estructurado_o_nombre_tipo", "tipo_estructurado",
  "tipo_escalar", "tipo_fichero", "tipo_enumerado",
  "expresion_constante_unoomas", "tipo_lista", "rango_lista", "rango",
  "expresion_rango_op", "tipo_lista_asociativa", "tipo_conjunto",
  "tipo_registro", "declaracion_campo", "declaracion_constantes",
  "declaracion_constante_unoomas", "declaracion_constante",
  "valor_constante", "valor_constante_comas", "clave_valor", "campo_valor",
  "declaracion_variables", "declaracion_variable",
  "declaracion_interfaces", "declaracion_clase", "declaracion_clase_mod",
  "declaracion_clase_nomod", "declaraciones_publicas",
  "declaraciones_semi", "declaraciones_privadas",
  "declaracion_componente_unoomas", "declaracion_componente",
  "declaracion_tipo_anidado", "declaracion_constante_anidada",
  "declaracion_atributos", "modificadores", "modificador_comas",
  "modificador", "declaracion_subprograma", "cabecera_subprograma",
  "cabecera_subprograma_unoomas", "cabecera_funcion",
  "cabecera_procedimiento", "cabecera_constructor", "cabecera_destructor",
  "declaracion_parametros", "lista_parametros_formales",
  "parametros_formales", "bloque_subprograma", "instruccion",
  "instruccion_asignacion", "instruccion_salir", "instruccion_devolver",
  "instruccion_llamada", "llamada_subprograma", "expresion_comas",
  "instruccion_si", "instruccion_casos", "caso", "entradas", "entradas_op",
  "entrada", "instruccion_bucle", "clausula_iteracion",
  "instruccion_probar_excepto", "clausula_excepcion", "instruccion_lanzar",
  "objeto", "expresion_constante", "expresion_primaria",
  "expresion_unitaria", "expresion_potencia", "expresion_prod",
  "expresion_sum", "expresion_desplz", "expresion_and_bin",
  "expresion_or_bin", "expresion_xor_bin", "expresion_comparar",
  "expresion_negacion", "expresion_and_logico", "expresion_or_logico",
  "expresion", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,    59,   123,   125,    44,
      40,    41,    61,    58,    91,    93,   124,    46,    45,    42,
      47,    37,    43,    38,    94,    64,    60,    62,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    99,   100,   100,   101,   102,   102,   103,   103,   104,
     105,   106,   106,   107,   108,   109,   110,   110,   111,   111,
     112,   112,   113,   113,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   118,   118,   118,   118,   118,   118,   119,
     119,   120,   120,   120,   120,   120,   121,   122,   123,   123,
     124,   125,   125,   126,   127,   127,   128,   129,   130,   131,
     131,   132,   132,   133,   133,   134,   135,   135,   135,   135,
     136,   136,   137,   137,   138,   138,   139,   139,   140,   140,
     141,   142,   142,   143,   143,   144,   144,   145,   145,   146,
     146,   147,   147,   148,   148,   149,   149,   149,   149,   149,
     150,   151,   152,   153,   154,   154,   155,   155,   155,   155,
     156,   156,   157,   157,   157,   157,   158,   158,   159,   160,
     161,   162,   163,   163,   164,   164,   165,   165,   166,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   168,
     169,   169,   170,   170,   171,   172,   173,   173,   174,   174,
     175,   176,   176,   177,   178,   178,   179,   179,   179,   180,
     181,   181,   181,   181,   181,   182,   182,   183,   184,   185,
     185,   185,   186,   186,   186,   186,   186,   187,   187,   187,
     187,   188,   188,   189,   189,   190,   190,   190,   190,   191,
     191,   191,   192,   192,   192,   193,   193,   194,   194,   195,
     195,   196,   196,   196,   196,   196,   196,   196,   197,   197,
     198,   198,   199,   199,   200
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     2,     0,     3,     5,
       3,     2,     1,     5,     6,     5,     0,     3,     3,     5,
       0,     2,     0,     3,     3,     1,     0,     2,     2,     1,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       4,     3,     1,     4,     0,     2,     4,     3,     4,     5,
       4,     0,     2,     2,     1,     5,     1,     3,     3,     3,
       3,     1,     5,     3,     5,     3,     0,     2,     6,     4,
       2,     1,     1,     9,    10,     9,     8,     2,     1,     0,
       2,     0,     2,     1,     2,     1,     1,     1,     4,     2,
       2,     2,     4,     1,     3,     1,     1,     1,     1,     1,
       3,     2,     1,     1,     1,     1,     2,     1,     5,     3,
       3,     2,     0,     3,     1,     3,     4,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     2,     3,     2,     2,     7,     3,     1,     6,     4,
       6,     4,     3,     2,     0,     3,     1,     1,     1,     2,
       4,     6,     5,     2,     3,     6,     4,     4,     3,     1,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     1,     3,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     3,     3,     3,     3,     1,     2,     1,
       3,     1,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     0,     0,
       1,     6,     0,     5,    16,    16,     0,     8,     0,     4,
      26,    26,    26,    13,    20,     0,     0,    61,    61,    61,
       0,    22,    17,     0,     0,     0,    29,     0,    76,    76,
      76,    21,     0,    18,    20,     0,    28,     0,     0,    64,
       0,     0,     0,     0,    25,     0,    22,    43,    45,    44,
       0,     0,    41,    46,     0,    42,     0,     0,    32,     0,
      31,    33,    34,    35,    36,    37,    38,    39,    40,    81,
      82,     0,    63,     0,    77,     0,     9,     0,    14,     0,
       0,     0,     0,    15,    26,   112,   113,   114,   115,     0,
      23,    19,     0,     0,     0,     0,   176,   174,   175,   172,
     173,     0,     0,     0,   169,     0,    52,   179,   178,   177,
     182,   184,   188,   191,   194,   196,   198,   200,   207,   209,
     211,   213,   214,     0,     0,     0,    48,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   129,
       0,    12,   130,   131,   132,   133,     0,   134,   135,   136,
       0,   137,   138,     0,   117,    80,   122,   121,   122,   122,
      26,    61,   111,    24,     0,     0,     0,    57,     0,     0,
     181,   208,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,     0,     0,   143,     0,     0,     0,   163,     0,     0,
       0,     0,     0,   141,     0,    10,    11,   144,   159,     0,
     116,     0,   120,     0,   119,   110,    76,     0,     0,     0,
       0,    56,   180,     0,   147,    50,    51,     0,   171,   183,
     185,   186,   187,   190,   189,   193,   192,   195,   197,   199,
     205,   204,   203,   206,   201,   202,   210,   212,    54,     0,
      58,     0,    49,     0,    65,    66,    79,     0,   142,     0,
     168,     0,     0,     0,   164,     0,     0,     0,     0,     0,
     124,     0,     0,     0,     0,     0,     0,     0,     0,    89,
       0,    93,    95,    96,    97,     0,     0,     0,     0,   170,
       0,    53,     0,     0,   174,   169,    71,     0,     0,     0,
       0,   154,   169,   160,     0,   166,     0,   140,   149,   139,
       0,     0,   123,   118,   128,    89,     0,   101,     0,   100,
       0,     0,    91,    94,    99,    89,   146,     0,    55,    60,
       0,     0,     0,     0,    67,     0,    68,     0,    69,    78,
     154,     0,     0,     0,     0,   162,     0,   127,   125,    91,
      89,     0,     0,     0,     0,   107,   108,   109,   106,     0,
     103,   105,    91,     0,    59,    73,    75,    70,     0,     0,
     150,     0,     0,   158,   157,   153,   156,     0,   165,   161,
     148,   126,     0,    91,   102,     0,    86,    98,     0,     0,
     145,     0,     0,     0,   152,   155,   167,    83,     0,   104,
      85,    72,    74,   151,    84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,   114,     8,    19,    86,   150,     5,    16,
      23,    20,    25,    31,    43,   298,   171,    35,    36,    69,
      70,    71,    72,    73,   135,    74,   115,   116,   311,    75,
      76,    77,   208,    38,    48,    49,   274,   317,   318,   319,
      51,    84,    88,    78,    79,    80,   299,   342,   374,   300,
     301,   302,   303,   304,   379,   380,   381,    93,   305,   165,
      95,    96,    97,    98,   232,   289,   290,   172,   151,   152,
     153,   154,   155,   117,   243,   157,   158,   360,   361,   362,
     395,   159,   160,   161,   325,   162,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   275
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -309
static const yytype_int16 yypact[] =
{
      44,    23,    23,    40,  -309,  -309,   -28,    53,    69,    90,
    -309,  -309,   174,    38,   188,   188,   191,  -309,    23,  -309,
     129,   129,   129,  -309,   180,    16,    23,   211,   211,   211,
     169,   149,  -309,    23,   155,   525,  -309,    23,   170,   170,
     170,  -309,    23,  -309,   180,   402,  -309,   186,   514,  -309,
      23,   193,   240,   153,  -309,    -8,   149,  -309,  -309,  -309,
       3,   263,  -309,  -309,    37,  -309,   220,   325,  -309,   222,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,   412,  -309,    76,  -309,   522,  -309,   153,  -309,    23,
      23,    23,    23,   153,   129,  -309,  -309,  -309,  -309,    23,
    -309,  -309,   223,    28,   412,   272,  -309,  -309,  -309,  -309,
    -309,   350,   131,   350,   224,     7,  -309,  -309,   113,  -309,
    -309,   246,  -309,   150,    70,   184,   215,   216,   219,   158,
    -309,   307,   259,   286,    23,    61,  -309,  -309,   254,   412,
     168,   313,    23,   350,    23,   193,    14,    91,   350,  -309,
     423,  -309,  -309,  -309,  -309,  -309,   262,  -309,  -309,  -309,
     193,  -309,  -309,    31,  -309,   153,   267,  -309,   267,   267,
     129,   211,  -309,  -309,    30,   275,   111,  -309,   412,   268,
    -309,  -309,   350,   412,   350,   350,   306,   374,   374,   374,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   350,   350,   350,    92,    22,   325,
    -309,   266,   -37,  -309,   281,   350,   282,  -309,   326,   322,
      23,   350,   350,  -309,   327,  -309,  -309,  -309,  -309,   350,
    -309,    23,  -309,   319,  -309,  -309,   170,   288,   179,   582,
     296,  -309,  -309,   208,  -309,  -309,  -309,    -7,  -309,  -309,
    -309,  -309,  -309,   150,   150,    70,    70,   184,   215,   184,
     219,   219,   219,   219,   219,   219,  -309,   307,   344,   412,
    -309,    93,  -309,   301,  -309,  -309,  -309,   266,  -309,   309,
    -309,    23,   354,   346,  -309,   304,   193,   310,   100,    63,
    -309,   412,   193,   582,   300,    23,   585,    23,   112,   311,
     200,  -309,  -309,  -309,  -309,   324,   582,   350,    23,  -309,
     350,  -309,   329,   412,   341,   -14,  -309,    35,    49,    52,
     331,  -309,  -309,   113,    23,   343,   350,  -309,   314,  -309,
     412,    23,  -309,  -309,  -309,   311,   582,  -309,   459,  -309,
     412,   585,   334,  -309,    82,   311,  -309,   318,  -309,  -309,
     333,   266,   266,   266,  -309,   384,  -309,    23,  -309,  -309,
     335,   360,   308,   385,   193,   393,   193,   366,  -309,   334,
     311,   347,   482,   585,   348,  -309,  -309,  -309,  -309,   351,
     349,  -309,   334,   352,  -309,  -309,  -309,  -309,   387,   389,
    -309,   390,   193,  -309,  -309,   353,   286,   193,  -309,  -309,
    -309,  -309,   356,   334,  -309,   507,  -309,  -309,    82,   357,
    -309,   266,   266,   193,  -309,  -309,  -309,  -309,   359,  -309,
    -309,  -309,  -309,  -309,  -309
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -309,  -309,  -309,    -1,  -309,  -309,  -140,  -309,  -309,  -309,
    -309,   425,  -309,   398,   388,   -38,   255,  -309,   -33,   -71,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -173,  -309,  -309,
    -309,  -309,  -309,   -15,  -309,   -42,  -247,  -309,  -309,  -309,
     -32,  -309,  -309,  -309,  -309,  -309,  -242,  -308,  -306,  -274,
    -279,  -309,  -309,  -309,  -309,  -309,    39,  -309,   -35,  -309,
    -309,  -309,  -309,  -309,    54,  -309,   114,   273,   305,  -309,
    -309,  -309,  -309,   -69,   265,  -309,  -309,  -309,    97,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,   -76,   -52,   355,  -309,
     144,    26,    57,    84,   269,  -309,    33,  -309,   -94,   253,
    -309,   -61
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -93
static const yytype_int16 yytable[] =
{
       7,     9,    46,   133,    55,   219,    82,    52,    53,   163,
     138,   246,    83,    39,    40,   136,   156,    24,    94,   181,
     228,   343,   338,     6,     6,    34,   316,   369,   352,     6,
     320,     6,    44,   177,    34,   183,    47,   382,     6,   276,
      10,    54,   105,   102,    68,   277,   220,    47,    11,    54,
     179,   335,   164,   106,   107,   108,   109,   110,   170,   343,
     221,    17,   403,   402,   345,   176,   182,   372,   212,    -7,
      -7,    99,   307,   100,   163,    -7,   409,    -7,   309,   214,
      68,   156,   217,   103,    -7,   375,   184,   224,   166,   167,
     168,   169,    32,   343,   370,    33,   207,   418,   173,   405,
     270,     1,    54,    68,   385,   386,   387,   241,     2,   175,
     266,   237,   245,   229,   353,   185,    13,   111,   186,   376,
     354,   244,   377,   133,   244,   112,   343,   378,   355,    12,
     230,   357,     6,    54,   356,   113,   238,   358,    68,   331,
     209,   216,   210,   218,   332,   268,   328,   106,   107,   108,
     109,   110,   334,   365,   279,    99,   236,   272,   191,   139,
     284,   285,   192,   222,   421,   422,    14,   223,   287,     6,
     271,    99,    99,    54,    89,   269,   313,    68,    -7,    99,
      90,    15,    68,   330,   106,   107,   108,   109,   110,   394,
      99,    99,   240,   288,   198,   340,    91,   185,   312,    18,
     186,     6,   199,    26,   292,   323,    22,    54,   200,   193,
     194,   111,   201,    30,   295,    -7,    92,   253,   254,   283,
     333,    89,   233,   234,   398,    37,   400,    90,    41,    42,
      54,   260,   261,   262,   263,   264,   265,    45,    54,   188,
     189,   190,   350,    91,   213,    50,   346,    -7,   111,   348,
     255,   256,   414,   337,   202,   203,   112,   416,    99,   367,
     294,   -88,    81,    92,   339,   133,   113,     6,    68,   371,
      85,   -88,   315,   423,   297,    27,    28,    29,   -88,   257,
     322,   259,   106,   107,   108,   109,   110,   307,    87,   308,
      68,   104,    54,   288,    47,    54,    34,   134,   137,    54,
     178,   396,     6,   174,   182,    54,   187,   347,   195,     6,
     196,   204,    68,    -7,   197,   205,   206,   106,   314,   108,
     109,   110,   215,   363,   106,   107,   108,   109,   110,    68,
      54,   249,   250,   251,   252,    54,   211,    54,   227,    68,
      54,   106,   107,   108,   109,   110,   111,   231,    -7,   242,
     273,     6,   239,   248,   112,    -7,   389,   278,   280,   281,
     282,   291,   286,   393,   113,   293,   106,   107,   108,   109,
     110,    54,    54,   306,   310,     6,   324,   336,   321,   326,
     327,   111,   341,   351,   364,   273,   329,   366,   111,   112,
     106,   107,   108,   109,   110,   373,   112,    -7,   383,   113,
     344,   388,   392,     6,    54,   349,   113,   359,    57,   384,
      58,   390,    59,     6,    60,    61,   397,   399,    57,   401,
      58,    -7,    59,   404,     6,    61,   406,   407,   408,   411,
     111,   412,   413,   410,   417,   420,    62,   424,   112,   415,
      21,    63,    56,   235,   101,   368,    62,   419,   113,    -7,
     247,    63,   140,    64,   111,   226,   141,   391,   267,    -7,
       6,     0,   112,    64,     0,   258,     0,   180,    65,    66,
      -7,     0,   142,   295,     0,   143,     0,     0,    65,     0,
      89,   144,    67,     6,     0,   145,    90,     0,     0,     0,
       0,   146,    67,   147,     0,   148,   295,     0,     0,   149,
       0,   225,    91,    89,     0,     0,    -7,     0,     6,    90,
       0,     0,     0,     0,     0,     6,     0,     0,     0,     0,
     -87,   295,    92,     6,     0,    91,     6,     0,    89,    -7,
     -87,     0,     0,   297,    90,   -62,     0,   -87,     0,   -27,
       0,   -62,     0,   -90,     0,    92,   -27,     0,     0,     0,
      91,   140,   -27,     0,    -7,   141,   297,   -62,     0,     0,
     -90,    -7,   -62,     0,     0,     0,     0,     0,   -27,    -7,
      92,   142,    -7,   -27,   143,     0,     0,   -62,     0,     0,
     144,   297,     0,     6,   145,   -92,     6,     0,   -27,   -62,
     146,   -62,   147,     0,   148,     0,   295,     0,   149,   295,
     -27,     0,   -27,    89,     0,     0,    89,     0,     0,    90,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,    91,    -7,
       0,     0,    -7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,   296,    92,     0,
       0,     0,     0,     0,     0,     0,   297,     0,     0,   297
};

static const yytype_int16 yycheck[] =
{
       1,     2,    35,    64,    42,   145,    48,    39,    40,    85,
      81,   184,    50,    28,    29,    67,    85,    18,    53,   113,
     160,   300,   296,     1,     1,    26,   273,   335,    42,     1,
     277,     1,    33,   104,    35,    28,    37,   345,     1,    76,
       0,    42,     5,    40,    45,    82,    32,    48,    76,    50,
     111,   293,    87,    16,    17,    18,    19,    20,    93,   338,
      46,    23,   370,   369,   306,   103,    80,   341,   139,    47,
      47,    79,    79,    81,   150,    47,   382,    47,    85,   140,
      81,   150,   143,    80,    47,     3,    79,   148,    89,    90,
      91,    92,    76,   372,   336,    79,   134,   403,    99,   373,
      78,    57,   103,   104,   351,   352,   353,   178,    64,    81,
     204,    81,   183,    82,    79,    84,    47,    80,    87,    37,
      85,   182,    40,   184,   185,    88,   405,    45,    79,    76,
     165,    79,     1,   134,    85,    98,   174,    85,   139,    76,
      79,   142,    81,   144,    81,   206,   286,    16,    17,    18,
      19,    20,   292,   326,   215,    79,   171,   209,    88,    83,
     221,   222,    92,    72,   411,   412,    76,    76,   229,     1,
     208,    79,    79,   174,    21,    83,    83,   178,    47,    79,
      27,     7,   183,    83,    16,    17,    18,    19,    20,   362,
      79,    79,    81,   231,    36,    83,    43,    84,   269,    11,
      87,     1,    44,    74,   236,   281,    15,   208,    50,    25,
      26,    80,    54,    33,    14,    47,    63,   191,   192,   220,
     291,    21,   168,   169,   364,    14,   366,    27,    59,    80,
     231,   198,   199,   200,   201,   202,   203,    82,   239,    89,
      90,    91,   313,    43,    76,    75,   307,    47,    80,   310,
     193,   194,   392,   295,    96,    97,    88,   397,    79,   330,
      81,    61,    76,    63,   297,   326,    98,     1,   269,   340,
      77,    71,   273,   413,    74,    20,    21,    22,    78,   195,
     281,   197,    16,    17,    18,    19,    20,    79,    48,    81,
     291,    28,   293,   331,   295,   296,   297,    77,    76,   300,
      28,   362,     1,    80,    80,   306,    60,   308,    93,     1,
      94,     4,   313,    47,    95,    56,    30,    16,    17,    18,
      19,    20,     9,   324,    16,    17,    18,    19,    20,   330,
     331,   187,   188,   189,   190,   336,    82,   338,    76,   340,
     341,    16,    17,    18,    19,    20,    80,    80,    47,    81,
      84,     1,    77,    47,    88,    47,   357,    76,    76,    33,
      38,    42,    35,    55,    98,    77,    16,    17,    18,    19,
      20,   372,   373,    77,    30,     1,    22,    77,    69,    33,
      76,    80,    71,    42,    41,    84,    76,    73,    80,    88,
      16,    17,    18,    19,    20,    61,    88,    47,    80,    98,
      76,    17,    42,     1,   405,    76,    98,    76,     6,    76,
       8,    76,    10,     1,    12,    13,    31,    24,     6,    53,
       8,    47,    10,    76,     1,    13,    78,    76,    79,    42,
      80,    42,    42,    81,    78,    78,    34,    78,    88,    86,
      15,    39,    44,   170,    56,   331,    34,   408,    98,    47,
     185,    39,    29,    51,    80,   150,    33,   360,   205,    47,
       1,    -1,    88,    51,    -1,   196,    -1,   112,    66,    67,
      47,    -1,    49,    14,    -1,    52,    -1,    -1,    66,    -1,
      21,    58,    80,     1,    -1,    62,    27,    -1,    -1,    -1,
      -1,    68,    80,    70,    -1,    72,    14,    -1,    -1,    76,
      -1,    78,    43,    21,    -1,    -1,    47,    -1,     1,    27,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      61,    14,    63,     1,    -1,    43,     1,    -1,    21,    47,
      71,    -1,    -1,    74,    27,    21,    -1,    78,    -1,    14,
      -1,    27,    -1,    61,    -1,    63,    21,    -1,    -1,    -1,
      43,    29,    27,    -1,    47,    33,    74,    43,    -1,    -1,
      78,    47,    48,    -1,    -1,    -1,    -1,    -1,    43,    47,
      63,    49,    47,    48,    52,    -1,    -1,    63,    -1,    -1,
      58,    74,    -1,     1,    62,    78,     1,    -1,    63,    75,
      68,    77,    70,    -1,    72,    -1,    14,    -1,    76,    14,
      75,    -1,    77,    21,    -1,    -1,    21,    -1,    -1,    27,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    43,    47,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    74
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    64,   100,   101,   107,     1,   102,   103,   102,
       0,    76,    76,    47,    76,     7,   108,    23,    11,   104,
     110,   110,    15,   109,   102,   111,    74,   115,   115,   115,
      33,   112,    76,    79,   102,   116,   117,    14,   132,   132,
     132,    59,    80,   113,   102,    82,   117,   102,   133,   134,
      75,   139,   139,   139,   102,   114,   112,     6,     8,    10,
      12,    13,    34,    39,    51,    66,    67,    80,   102,   118,
     119,   120,   121,   122,   124,   128,   129,   130,   142,   143,
     144,    76,   134,   114,   140,    77,   105,    48,   141,    21,
      27,    43,    63,   156,   157,   159,   160,   161,   162,    79,
      81,   113,    40,    80,    28,     5,    16,    17,    18,    19,
      20,    80,    88,    98,   102,   125,   126,   172,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,    77,   123,   186,    76,   118,    83,
      29,    33,    49,    52,    58,    62,    68,    70,    72,    76,
     106,   167,   168,   169,   170,   171,   172,   174,   175,   180,
     181,   182,   184,   185,   157,   158,   102,   102,   102,   102,
     157,   115,   166,   102,    80,    81,   114,   118,    28,   200,
     187,   197,    80,    28,    79,    84,    87,    60,    89,    90,
      91,    88,    92,    25,    26,    93,    94,    95,    36,    44,
      50,    54,    96,    97,     4,    56,    30,   114,   131,    79,
      81,    82,   118,    76,   200,     9,   102,   200,   102,   105,
      32,    46,    72,    76,   200,    78,   167,    76,   105,    82,
     157,    80,   163,   163,   163,   166,   132,    81,   114,    77,
      81,   118,    81,   173,   200,   118,   126,   173,    47,   189,
     189,   189,   189,   190,   190,   191,   191,   192,   193,   192,
     195,   195,   195,   195,   195,   195,   197,   198,   200,    83,
      78,   114,   186,    84,   135,   200,    76,    82,    76,   200,
      76,    33,    38,   102,   200,   200,    35,   200,   114,   164,
     165,    42,   139,    77,    81,    14,    65,    74,   114,   145,
     148,   149,   150,   151,   152,   157,    77,    79,    81,    85,
      30,   127,   118,    83,    17,   102,   135,   136,   137,   138,
     135,    69,   102,   185,    22,   183,    33,    76,   105,    76,
      83,    76,    81,   118,   105,   145,    77,   134,   148,   117,
      83,    71,   146,   149,    76,   145,   200,   102,   200,    76,
     118,    42,    42,    79,    85,    79,    85,    79,    85,    76,
     176,   177,   178,   102,    41,   126,    73,   118,   165,   146,
     145,   118,   148,    61,   147,     3,    37,    40,    45,   153,
     154,   155,   146,    80,    76,   135,   135,   135,    17,   102,
      76,   177,    42,    55,   126,   179,   200,    31,   105,    24,
     105,    53,   147,   146,    76,   148,    78,    76,    79,   147,
      81,    42,    42,    42,   105,    86,   105,    78,   147,   155,
      78,   135,   135,   105,    78
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 25 ".\\moronico.y"
    {printf("\t programa -> def_programa \n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 26 ".\\moronico.y"
    {printf("\t programa -> def_paquete \n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 29 ".\\moronico.y"
    {printf("\t def_programa -> PROGRAMA ';' bloque_programa \n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 32 ".\\moronico.y"
    {printf("\t nombre -> identificador_con_cuatro_ptos_ceroomas IDENTIFICADOR \n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 33 ".\\moronico.y"
    {yyerror("Error en nombre"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 41 ".\\moronico.y"
    {printf("\t bloque_programa -> declaracion_cargas_op declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones \n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 44 ".\\moronico.y"
    {printf("\t bloque_instrucciones -> '{' instruccion_unoomas '}'  \n");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 47 ".\\moronico.y"
    {printf("\t instruccion_unoomas -> instruccion  \n");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 48 ".\\moronico.y"
    {printf("\t instruccion_unoomas -> instruccion_unoomas instruccion  \n");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 51 ".\\moronico.y"
    {printf("\t definicion_paquete -> PAQUETE nombre ';' seccion_cabecera seccion_cuerpo  \n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 54 ".\\moronico.y"
    {printf("\t seccion_cabecera -> CABECERA declaracion_cargas_op declaracion_tipos declaracion_constantes declaracion_variables declaracion_interfaces  \n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 57 ".\\moronico.y"
    {printf("\t seccion_cuerpo -> CUERPO declaracion_tipos declaracion_constantes declaracion_variables declaracion_subprograma  \n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 60 ".\\moronico.y"
    {printf("\t declaracion_cargas_op -> CARGA declaracion_carga_unoomas ';'  \n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 63 ".\\moronico.y"
    {printf("\t declaracion_carga_unoomas -> nombre en_path_op nombres_op  \n");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 64 ".\\moronico.y"
    {printf("\t declaracion_carga_unoomas -> declaracion_carga_unoomas ',' nombre en_path_op nombres_op  \n");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 68 ".\\moronico.y"
    {printf("\t en_path_op -> EN PATH  \n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 72 ".\\moronico.y"
    {printf("\t nombres_op -> '('  nombres_comas ')'  \n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 75 ".\\moronico.y"
    {printf("\t nombres_comas -> nombres_comas ',' nombre  \n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 76 ".\\moronico.y"
    {printf("\t nombres_comas -> nombre  \n");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 85 ".\\moronico.y"
    {printf("\t declaracionlaracion_tipos -> TIPO declaracion_tipo  \n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 92 ".\\moronico.y"
    {printf("\t declaracion_tipo -> nombre '=' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 93 ".\\moronico.y"
    {printf("\t declaracion_tipo -> nombre '=' tipo_estructurado  \n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 96 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> nombre  \n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 97 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_escalar  \n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 98 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_fichero  \n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 99 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_enumerado  \n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 100 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_lista  \n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 101 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_lista_asociativa  \n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 102 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_conjunto  \n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 105 ".\\moronico.y"
    {printf("\t tipo_estructurado -> tipo_registro  \n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 106 ".\\moronico.y"
    {printf("\t tipo_estructurado -> declaracion_clase  \n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 109 ".\\moronico.y"
    {printf("\t tipo_escalar -> ENTERO  \n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 110 ".\\moronico.y"
    {printf("\t tipo_escalar -> REAL  \n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 111 ".\\moronico.y"
    {printf("\t tipo_escalar -> BOOLEANO  \n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 112 ".\\moronico.y"
    {printf("\t tipo_escalar -> CARACTER  \n");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 113 ".\\moronico.y"
    {printf("\t tipo_escalar -> CADENA  \n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 116 ".\\moronico.y"
    {printf("\t tipo_fichero -> FICHERO  \n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 119 ".\\moronico.y"
    {printf("\t tipo_enumerado -> '(' expresion_constante_unoomas ')'  \n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 122 ".\\moronico.y"
    {printf("\t expresion_constante_unoomas -> expresion_constante  \n");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 123 ".\\moronico.y"
    {printf("\t expresion_constante_unoomas -> expresion_constante_unoomas ',' expresion_constante  \n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 126 ".\\moronico.y"
    {printf("\t tipo_lista -> LISTA rango_lista DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 129 ".\\moronico.y"
    {printf("\t rango_lista ->  rango_lista ',' rango  \n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 130 ".\\moronico.y"
    {printf("\t rango_lista -> rango  \n");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 133 ".\\moronico.y"
    {printf("\t rango -> expresion DOS_PTOS expresion expresion_rango_op  \n");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 137 ".\\moronico.y"
    {printf("\t expresion_rango_op -> DOS_PTOS expresion  \n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 140 ".\\moronico.y"
    {printf("\t tipo_lista_asociativa -> LISTA ASOCIATIVA DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 143 ".\\moronico.y"
    {printf("\t tipo_conjunto -> CONJUNTO DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 146 ".\\moronico.y"
    {printf("\t tipo_registro -> REGISTRO '{' declaracion_campo '}'  \n");;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 149 ".\\moronico.y"
    {printf("\t declaracion_campo -> declaracion_campo nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;



/* Line 1455 of yacc.c  */
#line 2219 "moronico.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 471 ".\\moronico.y"


void yyerror(const char* mensaje)
{
    printf("*******************Error: %s\n", mensaje);
}

int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

  yydebug = 0;

  if (argc < 2) {
    printf("Uso: ./moronico NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }

