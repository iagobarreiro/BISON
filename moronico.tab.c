
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

  int yyerror(char *);

  int errores = 0;



/* Line 189 of yacc.c  */
#line 88 "moronico.tab.c"

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
#line 205 "moronico.tab.c"

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   565

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  229
/* YYNRULES -- Number of states.  */
#define YYNSTATES  459

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
       2,     2,     2,     2,     2,     2,     2,     2,    85,    76,
      96,    82,    97,     2,    95,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    83,     2,    84,    94,     2,     2,     2,     2,     2,
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
      29,    32,    36,    40,    43,    45,    51,    58,    64,    65,
      69,    73,    79,    80,    83,    84,    88,    92,    96,    98,
      99,   102,   105,   107,   112,   116,   118,   120,   122,   124,
     126,   128,   130,   132,   134,   136,   138,   140,   142,   144,
     146,   150,   154,   156,   160,   165,   166,   170,   174,   176,
     179,   183,   189,   194,   198,   203,   207,   213,   218,   219,
     222,   225,   227,   234,   236,   240,   244,   248,   252,   256,
     258,   264,   268,   274,   278,   279,   282,   290,   296,   303,
     308,   315,   320,   323,   325,   327,   335,   346,   356,   363,
     366,   368,   369,   372,   373,   376,   378,   381,   383,   385,
     387,   392,   395,   398,   401,   406,   408,   412,   414,   416,
     418,   420,   422,   426,   429,   431,   433,   435,   437,   441,
     444,   450,   454,   458,   461,   462,   466,   468,   472,   477,
     481,   486,   488,   490,   492,   494,   496,   498,   500,   502,
     504,   506,   511,   516,   519,   523,   526,   529,   534,   538,
     542,   544,   551,   556,   563,   568,   572,   575,   576,   580,
     582,   584,   586,   589,   594,   601,   607,   610,   614,   621,
     626,   632,   637,   641,   643,   648,   652,   654,   656,   658,
     660,   662,   664,   666,   668,   672,   675,   677,   681,   683,
     687,   691,   695,   697,   701,   705,   707,   711,   715,   717,
     721,   723,   727,   729,   733,   735,   739,   743,   747,   751,
     755,   759,   761,   764,   766,   770,   772,   776,   778,   780
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     100,     0,    -1,   101,    -1,   107,    -1,    64,   102,    76,
     104,    -1,     1,    76,    -1,   103,    47,    -1,    -1,   103,
      47,    23,    -1,   110,   115,   132,   139,   105,    -1,     1,
      76,    -1,    77,   106,    78,    -1,    77,     1,    78,    -1,
     106,   167,    -1,   167,    -1,    57,   102,    76,   108,   109,
      -1,     7,   110,   115,   132,   139,   141,    -1,    15,   115,
     132,   139,   156,    -1,    -1,    11,   111,    76,    -1,   102,
     112,   113,    -1,   111,    79,   102,   112,   113,    -1,    -1,
      33,    59,    -1,    -1,    80,   114,    81,    -1,    80,     1,
      81,    -1,   114,    79,   102,    -1,   102,    -1,    -1,    74,
     116,    -1,   116,   117,    -1,   117,    -1,   102,    82,   118,
      76,    -1,   102,    82,   119,    -1,   102,    -1,   120,    -1,
     121,    -1,   122,    -1,   124,    -1,   128,    -1,   129,    -1,
     130,    -1,   142,    -1,    34,    -1,    66,    -1,     6,    -1,
      10,    -1,     8,    -1,    39,    -1,    80,   123,    81,    -1,
      80,     1,    81,    -1,   186,    -1,   123,    79,   186,    -1,
      51,   125,    28,   118,    -1,    -1,    83,   126,    84,    -1,
     126,    79,   127,    -1,   127,    -1,     1,    76,    -1,   200,
      30,   200,    -1,   200,    30,   200,    30,   200,    -1,    51,
       5,    28,   118,    -1,    13,    28,   118,    -1,    67,    77,
     131,    78,    -1,    77,     1,    78,    -1,   131,   114,    85,
     118,    76,    -1,   114,    85,   118,    76,    -1,    -1,    14,
     133,    -1,   133,   134,    -1,   134,    -1,   102,    85,   118,
      82,   135,    76,    -1,   200,    -1,    83,   136,    84,    -1,
      83,   137,    84,    -1,    83,   138,    84,    -1,    83,     1,
      84,    -1,   136,    79,   135,    -1,   135,    -1,   137,    79,
      17,    42,   135,    -1,    17,    42,   135,    -1,   138,    79,
     102,    42,   135,    -1,   102,    42,   135,    -1,    -1,    75,
     140,    -1,   140,   114,    85,   118,    82,   135,    76,    -1,
     140,   114,    85,   118,    76,    -1,   114,    85,   118,    82,
     135,    76,    -1,   114,    85,   118,    76,    -1,   114,    85,
       1,    82,   135,    76,    -1,   114,    85,     1,    76,    -1,
      48,   158,    -1,   143,    -1,   144,    -1,    12,    40,    77,
     145,   146,   147,    78,    -1,    12,    40,    80,   114,    81,
      77,   145,   146,   147,    78,    -1,    12,    80,   114,    81,
      77,   145,   146,   147,    78,    -1,    12,    77,   145,   146,
     147,    78,    -1,    65,   148,    -1,   148,    -1,    -1,    71,
     148,    -1,    -1,    61,   148,    -1,   149,    -1,   148,   149,
      -1,   150,    -1,   151,    -1,   152,    -1,   157,    76,   153,
      76,    -1,   157,    76,    -1,    74,   117,    -1,    14,   134,
      -1,   114,    85,   118,    76,    -1,   154,    -1,   154,    79,
     155,    -1,   155,    -1,    45,    -1,     3,    -1,    37,    -1,
      40,    -1,   156,   157,   166,    -1,   157,   166,    -1,   159,
      -1,   160,    -1,   161,    -1,   162,    -1,   158,   157,    76,
      -1,   157,    76,    -1,    43,   102,   163,    42,   118,    -1,
      63,   102,   163,    -1,    21,   102,   163,    -1,    27,   102,
      -1,    -1,    80,   164,    81,    -1,   165,    -1,   164,    76,
     165,    -1,   114,    85,   118,    53,    -1,   114,    85,   118,
      -1,   115,   132,   139,   105,    -1,    76,    -1,   168,    -1,
     169,    -1,   170,    -1,   171,    -1,   174,    -1,   175,    -1,
     180,    -1,   182,    -1,   184,    -1,   185,    82,   200,    76,
      -1,    70,    72,   200,    76,    -1,    70,    76,    -1,    29,
     200,    76,    -1,    29,    76,    -1,   172,    76,    -1,   102,
      80,   173,    81,    -1,   102,    80,    81,    -1,   173,    79,
     200,    -1,   200,    -1,    72,   200,    35,   105,    73,   105,
      -1,    72,   200,    35,   105,    -1,    33,     9,   200,    69,
     176,    76,    -1,   176,   177,    42,   105,    -1,   177,    42,
     105,    -1,   178,   179,    -1,    -1,   178,   179,    86,    -1,
     200,    -1,   127,    -1,    55,    -1,   181,   105,    -1,    58,
     102,    33,   185,    -1,    68,    32,   102,    33,   127,    24,
      -1,    68,    32,   102,    33,   127,    -1,    52,   200,    -1,
      68,    46,   200,    -1,    62,   105,    38,   183,    41,   105,
      -1,    62,   105,    38,   183,    -1,   183,    22,   102,    31,
     105,    -1,    22,   102,    31,   105,    -1,    49,   102,    76,
      -1,   102,    -1,   185,    83,   173,    84,    -1,   185,    87,
      47,    -1,    19,    -1,    20,    -1,    17,    -1,    18,    -1,
      16,    -1,   186,    -1,   185,    -1,   172,    -1,    80,   200,
      81,    -1,    88,   187,    -1,   187,    -1,   188,    60,   189,
      -1,   188,    -1,   190,    89,   189,    -1,   190,    90,   189,
      -1,   190,    91,   189,    -1,   189,    -1,   191,    92,   190,
      -1,   191,    88,   190,    -1,   190,    -1,   192,    26,   191,
      -1,   192,    25,   191,    -1,   191,    -1,   193,    93,   192,
      -1,   192,    -1,   194,    94,   193,    -1,   193,    -1,   195,
      95,   194,    -1,   194,    -1,   196,    96,   195,    -1,   196,
      97,   195,    -1,   196,    50,   195,    -1,   196,    44,   195,
      -1,   196,    36,   195,    -1,   196,    54,   195,    -1,   195,
      -1,    98,   197,    -1,   196,    -1,   197,     4,   198,    -1,
     197,    -1,   198,    56,   199,    -1,   198,    -1,   199,    -1,
       1,    76,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    26,    26,    27,    30,    31,    34,    37,    38,    42,
      43,    46,    47,    50,    51,    54,    57,    60,    62,    63,
      66,    67,    70,    71,    74,    75,    76,    79,    80,    88,
      89,    92,    93,    96,    97,   100,   101,   102,   103,   104,
     105,   106,   109,   110,   113,   114,   115,   116,   117,   120,
     123,   124,   127,   128,   131,   134,   135,   138,   139,   140,
     143,   144,   147,   150,   153,   154,   157,   158,   166,   166,
     169,   170,   173,   176,   177,   178,   179,   180,   183,   184,
     187,   188,   191,   192,   195,   196,   199,   200,   201,   202,
     203,   204,   208,   212,   213,   216,   217,   221,   222,   226,
     227,   230,   231,   234,   235,   238,   239,   242,   243,   244,
     245,   246,   249,   252,   255,   258,   261,   262,   265,   266,
     267,   268,   277,   278,   281,   282,   283,   284,   287,   288,
     291,   294,   297,   300,   303,   304,   307,   308,   311,   312,
     315,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   337,   339,   340,   343,   344,   347,   350,   351,   354,
     355,   358,   359,   362,   365,   366,   371,   374,   375,   378,
     379,   380,   383,   386,   387,   388,   389,   390,   393,   394,
     397,   398,   401,   409,   410,   411,   414,   415,   416,   417,
     418,   421,   422,   423,   424,   427,   428,   431,   432,   435,
     436,   437,   438,   441,   442,   443,   446,   447,   448,   452,
     453,   456,   457,   460,   461,   464,   465,   466,   467,   468,
     469,   470,   473,   474,   477,   478,   482,   483,   487,   488
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
  "'='", "'['", "']'", "':'", "'|'", "'.'", "'-'", "'*'", "'/'", "'%'",
  "'+'", "'&'", "'^'", "'@'", "'<'", "'>'", "'!'", "$accept", "programa",
  "definicion_programa", "nombre", "id_op", "bloque_programa",
  "bloque_instrucciones", "instruccion_unoomas", "definicion_paquete",
  "seccion_cabecera", "seccion_cuerpo", "declaracion_cargas",
  "declaracion_carga", "en_path_op", "nombres_op", "nombres_comas",
  "declaracion_tipos", "declaracion_tipo_unoomas", "declaracion_tipo",
  "tipo_no_estructurado_o_nombre_tipo", "tipo_estructurado",
  "tipo_escalar", "tipo_fichero", "tipo_enumerado",
  "expresion_constante_unoomas", "tipo_lista", "rango_lista_op",
  "rango_lista", "rango", "tipo_lista_asociativa", "tipo_conjunto",
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
  "cabecera_subprograma_unoomas_ptocoma", "cabecera_funcion",
  "cabecera_procedimiento", "cabecera_constructor", "cabecera_destructor",
  "declaracion_parametros", "lista_parametros_formales",
  "parametros_formales", "bloque_subprograma", "instruccion",
  "instruccion_asignacion", "instruccion_salir", "instruccion_devolver",
  "instruccion_llamada", "llamada_subprograma", "expresion_comas",
  "instruccion_si", "instruccion_casos", "caso", "entradas", "entrada_op",
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
      40,    41,    61,    91,    93,    58,   124,    46,    45,    42,
      47,    37,    43,    38,    94,    64,    60,    62,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    99,   100,   100,   101,   101,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   108,   109,   110,   110,
     111,   111,   112,   112,   113,   113,   113,   114,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   118,   118,   118,
     118,   118,   119,   119,   120,   120,   120,   120,   120,   121,
     122,   122,   123,   123,   124,   125,   125,   126,   126,   126,
     127,   127,   128,   129,   130,   130,   131,   131,   132,   132,
     133,   133,   134,   135,   135,   135,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   140,   140,
     140,   140,   141,   142,   142,   143,   143,   144,   144,   145,
     145,   146,   146,   147,   147,   148,   148,   149,   149,   149,
     149,   149,   150,   151,   152,   153,   154,   154,   155,   155,
     155,   155,   156,   156,   157,   157,   157,   157,   158,   158,
     159,   160,   161,   162,   163,   163,   164,   164,   165,   165,
     166,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   168,   169,   169,   170,   170,   171,   172,   172,   173,
     173,   174,   174,   175,   176,   176,   177,   178,   178,   179,
     179,   179,   180,   181,   181,   181,   181,   181,   182,   182,
     183,   183,   184,   185,   185,   185,   186,   186,   186,   186,
     186,   187,   187,   187,   187,   188,   188,   189,   189,   190,
     190,   190,   190,   191,   191,   191,   192,   192,   192,   193,
     193,   194,   194,   195,   195,   196,   196,   196,   196,   196,
     196,   196,   197,   197,   198,   198,   199,   199,   200,   200
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     2,     0,     3,     5,
       2,     3,     3,     2,     1,     5,     6,     5,     0,     3,
       3,     5,     0,     2,     0,     3,     3,     3,     1,     0,
       2,     2,     1,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     4,     0,     3,     3,     1,     2,
       3,     5,     4,     3,     4,     3,     5,     4,     0,     2,
       2,     1,     6,     1,     3,     3,     3,     3,     3,     1,
       5,     3,     5,     3,     0,     2,     7,     5,     6,     4,
       6,     4,     2,     1,     1,     7,    10,     9,     6,     2,
       1,     0,     2,     0,     2,     1,     2,     1,     1,     1,
       4,     2,     2,     2,     4,     1,     3,     1,     1,     1,
       1,     1,     3,     2,     1,     1,     1,     1,     3,     2,
       5,     3,     3,     2,     0,     3,     1,     3,     4,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     2,     3,     2,     2,     4,     3,     3,
       1,     6,     4,     6,     4,     3,     2,     0,     3,     1,
       1,     1,     2,     4,     6,     5,     2,     3,     6,     4,
       5,     4,     3,     1,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     1,     3,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     1,     2,     1,     3,     1,     3,     1,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     7,     7,     0,     2,     3,     5,     0,     0,
       0,     1,     0,     6,     0,    18,     0,     8,     0,     7,
       4,    29,    29,    29,    15,    10,    22,     0,     7,    68,
      68,    68,     0,    24,    19,     7,     0,    30,    32,     7,
      84,    84,    84,    23,     0,    20,    22,     7,    31,     0,
      69,    71,     7,     0,     0,     0,     0,    28,     0,    24,
      46,    48,    47,     0,     0,    44,    49,    55,    45,     0,
       0,     0,    35,     0,    34,    36,    37,    38,    39,    40,
      41,    42,    43,    93,    94,     7,    70,     0,    85,     0,
       9,     0,    16,     7,     7,     7,     7,    17,    29,   124,
     125,   126,   127,    26,     7,    25,    21,     0,     7,     7,
       7,     0,     0,     0,     7,     0,     0,   190,   188,   189,
     186,   187,     0,    52,    33,     0,     0,     0,     0,     0,
       0,     7,     0,     7,     0,     0,     0,     0,   141,   183,
       7,    14,   142,   143,   144,   145,     0,   146,   147,   148,
       0,   149,   150,     0,     0,    92,   134,   133,   134,   134,
      29,    68,   123,    27,     7,     7,     7,     7,     7,     0,
     101,   100,   105,   107,   108,   109,     0,     0,    63,     7,
       0,     0,     7,     7,     0,    58,   193,   192,   191,   196,
     198,   202,   205,   208,   210,   212,   214,   221,   223,   225,
     227,   228,     0,     7,     0,     7,    65,    51,     0,    50,
       0,     0,     0,     7,    12,     0,   155,     0,     0,     0,
     176,     0,     0,     7,     0,     0,   153,     0,     0,    11,
      13,   156,   172,     0,     0,     0,   129,     0,     7,   132,
       0,   131,   122,    84,   101,     0,   113,    99,   112,     7,
       7,   103,   106,   111,     0,    62,    59,     0,   195,   222,
       0,    56,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     0,    54,     7,    64,     0,    53,     0,     0,    73,
      91,     0,    89,     0,     0,   229,   154,     0,   182,     7,
       0,     0,   177,     0,     0,   158,     0,   160,     0,     0,
     185,   128,     0,     0,   136,     7,     0,   103,     0,     0,
     102,     7,     0,   119,   120,   121,   118,     0,   115,   117,
       7,   194,    57,   197,   199,   200,   201,   204,   203,   207,
     206,   209,   211,   213,   219,   218,   217,   220,   215,   216,
     224,   226,    60,     0,     7,     0,   188,   183,    79,     0,
       0,     0,    72,     0,     0,    87,     0,   167,   183,   173,
       7,   179,     0,   152,   162,     0,   157,   151,   184,     7,
       7,   135,   130,   140,     0,     7,   114,     7,    98,   110,
       0,   101,     0,    67,     0,    77,     0,     0,     0,    74,
       0,    75,     7,    76,    90,    88,     0,   167,     0,     0,
       0,     7,     0,   175,     0,   159,   139,   137,    95,   101,
     116,   103,    61,    66,    81,    83,    78,     0,     0,    86,
     163,     0,     0,   171,   170,   166,   169,     0,     0,   178,
     174,   161,   138,   103,     0,     0,     0,     0,   165,   168,
     181,     0,     0,    97,    80,    82,   164,   180,    96
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,   139,     9,    20,    90,   140,     6,    16,
      24,    21,    27,    33,    45,   169,   161,    37,    38,    73,
      74,    75,    76,    77,   122,    78,   113,   184,   185,    79,
      80,    81,   205,    40,    50,    51,   288,   359,   360,   361,
      53,    88,    92,    82,    83,    84,   170,   251,   322,   171,
     172,   173,   174,   175,   327,   328,   329,    97,   176,   155,
      99,   100,   101,   102,   239,   313,   314,   162,   141,   142,
     143,   144,   145,   186,   306,   147,   148,   407,   408,   409,
     435,   149,   150,   151,   371,   152,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   289
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -302
static const yytype_int16 yypact[] =
{
      33,   -35,  -302,  -302,   136,  -302,  -302,  -302,    81,    27,
     100,  -302,    91,   157,   116,   188,   189,  -302,   144,  -302,
    -302,   154,   154,   154,  -302,  -302,   199,    61,  -302,   243,
     243,   243,   176,   179,  -302,  -302,   155,   227,  -302,  -302,
     208,   208,   208,  -302,    17,  -302,   199,   221,  -302,   195,
     227,  -302,  -302,   209,   252,    98,   233,  -302,   198,   179,
    -302,  -302,  -302,    -9,   299,  -302,  -302,    22,  -302,   264,
     319,   495,  -302,   270,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,   265,  -302,   -19,   227,   418,
    -302,    98,  -302,  -302,  -302,  -302,  -302,    98,   154,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,  -302,   135,   308,  -302,
     265,   330,   386,   331,  -302,   282,   281,  -302,  -302,  -302,
    -302,  -302,   210,  -302,  -302,   283,    48,   -12,   285,   178,
     358,  -302,   395,  -302,   209,     6,    12,   395,  -302,   289,
     419,  -302,  -302,  -302,  -302,  -302,   298,  -302,  -302,  -302,
     209,  -302,  -302,    73,   303,    98,   309,  -302,   309,   309,
     154,   243,  -302,  -302,   308,  -302,  -302,   458,  -302,     0,
     317,   323,  -302,  -302,  -302,  -302,   325,   251,  -302,   265,
     332,   395,   223,   420,    -7,  -302,  -302,   -44,  -302,  -302,
     339,  -302,   205,    21,   280,   314,   316,   321,   156,   414,
     365,  -302,   393,   265,    69,   346,  -302,  -302,   506,  -302,
     292,    99,   126,   265,  -302,   355,  -302,   356,   395,   367,
    -302,   401,   403,  -302,   395,   395,  -302,   409,   245,  -302,
    -302,  -302,  -302,   395,   395,   398,  -302,   370,  -302,  -302,
     407,  -302,  -302,   208,   317,   255,  -302,   323,  -302,   265,
     458,   389,  -302,   107,   376,  -302,   424,   380,  -302,  -302,
     395,  -302,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   420,
     420,   395,  -302,   265,  -302,   145,  -302,   337,   388,  -302,
    -302,   292,  -302,   292,   162,  -302,  -302,   400,  -302,  -302,
     456,   429,  -302,   406,   209,  -302,   261,  -302,   416,    32,
    -302,  -302,   171,    -6,  -302,   265,   209,   389,   421,   423,
     323,   458,   431,  -302,  -302,  -302,  -302,   434,   437,  -302,
     308,  -302,  -302,  -302,  -302,  -302,  -302,   205,   205,    21,
      21,   280,   314,   316,   321,   321,   321,   321,   321,   321,
    -302,  -302,   487,   443,   265,   -40,   485,   -17,  -302,    74,
      89,   105,  -302,   453,   454,  -302,   292,  -302,  -302,   -44,
    -302,    10,   395,  -302,   460,   395,  -302,  -302,  -302,   265,
    -302,  -302,  -302,  -302,   457,   308,  -302,    26,  -302,  -302,
     107,   317,   395,  -302,   455,  -302,   292,   292,   292,  -302,
     517,  -302,  -302,  -302,  -302,  -302,   461,   462,   494,   375,
     508,  -302,   209,   516,   209,  -302,   488,  -302,  -302,   317,
    -302,   389,  -302,  -302,  -302,  -302,  -302,   500,   501,  -302,
    -302,   502,   209,  -302,  -302,   459,   393,   209,   515,  -302,
    -302,  -302,  -302,   389,   469,   292,   292,   209,  -302,  -302,
    -302,   209,   470,  -302,  -302,  -302,  -302,  -302,  -302
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -302,  -302,  -302,    -2,  -302,  -302,  -130,  -302,  -302,  -302,
    -302,   534,  -302,   504,   492,   -33,   246,  -302,   -25,   -64,
    -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -250,  -302,
    -302,  -302,  -302,   -16,  -302,   -28,  -263,  -302,  -302,  -302,
     -34,  -302,  -302,  -302,  -302,  -302,  -159,  -241,  -301,  -154,
    -169,  -302,  -302,  -302,  -302,  -302,   163,  -302,   -32,  -302,
    -302,  -302,  -302,  -302,    29,  -302,   172,   394,   415,  -302,
    -302,  -302,  -302,   -60,   322,  -302,  -302,  -302,   150,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,   -83,   -62,   377,  -302,
     164,    57,    80,   288,   290,   291,   229,  -302,   379,   286,
     284,   -11
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -230
static const yytype_int16 yytable[] =
{
       8,    10,   252,   317,   222,   244,   153,    54,    55,   123,
     332,    58,    48,   247,    41,    42,   384,    26,    56,    87,
     232,   125,    86,    98,   358,   397,    36,   111,   363,   146,
     364,   107,   411,    46,     1,    36,   295,    49,   223,   234,
     166,     7,    57,   235,   395,    72,   178,    93,    49,   211,
      57,   412,   224,    94,    60,   127,    61,   153,    62,   154,
     104,    64,   212,   228,    -7,   160,   126,   104,   108,    95,
     380,   109,   260,   213,    13,   381,   177,   261,   252,   104,
     146,   204,    65,    72,   225,   249,    57,    66,   226,    96,
       2,   156,   157,   158,   159,    -7,   320,     3,    15,    67,
     168,   202,   163,   406,  -104,   112,    57,    57,    72,   266,
     323,   375,    57,   267,    68,   255,   378,    18,   217,    93,
     444,   220,   413,   237,    72,    94,   227,    19,    71,   219,
     -18,   221,   245,   424,   425,   426,    11,    34,   246,   282,
      35,    95,   452,   248,   324,   243,   286,   325,   104,   294,
     421,   252,   326,   398,   283,   233,   234,    12,   399,   434,
     235,    96,    57,    57,    49,    57,    36,   387,   400,    57,
     257,   391,   285,   401,   374,   290,    14,    72,   443,   215,
      17,   291,   454,   455,   402,   319,   383,   240,   241,   403,
     -18,   -18,   273,   -18,   117,   118,   119,   120,   121,    19,
     274,    72,   292,    57,    23,   312,   275,   297,   293,   316,
     276,    72,   164,   302,   303,   165,   369,   307,   252,   353,
      25,   301,   308,   307,   104,    -7,   419,    60,    28,    61,
     354,    62,    32,    63,    64,    43,    57,    47,   365,   117,
     118,   119,   120,   121,   366,    57,   215,    72,    57,   202,
     104,   382,   277,   278,   216,    65,   379,    39,   181,    44,
      66,   117,   118,   119,   120,   121,   182,    29,    30,    31,
     352,    60,    67,    61,    -7,    62,   183,   104,    64,   105,
      85,    72,   439,    52,   441,   357,    89,    68,    69,   208,
     394,   209,    -7,   215,   263,   264,   265,   368,    70,    65,
      91,    71,   448,   181,    66,   268,   269,   450,   117,   118,
     119,   120,   121,    72,   103,   416,    67,   456,    57,    57,
     115,   457,   166,   337,   338,   181,   305,   110,    57,    93,
     104,    68,   254,   182,   104,    94,   318,   166,   355,    -7,
     375,   114,   376,   183,    93,    71,   124,   312,   339,   340,
      94,    95,    72,   117,   356,   119,   120,   121,   179,   203,
     206,   202,   207,   214,   415,   210,    95,   218,   410,   228,
      -7,    96,   181,   167,   231,   287,   215,    72,    57,   236,
     182,   422,   168,    57,    -7,    57,    96,   180,   250,   238,
     183,   117,   118,   119,   120,   121,   215,   168,   436,   262,
     428,   253,   117,   118,   119,   120,   121,   270,   256,   438,
     271,   117,   118,   119,   120,   121,   272,   181,   279,   128,
     287,   280,    -7,   281,   284,   182,   333,   334,   335,   336,
     433,   295,   296,    -7,   299,   183,   117,   118,   119,   120,
     121,   300,    -7,   298,   304,   310,   311,   129,   129,   315,
     321,   130,   130,   330,  -229,   181,   117,   118,   119,   120,
     121,   331,   372,   182,   362,    -7,   181,   131,   131,   367,
     132,   132,   166,   183,   182,   181,   133,   133,   370,    93,
     134,   134,   373,   182,   183,    94,   135,   135,   136,   136,
     137,   137,   377,   183,   138,   138,   116,   229,   385,   386,
     181,    95,   344,   345,   346,   347,   348,   349,   182,   388,
     389,   117,   118,   119,   120,   121,   390,   392,   183,   393,
     181,    96,   117,   118,   119,   120,   121,   396,   182,   404,
     405,   423,   168,   414,   427,   418,   432,   429,   430,   437,
     440,   442,   445,   446,   447,   449,   451,   453,   458,    22,
      59,   106,   417,   420,   242,   230,   309,   431,   341,   258,
       0,   342,   259,   343,   351,   350
};

static const yytype_int16 yycheck[] =
{
       2,     3,   171,   244,   134,   164,    89,    41,    42,    71,
     260,    44,    37,   167,    30,    31,   317,    19,     1,    52,
     150,    85,    50,    55,   287,    42,    28,     5,   291,    89,
     293,    40,    22,    35,     1,    37,    76,    39,    32,    83,
      14,    76,    44,    87,    84,    47,   110,    21,    50,     1,
      52,    41,    46,    27,     6,    88,     8,   140,    10,    91,
      79,    13,   126,    80,    47,    97,    85,    79,    77,    43,
      76,    80,    79,    85,    47,    81,   109,    84,   247,    79,
     140,   114,    34,    85,    72,    85,    88,    39,    76,    63,
      57,    93,    94,    95,    96,    47,   250,    64,     7,    51,
      74,   112,   104,   366,    78,    83,   108,   109,   110,    88,
       3,    79,   114,    92,    66,   179,    84,     1,   129,    21,
     421,   132,   372,   155,   126,    27,   137,    11,    80,   131,
      14,   133,   165,   396,   397,   398,     0,    76,   166,   203,
      79,    43,   443,   168,    37,   161,   208,    40,    79,   213,
     391,   320,    45,    79,    85,    82,    83,    76,    84,   409,
      87,    63,   164,   165,   166,   167,   168,   321,    79,   171,
     181,   330,   205,    84,   304,    76,    76,   179,   419,     1,
      23,    82,   445,   446,    79,   249,   316,   158,   159,    84,
      74,    75,    36,    77,    16,    17,    18,    19,    20,    11,
      44,   203,    76,   205,    15,   238,    50,   218,    82,   243,
      54,   213,    77,   224,   225,    80,   299,   228,   387,   283,
      76,   223,   233,   234,    79,    47,   385,     6,    74,     8,
      85,    10,    33,    12,    13,    59,   238,    82,    76,    16,
      17,    18,    19,    20,    82,   247,     1,   249,   250,   260,
      79,   315,    96,    97,    76,    34,    85,    14,    80,    80,
      39,    16,    17,    18,    19,    20,    88,    21,    22,    23,
     281,     6,    51,     8,    47,    10,    98,    79,    13,    81,
      85,   283,   412,    75,   414,   287,    77,    66,    67,    79,
     354,    81,    47,     1,    89,    90,    91,   299,    77,    34,
      48,    80,   432,    80,    39,    25,    26,   437,    16,    17,
      18,    19,    20,   315,    81,   379,    51,   447,   320,   321,
       1,   451,    14,   266,   267,    80,    81,    28,   330,    21,
      79,    66,    81,    88,    79,    27,    81,    14,     1,    47,
      79,    77,    81,    98,    21,    80,    76,   380,   268,   269,
      27,    43,   354,    16,    17,    18,    19,    20,    28,    28,
      78,   372,    81,    78,   375,    82,    43,     9,   370,    80,
      47,    63,    80,    65,    76,    83,     1,   379,   380,    76,
      88,   392,    74,   385,    47,   387,    63,     1,    71,    80,
      98,    16,    17,    18,    19,    20,     1,    74,   409,    60,
     402,    76,    16,    17,    18,    19,    20,    93,    76,   411,
      94,    16,    17,    18,    19,    20,    95,    80,     4,     1,
      83,    56,    47,    30,    78,    88,   262,   263,   264,   265,
      55,    76,    76,    47,    33,    98,    16,    17,    18,    19,
      20,    38,    47,    76,    35,    47,    76,    29,    29,    42,
      61,    33,    33,    77,    30,    80,    16,    17,    18,    19,
      20,    81,    33,    88,    76,    47,    80,    49,    49,    69,
      52,    52,    14,    98,    88,    80,    58,    58,    22,    21,
      62,    62,    76,    88,    98,    27,    68,    68,    70,    70,
      72,    72,    76,    98,    76,    76,     1,    78,    77,    76,
      80,    43,   273,   274,   275,   276,   277,   278,    88,    78,
      76,    16,    17,    18,    19,    20,    79,    30,    98,    76,
      80,    63,    16,    17,    18,    19,    20,    42,    88,    76,
      76,    76,    74,    73,    17,    78,    42,    76,    76,    31,
      24,    53,    42,    42,    42,    86,    31,    78,    78,    15,
      46,    59,   380,   390,   160,   140,   234,   407,   270,   182,
      -1,   271,   183,   272,   280,   279
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    57,    64,   100,   101,   107,    76,   102,   103,
     102,     0,    76,    47,    76,     7,   108,    23,     1,    11,
     104,   110,   110,    15,   109,    76,   102,   111,    74,   115,
     115,   115,    33,   112,    76,    79,   102,   116,   117,    14,
     132,   132,   132,    59,    80,   113,   102,    82,   117,   102,
     133,   134,    75,   139,   139,   139,     1,   102,   114,   112,
       6,     8,    10,    12,    13,    34,    39,    51,    66,    67,
      77,    80,   102,   118,   119,   120,   121,   122,   124,   128,
     129,   130,   142,   143,   144,    85,   134,   114,   140,    77,
     105,    48,   141,    21,    27,    43,    63,   156,   157,   159,
     160,   161,   162,    81,    79,    81,   113,    40,    77,    80,
      28,     5,    83,   125,    77,     1,     1,    16,    17,    18,
      19,    20,   123,   186,    76,   118,    85,   114,     1,    29,
      33,    49,    52,    58,    62,    68,    70,    72,    76,   102,
     106,   167,   168,   169,   170,   171,   172,   174,   175,   180,
     181,   182,   184,   185,   157,   158,   102,   102,   102,   102,
     157,   115,   166,   102,    77,    80,    14,    65,    74,   114,
     145,   148,   149,   150,   151,   152,   157,   114,   118,    28,
       1,    80,    88,    98,   126,   127,   172,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,    28,   114,   131,    78,    81,    79,    81,
      82,     1,   118,    85,    78,     1,    76,   200,     9,   102,
     200,   102,   105,    32,    46,    72,    76,   200,    80,    78,
     167,    76,   105,    82,    83,    87,    76,   157,    80,   163,
     163,   163,   166,   132,   145,   114,   134,   148,   117,    85,
      71,   146,   149,    76,    81,   118,    76,   200,   187,   197,
      79,    84,    60,    89,    90,    91,    88,    92,    25,    26,
      93,    94,    95,    36,    44,    50,    54,    96,    97,     4,
      56,    30,   118,    85,    78,   114,   186,    83,   135,   200,
      76,    82,    76,    82,   118,    76,    76,   200,    76,    33,
      38,   102,   200,   200,    35,    81,   173,   200,   200,   173,
      47,    76,   114,   164,   165,    42,   139,   146,    81,   118,
     148,    61,   147,     3,    37,    40,    45,   153,   154,   155,
      77,    81,   127,   189,   189,   189,   189,   190,   190,   191,
     191,   192,   193,   194,   195,   195,   195,   195,   195,   195,
     198,   199,   200,   118,    85,     1,    17,   102,   135,   136,
     137,   138,    76,   135,   135,    76,    82,    69,   102,   185,
      22,   183,    33,    76,   105,    79,    81,    76,    84,    85,
      76,    81,   118,   105,   147,    77,    76,   148,    78,    76,
      79,   145,    30,    76,   118,    84,    42,    42,    79,    84,
      79,    84,    79,    84,    76,    76,   135,   176,   177,   178,
     102,    22,    41,   127,    73,   200,   118,   165,    78,   145,
     155,   146,   200,    76,   135,   135,   135,    17,   102,    76,
      76,   177,    42,    55,   127,   179,   200,    31,   102,   105,
      24,   105,    53,   146,   147,    42,    42,    42,   105,    86,
     105,    31,   147,    78,   135,   135,   105,   105,    78
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
#line 26 ".\\moronico.y"
    {printf("\t programa -> def_programa \n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 27 ".\\moronico.y"
    {printf("\t programa -> def_paquete \n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 30 ".\\moronico.y"
    {printf("\t def_programa -> PROGRAMA ';' bloque_programa \n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 31 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 34 ".\\moronico.y"
    {printf("\t nombre -> id_op IDENTIFICADOR \n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 38 ".\\moronico.y"
    {printf("\t id_op -> id_op IDENTIFICADOR CUATRO_PTOS  \n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 42 ".\\moronico.y"
    {printf("\t bloque_programa -> declaracion_cargas declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 43 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 46 ".\\moronico.y"
    {printf("\t bloque_instrucciones -> '{' instruccion_unoomas '}'  \n");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 47 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 50 ".\\moronico.y"
    {printf("\t instruccion_unoomas -> instruccion_unoomas instruccion   \n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 51 ".\\moronico.y"
    {printf("\t instruccion_unoomas -> instruccion  \n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 54 ".\\moronico.y"
    {printf("\t definicion_paquete -> PAQUETE nombre ';' seccion_cabecera seccion_cuerpo  \n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 57 ".\\moronico.y"
    {printf("\t seccion_cabecera -> CABECERA declaracion_cargas declaracion_tipos declaracion_constantes declaracion_variables declaracion_interfaces \n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 60 ".\\moronico.y"
    {printf("\t seccion_cuerpo -> CUERPO declaracion_tipos declaracion_constantes declaracion_variables declaracion_subprograma  \n");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 63 ".\\moronico.y"
    {printf("\t declaracion_cargas -> CARGA declaracion_carga ';'  \n");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 66 ".\\moronico.y"
    {printf("\t declaracion_carga -> nombre en_path_op nombres_op  \n");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 67 ".\\moronico.y"
    {printf("\t declaracion_carga -> declaracion_carga_unoomas ',' nombre en_path_op nombres_op  \n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 71 ".\\moronico.y"
    {printf("\t en_path_op -> EN PATH  \n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 75 ".\\moronico.y"
    {printf("\t nombres_op -> '('  nombres_comas ')'  \n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 76 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 79 ".\\moronico.y"
    {printf("\t nombres_comas -> nombres_comas ',' nombre  \n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 80 ".\\moronico.y"
    {printf("\t nombres_comas -> nombre  \n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 89 ".\\moronico.y"
    {printf("\t declaracion_tipos -> TIPO declaracion_tipo_unoomas  \n");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 92 ".\\moronico.y"
    {printf("\t declaracion_tipo_unoomas -> declaracion_tipo_unoomas declaracion_tipo   \n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 93 ".\\moronico.y"
    {printf("\t declaracion_tipo_unoomas -> declaracion_tipo  \n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 96 ".\\moronico.y"
    {printf("\t declaracion_tipo -> nombre '=' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 97 ".\\moronico.y"
    {printf("\t declaracion_tipo -> nombre '=' tipo_estructurado  \n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 100 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> nombre  \n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 101 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_escalar  \n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 102 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_fichero  \n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 103 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_enumerado  \n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 104 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_lista  \n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 105 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_lista_asociativa  \n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 106 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_conjunto  \n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 109 ".\\moronico.y"
    {printf("\t tipo_estructurado -> tipo_registro  \n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 110 ".\\moronico.y"
    {printf("\t tipo_estructurado -> declaracion_clase  \n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 113 ".\\moronico.y"
    {printf("\t tipo_escalar -> ENTERO  \n");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 114 ".\\moronico.y"
    {printf("\t tipo_escalar -> REAL  \n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 115 ".\\moronico.y"
    {printf("\t tipo_escalar -> BOOLEANO  \n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 116 ".\\moronico.y"
    {printf("\t tipo_escalar -> CARACTER  \n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 117 ".\\moronico.y"
    {printf("\t tipo_escalar -> CADENA  \n");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 120 ".\\moronico.y"
    {printf("\t tipo_fichero -> FICHERO  \n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 123 ".\\moronico.y"
    {printf("\t tipo_enumerado -> '(' expresion_constante_unoomas ')'  \n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 124 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 127 ".\\moronico.y"
    {printf("\t expresion_constante_unoomas -> expresion_constante  \n");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 128 ".\\moronico.y"
    {printf("\t expresion_constante_unoomas -> expresion_constante_unoomas ',' expresion_constante  \n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 131 ".\\moronico.y"
    {printf("\t tipo_lista -> LISTA rango_lista_op DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 135 ".\\moronico.y"
    {printf("\t rango_lista_op -> '[' rango_lista ']'  \n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 138 ".\\moronico.y"
    {printf("\t rango_lista ->  rango_lista ',' rango  \n");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 139 ".\\moronico.y"
    {printf("\t rango_lista -> rango  \n");;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 140 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 143 ".\\moronico.y"
    {printf("\t rango -> expresion DOS_PTOS expresion   \n");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 144 ".\\moronico.y"
    {printf("\t rango -> expresion DOS_PTOS expresion DOS_PTOS expresion    \n");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 147 ".\\moronico.y"
    {printf("\t tipo_lista_asociativa -> LISTA ASOCIATIVA DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 150 ".\\moronico.y"
    {printf("\t tipo_conjunto -> CONJUNTO DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 153 ".\\moronico.y"
    {printf("\t tipo_registro -> REGISTRO '{' declaracion_campo '}'  \n");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 154 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 157 ".\\moronico.y"
    {printf("\t declaracion_campo -> declaracion_campo nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 158 ".\\moronico.y"
    {printf("\t declaracion_campo -> nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 166 ".\\moronico.y"
    {printf("\t declaracion_constantes -> CONSTANTE declaracion_constante_unoomas   \n");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 169 ".\\moronico.y"
    {printf("\t declaracion_constante_unoomas -> declaracion_constante_unoomas declaracion_constante  \n");;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 170 ".\\moronico.y"
    {printf("\t declaracion_constante_unoomas -> declaracion_constante  \n");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 173 ".\\moronico.y"
    {printf("\t declaracion_constante ->  nombre ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'  \n");;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 176 ".\\moronico.y"
    {printf("\t valor_constante -> expresion  \n");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 177 ".\\moronico.y"
    {printf("\t valor_constante -> '[' valor_constante_comas ']'  \n");;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 178 ".\\moronico.y"
    {printf("\t valor_constante -> '[' clave_valor ']'  \n");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 179 ".\\moronico.y"
    {printf("\t valor_constante -> '[' campo_valor ']'  \n");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 180 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 183 ".\\moronico.y"
    {printf("\t valor_constante_comas -> valor_constante_comas ',' valor_constante   \n");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 184 ".\\moronico.y"
    {printf("\t valor_constante_comas -> valor_constante  \n");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 187 ".\\moronico.y"
    {printf("\t clave_valor -> clave_valor ',' CTC_CADENA FLECHA_DOBLE valor_constante   \n");;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 188 ".\\moronico.y"
    {printf("\t clave_valor -> CTC_CADENA FLECHA_DOBLE valor_constante   \n");;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 191 ".\\moronico.y"
    {printf("\t campo_valor -> campo_valor ',' nombre FLECHA_DOBLE valor_constante  \n");;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 192 ".\\moronico.y"
    {printf("\t campo_valor -> nombre FLECHA_DOBLE valor_constante  \n");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 196 ".\\moronico.y"
    {printf("\t declaracion_variables -> VARIABLE declaracion_variable  \n");;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 199 ".\\moronico.y"
    {printf("\t declaracion_variable -> declaracion_variable nombres_comas ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'  \n");;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 200 ".\\moronico.y"
    {printf("\t declaracion_variable -> declaracion_variable nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 201 ".\\moronico.y"
    {printf("\t declaracion_variable -> nombres_comas ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'  \n");;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 202 ".\\moronico.y"
    {printf("\t declaracion_variable -> nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 203 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 204 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 208 ".\\moronico.y"
    {printf("\t declaracion_interfaces -> INTERFAZ cabecera_subprograma_unoomas_ptocoma  \n");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 212 ".\\moronico.y"
    {printf("\t declaracion_clase -> declaracion_clase_mod  \n");;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 213 ".\\moronico.y"
    {printf("\t declaracion_clase -> declaracion_clase_nomod  \n");;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 216 ".\\moronico.y"
    {printf("\t declaracion_clase_mod -> CLASE FINAL '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'  \n");;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 217 ".\\moronico.y"
    {printf("\t declaracion_clase_mod -> CLASE FINAL '(' nombres_comas ')' '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'  \n");;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 221 ".\\moronico.y"
    {printf("\t declaracion_clase_nomod ->  CLASE '(' nombres_comas ')' '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'  \n");;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 222 ".\\moronico.y"
    {printf("\t declaracion_clase_nomod ->  CLASE '(' nombres_comas ')' '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'  \n");;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 226 ".\\moronico.y"
    {printf("\t declaraciones_publicas -> PUBLICO declaracion_componente_unoomas  \n");;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 227 ".\\moronico.y"
    {printf("\t rango_ldeclaraciones_publicasista_op -> declaracion_componente_unoomas  \n");;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 231 ".\\moronico.y"
    {printf("\t declaraciones_semi -> SEMIPUBLICO declaracion_componente_unoomas  \n");;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 235 ".\\moronico.y"
    {printf("\t declaraciones_privadas -> PRIVADO declaracion_componente_unoomas  \n");;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 238 ".\\moronico.y"
    {printf("\t declaracion_componente_unoomas -> declaracion_componente  \n");;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 239 ".\\moronico.y"
    {printf("\t declaracion_componente_unoomas -> declaracion_componente_unoomas declaracion_componente   \n");;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 242 ".\\moronico.y"
    {printf("\t declaracion_componente -> declaracion_tipo_anidado  \n");;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 243 ".\\moronico.y"
    {printf("\t declaracion_componente -> declaracion_constante_anidada  \n");;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 244 ".\\moronico.y"
    {printf("\t declaracion_componente -> declaracion_atributos  \n");;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 245 ".\\moronico.y"
    {printf("\t declaracion_componente -> cabecera_subprograma ';' modificadores ';'  \n");;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 246 ".\\moronico.y"
    {printf("\t declaracion_componente -> cabecera_subprograma ';'  \n");;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 249 ".\\moronico.y"
    {printf("\t declaracion_tipo_anidado -> TIPO declaracion_tipo   \n");;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 252 ".\\moronico.y"
    {printf("\t declaracion_constante_anidada -> CONSTANTE declaracion_constante  \n");;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 255 ".\\moronico.y"
    {printf("\t declaracion_atributos -> nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 258 ".\\moronico.y"
    {printf("\t modificadores -> modificador_comas  \n");;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 261 ".\\moronico.y"
    {printf("\t modificador_comas -> modificador_comas ',' modificador  \n");;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 262 ".\\moronico.y"
    {printf("\t modificador_comas -> modificador  \n");;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 265 ".\\moronico.y"
    {printf("\t modificador -> GENERICO  \n");;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 266 ".\\moronico.y"
    {printf("\t modificador -> ABSTRACTO  \n");;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 267 ".\\moronico.y"
    {printf("\t modificador -> ESPECIFICO  \n");;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 268 ".\\moronico.y"
    {printf("\t modificador -> FINAL  \n");;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 277 ".\\moronico.y"
    {printf("\t declaracion_subprograma -> declaracion_subprograma cabecera_subprograma bloque_subprograma  \n");;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 278 ".\\moronico.y"
    {printf("\t declaracion_subprograma -> cabecera_subprograma bloque_subprograma  \n");;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 281 ".\\moronico.y"
    {printf("\t cabecera_subprograma -> cabecera_funcion  \n");;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 282 ".\\moronico.y"
    {printf("\t cabecera_subprograma -> cabecera_procedimiento  \n");;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 283 ".\\moronico.y"
    {printf("\t cabecera_subprograma -> cabecera_constructor  \n");;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 284 ".\\moronico.y"
    {printf("\t cabecera_subprograma -> cabecera_destructor  \n");;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 287 ".\\moronico.y"
    {printf("\t cabecera_subprograma_unoomas_ptocoma -> cabecera_subprograma_unoomas_ptocoma cabecera_subprograma ';'  \n");;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 288 ".\\moronico.y"
    {printf("\t cabecera_subprograma_unoomas_ptocoma -> cabecera_subprograma ';'  \n");;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 291 ".\\moronico.y"
    {printf("\t cabecera_funcion -> FUNCION nombre declaracion_parametros FLECHA_DOBLE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 294 ".\\moronico.y"
    {printf("\t cabecera_procedimiento -> PROCEDIMIENTO nombre declaracion_parametros  \n");;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 297 ".\\moronico.y"
    {printf("\t cabecera_constructor ->  CONSTRUCTOR nombre declaracion_parametros  \n");;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 300 ".\\moronico.y"
    {printf("\t cabecera_destructor -> DESTRUCTOR nombre  \n");;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 304 ".\\moronico.y"
    {printf("\t declaracion_parametros -> declarac'(' lista_parametros_formales ')'ion_constante  \n");;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 307 ".\\moronico.y"
    {printf("\t lista_parametros_formales -> parametros_formales  \n");;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 308 ".\\moronico.y"
    {printf("\t lista_parametros_formales -> lista_parametros_formales ';' parametros_formales  \n");;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 311 ".\\moronico.y"
    {printf("\t parametros_formales -> nombres_comas ':' tipo_no_estructurado_o_nombre_tipo MODIFICABLE  \n");;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 312 ".\\moronico.y"
    {printf("\t parametros_formales -> nombres_comas ':' tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 315 ".\\moronico.y"
    {printf("\t bloque_subprograma -> declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones  \n");;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 325 ".\\moronico.y"
    {printf("\t instruccion -> ';'  \n");;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 326 ".\\moronico.y"
    {printf("\t instruccion -> instruccion_asignacion  \n");;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 327 ".\\moronico.y"
    {printf("\t instruccion -> instruccion_salir  \n");;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 328 ".\\moronico.y"
    {printf("\t instruccion -> instruccion_devolver  \n");;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 329 ".\\moronico.y"
    {printf("\t instruccion -> instruccion_llamada  \n");;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 330 ".\\moronico.y"
    {printf("\t instruccion -> instruccion_si  \n");;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 331 ".\\moronico.y"
    {printf("\t instruccion -> instruccion_casos  \n");;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 332 ".\\moronico.y"
    {printf("\t instruccion -> instruccion_bucle  \n");;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 333 ".\\moronico.y"
    {printf("\t instruccion -> instruccion_probar_excepto  \n");;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 334 ".\\moronico.y"
    {printf("\t instruccion -> instruccion_lanzar  \n");;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 337 ".\\moronico.y"
    {printf("\t instruccion_asignacion -> objeto '=' expresion ';'  \n");;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 339 ".\\moronico.y"
    {printf("\t instruccion_salir -> SALIR SI expresion ';'  \n");;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 340 ".\\moronico.y"
    {printf("\t instruccion_salir -> SALIR ';'  \n");;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 343 ".\\moronico.y"
    {printf("\t instruccion_devolver -> DEVOLVER expresion ';'  \n");;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 344 ".\\moronico.y"
    {printf("\t instruccion_devolver -> DEVOLVER ';'  \n");;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 347 ".\\moronico.y"
    {printf("\t instruccion_llamada -> llamada_subprograma ';'  \n");;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 350 ".\\moronico.y"
    {printf("\t llamada_subprograma -> nombre '(' expresion_comas ')'  \n");;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 351 ".\\moronico.y"
    {printf("\t llamada_subprograma -> nombre '(' ')'  \n");;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 354 ".\\moronico.y"
    {printf("\t expresion_comas -> expresion_comas ',' expresion  \n");;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 355 ".\\moronico.y"
    {printf("\t expresion_comas -> expresion  \n");;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 358 ".\\moronico.y"
    {printf("\t instruccion_si ->  SI expresion ENTONCES bloque_instrucciones SINO bloque_instrucciones  \n");;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 359 ".\\moronico.y"
    {printf("\t instruccion_si ->  SI expresion ENTONCES bloque_instrucciones SINO bloque_instrucciones  \n");;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 362 ".\\moronico.y"
    {printf("\t instruccion_casos ->  EN  CASO expresion SEA caso ';'  \n");;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 365 ".\\moronico.y"
    {printf("\t caso -> caso entradas FLECHA_DOBLE bloque_instrucciones  \n");;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 366 ".\\moronico.y"
    {printf("\t caso -> entradas FLECHA_DOBLE bloque_instrucciones  \n");;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 371 ".\\moronico.y"
    {printf("\t entradas -> entrada_op entrada  \n");;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 375 ".\\moronico.y"
    {printf("\t entrada_op -> entrada_op entrada '|'  \n");;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 378 ".\\moronico.y"
    {printf("\t entrada -> expresion  \n");;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 379 ".\\moronico.y"
    {printf("\t entrada -> rango  \n");;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 380 ".\\moronico.y"
    {printf("\t entrada -> OTRO  \n");;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 383 ".\\moronico.y"
    {printf("\t instruccion_bucle -> clausula_iteracion bloque_instrucciones  \n");;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 386 ".\\moronico.y"
    {printf("\t clausula_iteracion -> PARA nombre EN objeto   \n");;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 387 ".\\moronico.y"
    {printf("\t clausula_iteracion -> REPITE ELEMENTO nombre EN rango DESCENDENTE  \n");;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 388 ".\\moronico.y"
    {printf("\t clausula_iteracion -> REPITE ELEMENTO nombre EN rango  \n");;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 389 ".\\moronico.y"
    {printf("\t clausula_iteracion -> MIENTRAS expresion  \n");;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 390 ".\\moronico.y"
    {printf("\t clausula_iteracion -> REPITE HASTA expresion  \n");;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 393 ".\\moronico.y"
    {printf("\t instruccion_probar_excepto -> PROBAR bloque_instrucciones EXCEPTO clausula_excepcion FINALMENTE bloque_instrucciones  \n");;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 394 ".\\moronico.y"
    {printf("\t instruccion_probar_excepto -> PROBAR bloque_instrucciones EXCEPTO clausula_excepcion  \n");;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 397 ".\\moronico.y"
    {printf("\t clausula_excepcion -> clausula_excepcion CUANDO nombre EJECUTA bloque_instrucciones  \n");;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 398 ".\\moronico.y"
    {printf("\t clausula_excepcion -> clausula_excepcion CUANDO nombre EJECUTA bloque_instrucciones  \n");;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 401 ".\\moronico.y"
    {printf("\t instruccion_lanzar -> LANZAR nombre ';'  \n");;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 409 ".\\moronico.y"
    {printf("\t objeto -> nombre  \n");;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 410 ".\\moronico.y"
    {printf("\t objeto -> objeto '[' expresion_comas ']'  \n");;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 411 ".\\moronico.y"
    {printf("\t objeto -> objeto '.' IDENTIFICADOR  \n");;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 414 ".\\moronico.y"
    {printf("\t expresion_constante -> CTC_ENTERA  \n");;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 415 ".\\moronico.y"
    {printf("\t expresion_constante -> CTC_REAL  \n");;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 416 ".\\moronico.y"
    {printf("\t expresion_constante -> CTC_CADENA  \n");;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 417 ".\\moronico.y"
    {printf("\t expresion_constante -> CTC_CARACTER  \n");;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 418 ".\\moronico.y"
    {printf("\t expresion_constante -> CTC_BOOLEANA  \n");;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 421 ".\\moronico.y"
    {printf("\t expresion_primaria -> expresion_constante  \n");;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 422 ".\\moronico.y"
    {printf("\t expresion_primaria -> objeto  \n");;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 423 ".\\moronico.y"
    {printf("\t expresion_primaria -> llamada_subprograma  \n");;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 424 ".\\moronico.y"
    {printf("\t expresion_primaria -> '(' expresion ')'  \n");;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 427 ".\\moronico.y"
    {printf("\t expresion_unitaria -> '-' expresion_primaria   \n");;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 428 ".\\moronico.y"
    {printf("\t expresion_unitaria -> expresion_primaria  \n");;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 431 ".\\moronico.y"
    {printf("\t expresion_potencia -> expresion_unitaria POTENCIA expresion_potencia  \n");;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 432 ".\\moronico.y"
    {printf("\t expresion_potencia -> expresion_unitaria  \n");;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 435 ".\\moronico.y"
    {printf("\t expresion_prod -> expresion_prod '*' expresion_potencia  \n");;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 436 ".\\moronico.y"
    {printf("\t expresion_prod -> expresion_prod '/' expresion_potencia  \n");;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 437 ".\\moronico.y"
    {printf("\t expresion_prod -> expresion_prod '%' expresion_potencia  \n");;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 438 ".\\moronico.y"
    {printf("\t expresion_prod -> expresion_potencia  \n");;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 441 ".\\moronico.y"
    {printf("\t expresion_sum -> expresion_sum '+' expresion_prod  \n");;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 442 ".\\moronico.y"
    {printf("\t expresion_sum -> expresion_sum '-' expresion_prod  \n");;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 443 ".\\moronico.y"
    {printf("\t expresion_sum -> expresion_prod  \n");;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 446 ".\\moronico.y"
    {printf("\t expresion_desplz -> expresion_desplz DESPI expresion_sum  \n");;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 447 ".\\moronico.y"
    {printf("\t expresion_desplz -> expresion_desplz DESPD expresion_sum  \n");;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 448 ".\\moronico.y"
    {printf("\t expresion_desplz -> expresion_sum  \n");;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 452 ".\\moronico.y"
    {printf("\t expresion_and_bin -> expresion_and_bin '&' expresion_desplz   \n");;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 453 ".\\moronico.y"
    {printf("\t expresion_and_bin -> expresion_desplz  \n");;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 456 ".\\moronico.y"
    {printf("\t expresion_or_bin -> expresion_or_bin '^' expresion_and_bin  \n");;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 457 ".\\moronico.y"
    {printf("\t expresion_or_bin -> expresion_and_bin  \n");;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 460 ".\\moronico.y"
    {printf("\t expresion_xor_bin -> expresion_xor_bin '@' expresion_or_bin  \n");;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 461 ".\\moronico.y"
    {printf("\t expresion_xor_bin -> expresion_or_bin  \n");;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 464 ".\\moronico.y"
    {printf("\t expresion_comparar -> expresion_comparar '<' expresion_xor_bin  \n");;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 465 ".\\moronico.y"
    {printf("\t expresion_comparar -> expresion_comparar '>' expresion_xor_bin  \n");;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 466 ".\\moronico.y"
    {printf("\t expresion_comparar -> expresion_comparar LEQ expresion_xor_bin  \n");;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 467 ".\\moronico.y"
    {printf("\t expresion_comparar -> expresion_comparar GEQ expresion_xor_bin  \n");;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 468 ".\\moronico.y"
    {printf("\t expresion_comparar -> expresion_comparar EQ expresion_xor_bin  \n");;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 469 ".\\moronico.y"
    {printf("\t expresion_comparar -> expresion_comparar NEQ expresion_xor_bin  \n");;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 470 ".\\moronico.y"
    {printf("\t expresion_comparar -> expresion_xor_bin  \n");;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 473 ".\\moronico.y"
    {printf("\t expresion_negacion -> '!' expresion_negacion  \n");;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 474 ".\\moronico.y"
    {printf("\t expresion_negacion -> expresion_comparar  \n");;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 477 ".\\moronico.y"
    {printf("\t expresion_and_logico -> expresion_negacion AND expresion_and_logico  \n");;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 478 ".\\moronico.y"
    {printf("\t expresion_and_logico -> expresion_negacion  \n");;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 482 ".\\moronico.y"
    {printf("\t expresion_or_logico -> expresion_and_logico OR expresion_or_logico  \n");;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 483 ".\\moronico.y"
    {printf("\t expresion_or_logico -> expresion_and_logico  \n");;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 487 ".\\moronico.y"
    {printf("\t expresion -> expresion_or_logico  \n");;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 488 ".\\moronico.y"
    {yyerrok; ;}
    break;



/* Line 1455 of yacc.c  */
#line 3392 "moronico.tab.c"
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
#line 490 ".\\moronico.y"


int yyerror(char *s) {
  fflush(stdout);
  printf("   *************Error, %s ***********\n",s);
  errores++;
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
    printf("Se han detectado %d errores", errores);
    }
  }

