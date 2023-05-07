
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
     CTC_BOOLEANA = 258,
     CTC_CADENA = 259,
     CTC_CARACTER = 260,
     CTC_ENTERA = 261,
     CTC_REAL = 262,
     PATH = 263,
     IDENTIFICADOR = 264,
     ABSTRACTO = 265,
     AND = 266,
     ASOCIATIVA = 267,
     BOOLEANO = 268,
     CABECERA = 269,
     CADENA = 270,
     CASO = 271,
     CARACTER = 272,
     CARGA = 273,
     CLASE = 274,
     CONJUNTO = 275,
     CONSTANTE = 276,
     CUERPO = 277,
     CONSTRUCTOR = 278,
     CUANDO = 279,
     CUATRO_PTOS = 280,
     DESCENDENTE = 281,
     DESPD = 282,
     DESPI = 283,
     DESTRUCTOR = 284,
     DE = 285,
     DEVOLVER = 286,
     DOS_PTOS = 287,
     EJECUTA = 288,
     ELEMENTO = 289,
     EN = 290,
     ENTERO = 291,
     ENTONCES = 292,
     EQ = 293,
     ESPECIFICO = 294,
     EXCEPTO = 295,
     FICHERO = 296,
     FINAL = 297,
     FINALMENTE = 298,
     FLECHA_DOBLE = 299,
     FUNCION = 300,
     GEQ = 301,
     GENERICO = 302,
     HASTA = 303,
     INTERFAZ = 304,
     LANZAR = 305,
     LEQ = 306,
     LISTA = 307,
     MIENTRAS = 308,
     MODIFICABLE = 309,
     NEQ = 310,
     OTRO = 311,
     OR = 312,
     PAQUETE = 313,
     PARA = 314,
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
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 15 ".\\moronico.y"

  int     val_int;
  double  val_double;
  char*   val_string;
  char    val_char;
  char    val_bool;



/* Line 214 of yacc.c  */
#line 209 "moronico.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 221 "moronico.tab.c"

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
     104,    -1,     1,    76,    -1,   103,     9,    -1,    -1,   103,
       9,    25,    -1,   110,   115,   132,   139,   105,    -1,     1,
      76,    -1,    77,   106,    78,    -1,    77,     1,    78,    -1,
     106,   167,    -1,   167,    -1,    58,   102,    76,   108,   109,
      -1,    14,   110,   115,   132,   139,   141,    -1,    22,   115,
     132,   139,   156,    -1,    -1,    18,   111,    76,    -1,   102,
     112,   113,    -1,   111,    79,   102,   112,   113,    -1,    -1,
      35,     8,    -1,    -1,    80,   114,    81,    -1,    80,     1,
      81,    -1,   114,    79,   102,    -1,   102,    -1,    -1,    74,
     116,    -1,   116,   117,    -1,   117,    -1,   102,    82,   118,
      76,    -1,   102,    82,   119,    -1,   102,    -1,   120,    -1,
     121,    -1,   122,    -1,   124,    -1,   128,    -1,   129,    -1,
     130,    -1,   142,    -1,    36,    -1,    66,    -1,    13,    -1,
      17,    -1,    15,    -1,    41,    -1,    80,   123,    81,    -1,
      80,     1,    81,    -1,   186,    -1,   123,    79,   186,    -1,
      52,   125,    30,   118,    -1,    -1,    83,   126,    84,    -1,
     126,    79,   127,    -1,   127,    -1,     1,    76,    -1,   200,
      32,   200,    -1,   200,    32,   200,    32,   200,    -1,    52,
      12,    30,   118,    -1,    20,    30,   118,    -1,    67,    77,
     131,    78,    -1,    77,     1,    78,    -1,   131,   114,    85,
     118,    76,    -1,   114,    85,   118,    76,    -1,    -1,    21,
     133,    -1,   133,   134,    -1,   134,    -1,   102,    85,   118,
      82,   135,    76,    -1,   200,    -1,    83,   136,    84,    -1,
      83,   137,    84,    -1,    83,   138,    84,    -1,    83,     1,
      84,    -1,   136,    79,   135,    -1,   135,    -1,   137,    79,
       4,    44,   135,    -1,     4,    44,   135,    -1,   138,    79,
     102,    44,   135,    -1,   102,    44,   135,    -1,    -1,    75,
     140,    -1,   140,   114,    85,   118,    82,   135,    76,    -1,
     140,   114,    85,   118,    76,    -1,   114,    85,   118,    82,
     135,    76,    -1,   114,    85,   118,    76,    -1,   114,    85,
       1,    82,   135,    76,    -1,   114,    85,     1,    76,    -1,
      49,   158,    -1,   143,    -1,   144,    -1,    19,    42,    77,
     145,   146,   147,    78,    -1,    19,    42,    80,   114,    81,
      77,   145,   146,   147,    78,    -1,    19,    80,   114,    81,
      77,   145,   146,   147,    78,    -1,    19,    77,   145,   146,
     147,    78,    -1,    65,   148,    -1,   148,    -1,    -1,    71,
     148,    -1,    -1,    61,   148,    -1,   149,    -1,   148,   149,
      -1,   150,    -1,   151,    -1,   152,    -1,   157,    76,   153,
      76,    -1,   157,    76,    -1,    74,   117,    -1,    21,   134,
      -1,   114,    85,   118,    76,    -1,   154,    -1,   154,    79,
     155,    -1,   155,    -1,    47,    -1,    10,    -1,    39,    -1,
      42,    -1,   156,   157,   166,    -1,   157,   166,    -1,   159,
      -1,   160,    -1,   161,    -1,   162,    -1,   158,   157,    76,
      -1,   157,    76,    -1,    45,   102,   163,    44,   118,    -1,
      63,   102,   163,    -1,    23,   102,   163,    -1,    29,   102,
      -1,    -1,    80,   164,    81,    -1,   165,    -1,   164,    76,
     165,    -1,   114,    85,   118,    54,    -1,   114,    85,   118,
      -1,   115,   132,   139,   105,    -1,    76,    -1,   168,    -1,
     169,    -1,   170,    -1,   171,    -1,   174,    -1,   175,    -1,
     180,    -1,   182,    -1,   184,    -1,   185,    82,   200,    76,
      -1,    70,    72,   200,    76,    -1,    70,    76,    -1,    31,
     200,    76,    -1,    31,    76,    -1,   172,    76,    -1,   102,
      80,   173,    81,    -1,   102,    80,    81,    -1,   173,    79,
     200,    -1,   200,    -1,    72,   200,    37,   105,    73,   105,
      -1,    72,   200,    37,   105,    -1,    35,    16,   200,    69,
     176,    76,    -1,   176,   177,    44,   105,    -1,   177,    44,
     105,    -1,   178,   179,    -1,    -1,   178,   179,    86,    -1,
     200,    -1,   127,    -1,    56,    -1,   181,   105,    -1,    59,
     102,    35,   185,    -1,    68,    34,   102,    35,   127,    26,
      -1,    68,    34,   102,    35,   127,    -1,    53,   200,    -1,
      68,    48,   200,    -1,    62,   105,    40,   183,    43,   105,
      -1,    62,   105,    40,   183,    -1,   183,    24,   102,    33,
     105,    -1,    24,   102,    33,   105,    -1,    50,   102,    76,
      -1,   102,    -1,   185,    83,   173,    84,    -1,   185,    87,
       9,    -1,     6,    -1,     7,    -1,     4,    -1,     5,    -1,
       3,    -1,   186,    -1,   185,    -1,   172,    -1,    80,   200,
      81,    -1,    88,   187,    -1,   187,    -1,   188,    60,   189,
      -1,   188,    -1,   190,    89,   189,    -1,   190,    90,   189,
      -1,   190,    91,   189,    -1,   189,    -1,   191,    92,   190,
      -1,   191,    88,   190,    -1,   190,    -1,   192,    28,   191,
      -1,   192,    27,   191,    -1,   191,    -1,   193,    93,   192,
      -1,   192,    -1,   194,    94,   193,    -1,   193,    -1,   195,
      95,   194,    -1,   194,    -1,   196,    96,   195,    -1,   196,
      97,   195,    -1,   196,    51,   195,    -1,   196,    46,   195,
      -1,   196,    38,   195,    -1,   196,    55,   195,    -1,   195,
      -1,    98,   197,    -1,   196,    -1,   197,    11,   198,    -1,
     197,    -1,   198,    57,   199,    -1,   198,    -1,   199,    -1,
       1,    76,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    42,    45,    46,    49,    52,    53,    57,
      58,    61,    62,    65,    66,    69,    72,    75,    77,    78,
      81,    82,    85,    86,    89,    90,    91,    94,    95,   103,
     104,   107,   108,   111,   112,   115,   116,   117,   118,   119,
     120,   121,   124,   125,   128,   129,   130,   131,   132,   135,
     138,   139,   142,   143,   146,   149,   150,   153,   154,   155,
     158,   159,   162,   165,   168,   169,   172,   173,   181,   181,
     184,   185,   188,   191,   192,   193,   194,   195,   198,   199,
     202,   203,   206,   207,   210,   211,   214,   215,   216,   217,
     218,   219,   223,   227,   228,   231,   232,   236,   237,   241,
     242,   245,   246,   249,   250,   253,   254,   257,   258,   259,
     260,   261,   264,   267,   270,   273,   276,   277,   280,   281,
     282,   283,   292,   293,   296,   297,   298,   299,   302,   303,
     306,   309,   312,   315,   318,   319,   322,   323,   326,   327,
     330,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   352,   354,   355,   358,   359,   362,   365,   366,   369,
     370,   373,   374,   377,   380,   381,   386,   389,   390,   393,
     394,   395,   398,   401,   402,   403,   404,   405,   408,   409,
     412,   413,   416,   424,   425,   426,   429,   430,   431,   432,
     433,   436,   437,   438,   439,   442,   443,   446,   447,   450,
     451,   452,   453,   456,   457,   458,   461,   462,   463,   467,
     468,   471,   472,   475,   476,   479,   480,   481,   482,   483,
     484,   485,   488,   489,   492,   493,   497,   498,   502,   503
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CTC_BOOLEANA", "CTC_CADENA",
  "CTC_CARACTER", "CTC_ENTERA", "CTC_REAL", "PATH", "IDENTIFICADOR",
  "ABSTRACTO", "AND", "ASOCIATIVA", "BOOLEANO", "CABECERA", "CADENA",
  "CASO", "CARACTER", "CARGA", "CLASE", "CONJUNTO", "CONSTANTE", "CUERPO",
  "CONSTRUCTOR", "CUANDO", "CUATRO_PTOS", "DESCENDENTE", "DESPD", "DESPI",
  "DESTRUCTOR", "DE", "DEVOLVER", "DOS_PTOS", "EJECUTA", "ELEMENTO", "EN",
  "ENTERO", "ENTONCES", "EQ", "ESPECIFICO", "EXCEPTO", "FICHERO", "FINAL",
  "FINALMENTE", "FLECHA_DOBLE", "FUNCION", "GEQ", "GENERICO", "HASTA",
  "INTERFAZ", "LANZAR", "LEQ", "LISTA", "MIENTRAS", "MODIFICABLE", "NEQ",
  "OTRO", "OR", "PAQUETE", "PARA", "POTENCIA", "PRIVADO", "PROBAR",
  "PROCEDIMIENTO", "PROGRAMA", "PUBLICO", "REAL", "REGISTRO", "REPITE",
  "SEA", "SALIR", "SEMIPUBLICO", "SI", "SINO", "TIPO", "VARIABLE", "';'",
  "'{'", "'}'", "','", "'('", "')'", "'='", "'['", "']'", "':'", "'|'",
  "'.'", "'-'", "'*'", "'/'", "'%'", "'+'", "'&'", "'^'", "'@'", "'<'",
  "'>'", "'!'", "$accept", "programa", "definicion_programa", "nombre",
  "id_op", "bloque_programa", "bloque_instrucciones",
  "instruccion_unoomas", "definicion_paquete", "seccion_cabecera",
  "seccion_cuerpo", "declaracion_cargas", "declaracion_carga",
  "en_path_op", "nombres_op", "nombres_comas", "declaracion_tipos",
  "declaracion_tipo_unoomas", "declaracion_tipo",
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
      24,   -47,  -302,  -302,    40,  -302,  -302,  -302,    -1,    86,
      81,  -302,   113,   115,    42,   162,   177,  -302,   161,  -302,
    -302,   138,   138,   138,  -302,  -302,   215,   -27,  -302,   232,
     232,   232,   254,   228,  -302,  -302,   247,   257,  -302,  -302,
     245,   245,   245,  -302,    52,  -302,   215,   484,  -302,   260,
     257,  -302,  -302,   253,   301,     9,   272,  -302,    32,   228,
    -302,  -302,  -302,    -3,   324,  -302,  -302,     6,  -302,   281,
     358,   288,  -302,   284,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,   386,  -302,    -6,   257,   430,
    -302,     9,  -302,  -302,  -302,  -302,  -302,     9,   138,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,  -302,    48,   238,  -302,
     386,   332,   366,   335,  -302,   296,   295,  -302,  -302,  -302,
    -302,  -302,    79,  -302,  -302,   298,   406,     5,   313,   188,
     378,  -302,   383,  -302,   253,    -7,    65,   383,  -302,   302,
     459,  -302,  -302,  -302,  -302,  -302,   319,  -302,  -302,  -302,
     253,  -302,  -302,    17,   320,     9,   322,  -302,   322,   322,
     138,   232,  -302,  -302,   238,  -302,  -302,   411,  -302,    51,
     333,    35,  -302,  -302,  -302,  -302,   329,   165,  -302,   386,
     338,   383,   236,   330,   -48,  -302,  -302,   151,  -302,  -302,
     351,  -302,   189,   136,   160,   323,   326,   318,    59,   413,
     372,  -302,   398,   386,    69,   355,  -302,  -302,   472,  -302,
     226,    99,   114,   386,  -302,   360,  -302,   361,   383,   365,
    -302,   408,   404,  -302,   383,   383,  -302,   416,   251,  -302,
    -302,  -302,  -302,   383,   383,   436,  -302,   379,  -302,  -302,
     415,  -302,  -302,   245,   333,   184,  -302,    35,  -302,   386,
     411,   396,  -302,   137,   385,  -302,   428,   387,  -302,  -302,
     383,  -302,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,   330,
     330,   383,  -302,   386,  -302,   119,  -302,   268,   391,  -302,
    -302,   226,  -302,   226,   124,  -302,  -302,   400,  -302,  -302,
     446,   438,  -302,   412,   253,  -302,   217,  -302,   417,    89,
    -302,  -302,   123,   134,  -302,   386,   253,   396,   405,   419,
      35,   411,   409,  -302,  -302,  -302,  -302,   420,   426,  -302,
     238,  -302,  -302,  -302,  -302,  -302,  -302,   189,   189,   136,
     136,   160,   323,   326,   318,   318,   318,   318,   318,   318,
    -302,  -302,   452,   431,   386,    77,   447,     7,  -302,   141,
     220,   221,  -302,   432,   434,  -302,   226,  -302,  -302,   151,
    -302,    23,   383,  -302,   440,   383,  -302,  -302,  -302,   386,
    -302,  -302,  -302,  -302,   433,   238,  -302,   334,  -302,  -302,
     137,   333,   383,  -302,   439,  -302,   226,   226,   226,  -302,
     510,  -302,  -302,  -302,  -302,  -302,   441,   443,   478,   337,
     483,  -302,   253,   497,   253,  -302,   470,  -302,  -302,   333,
    -302,   396,  -302,  -302,  -302,  -302,  -302,   482,   486,  -302,
    -302,   488,   253,  -302,  -302,   442,   398,   253,   500,  -302,
    -302,  -302,  -302,   396,   456,   226,   226,   253,  -302,  -302,
    -302,   253,   466,  -302,  -302,  -302,  -302,  -302,  -302
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -302,  -302,  -302,    -2,  -302,  -302,  -130,  -302,  -302,  -302,
    -302,   530,  -302,   501,   487,   -33,   304,  -302,   -25,   -64,
    -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -250,  -302,
    -302,  -302,  -302,   -16,  -302,   -28,  -263,  -302,  -302,  -302,
     -34,  -302,  -302,  -302,  -302,  -302,  -159,  -241,  -301,  -154,
    -169,  -302,  -302,  -302,  -302,  -302,   158,  -302,   -32,  -302,
    -302,  -302,  -302,  -302,   129,  -302,   169,   392,   414,  -302,
    -302,  -302,  -302,   -55,   321,  -302,  -302,  -302,   146,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,   -83,   -62,   374,  -302,
     186,    44,    54,   287,   289,   286,   265,  -302,   376,   283,
     285,   -11
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -230
static const yytype_int16 yytable[] =
{
       8,    10,   252,   317,   222,   244,   153,    54,    55,   123,
     332,    58,    48,   247,    41,    42,   384,    26,   111,    87,
     232,   125,    86,    98,   358,     1,    36,   223,   363,     7,
     364,   260,    93,    46,   146,    36,   261,    49,    94,   107,
      11,   224,    57,    18,    -7,    72,   178,   411,    49,    34,
      57,   397,    35,    56,    95,   127,   166,   153,    93,   154,
      19,    -7,   212,   -18,    94,   160,   412,   117,   118,   119,
     120,   121,    96,   104,   108,    12,   177,   109,   252,   126,
      95,   204,     2,    72,   104,   146,    57,   228,     3,   112,
     213,   156,   157,   158,   159,    13,   320,   273,    96,   233,
     234,   202,   163,   406,   235,   274,    57,    57,    72,   168,
     275,   104,    57,   105,   276,   255,   -18,   -18,   217,   -18,
     444,   220,   413,   237,    72,   164,   227,    15,   165,   219,
     104,   221,   245,   424,   425,   426,   249,   225,   246,   282,
      17,   226,   452,   248,   181,   243,   286,   323,   104,   294,
     421,   252,   182,   295,   283,   277,   278,    14,   208,   434,
     209,   395,    57,    57,    49,    57,    36,   387,   375,    57,
     257,   391,   285,   378,   374,   290,   324,    72,   443,   325,
      19,   291,   454,   455,   326,   319,   383,   268,   269,   215,
     292,   117,   118,   119,   120,   121,   293,    -7,   104,    23,
     365,    72,   104,    57,   354,   312,   366,   297,   379,   316,
     380,    72,    28,   302,   303,   381,   369,   307,   252,   353,
     398,   301,   308,   307,   266,   399,   419,   215,   267,   117,
     118,   119,   120,   121,   234,    -7,    57,    25,   235,   117,
     118,   119,   120,   121,   104,    57,   254,    72,    57,   202,
      32,   382,   215,    39,   117,   118,   119,   120,   121,   166,
      -7,    93,    43,   104,   216,   318,    -7,    94,   181,   355,
     352,   117,   356,   119,   120,   121,   182,    -7,   263,   264,
     265,    72,   439,    95,   441,   357,   183,   240,   241,   116,
     394,   117,   118,   119,   120,   121,   375,   368,   376,   400,
     402,    96,   448,   167,   401,   403,   181,   450,    44,   287,
     337,   338,   168,    72,   182,   416,   181,   456,    57,    57,
      52,   457,   339,   340,   183,    29,    30,    31,    57,    47,
      89,   181,   305,   117,   118,   119,   120,   121,   215,   182,
     117,   118,   119,   120,   121,    85,    -7,   312,   181,   183,
      91,   287,    72,   103,   110,   166,   182,    93,   114,   115,
     124,   202,   179,    94,   415,   203,   183,   180,   410,   117,
     118,   119,   120,   121,   206,    -7,   207,    72,    57,    95,
     210,   422,   228,    57,   215,    57,   117,   118,   119,   120,
     121,   214,    -7,   433,   218,   231,   236,    96,   436,    60,
     428,    61,   238,    62,   250,   253,    64,   211,   168,   438,
     181,   262,  -104,   272,   256,    -7,   270,   181,   182,    60,
     271,    61,    65,    62,   279,   182,    64,    66,   183,   280,
     281,   128,   166,   284,    93,   183,   295,   296,    67,    -7,
      94,   298,    65,   299,   300,   310,   181,    66,   333,   334,
     335,   336,    68,   304,   182,   311,    95,   321,    67,   315,
    -229,   129,   330,   181,   183,   130,    71,   362,   331,   367,
     370,   182,    68,   372,    96,   117,   118,   119,   120,   121,
     131,   183,   385,   132,   392,   168,    71,   388,   373,   133,
     129,   396,   134,   377,   130,   386,   389,    60,   135,    61,
     136,    62,   137,    63,    64,   390,   138,   393,   404,   131,
     405,   418,   132,   414,   427,   423,   437,   429,   133,   430,
      65,   134,   432,   440,   442,    66,   445,   135,   449,   136,
     446,   137,   447,   451,   453,   138,    67,   229,   344,   345,
     346,   347,   348,   349,   458,    22,   106,    59,   420,   417,
      68,    69,   242,   431,   230,   309,   258,   341,   343,   259,
     342,    70,   350,     0,    71,   351
};

static const yytype_int16 yycheck[] =
{
       2,     3,   171,   244,   134,   164,    89,    41,    42,    71,
     260,    44,    37,   167,    30,    31,   317,    19,    12,    52,
     150,    85,    50,    55,   287,     1,    28,    34,   291,    76,
     293,    79,    23,    35,    89,    37,    84,    39,    29,    42,
       0,    48,    44,     1,     9,    47,   110,    24,    50,    76,
      52,    44,    79,     1,    45,    88,    21,   140,    23,    91,
      18,     9,   126,    21,    29,    97,    43,     3,     4,     5,
       6,     7,    63,    79,    77,    76,   109,    80,   247,    85,
      45,   114,    58,    85,    79,   140,    88,    80,    64,    83,
      85,    93,    94,    95,    96,     9,   250,    38,    63,    82,
      83,   112,   104,   366,    87,    46,   108,   109,   110,    74,
      51,    79,   114,    81,    55,   179,    74,    75,   129,    77,
     421,   132,   372,   155,   126,    77,   137,    14,    80,   131,
      79,   133,   165,   396,   397,   398,    85,    72,   166,   203,
      25,    76,   443,   168,    80,   161,   208,    10,    79,   213,
     391,   320,    88,    76,    85,    96,    97,    76,    79,   409,
      81,    84,   164,   165,   166,   167,   168,   321,    79,   171,
     181,   330,   205,    84,   304,    76,    39,   179,   419,    42,
      18,    82,   445,   446,    47,   249,   316,    27,    28,     1,
      76,     3,     4,     5,     6,     7,    82,     9,    79,    22,
      76,   203,    79,   205,    85,   238,    82,   218,    85,   243,
      76,   213,    74,   224,   225,    81,   299,   228,   387,   283,
      79,   223,   233,   234,    88,    84,   385,     1,    92,     3,
       4,     5,     6,     7,    83,     9,   238,    76,    87,     3,
       4,     5,     6,     7,    79,   247,    81,   249,   250,   260,
      35,   315,     1,    21,     3,     4,     5,     6,     7,    21,
       9,    23,     8,    79,    76,    81,     9,    29,    80,     1,
     281,     3,     4,     5,     6,     7,    88,     9,    89,    90,
      91,   283,   412,    45,   414,   287,    98,   158,   159,     1,
     354,     3,     4,     5,     6,     7,    79,   299,    81,    79,
      79,    63,   432,    65,    84,    84,    80,   437,    80,    83,
     266,   267,    74,   315,    88,   379,    80,   447,   320,   321,
      75,   451,   268,   269,    98,    21,    22,    23,   330,    82,
      77,    80,    81,     3,     4,     5,     6,     7,     1,    88,
       3,     4,     5,     6,     7,    85,     9,   380,    80,    98,
      49,    83,   354,    81,    30,    21,    88,    23,    77,     1,
      76,   372,    30,    29,   375,    30,    98,     1,   370,     3,
       4,     5,     6,     7,    78,     9,    81,   379,   380,    45,
      82,   392,    80,   385,     1,   387,     3,     4,     5,     6,
       7,    78,     9,    56,    16,    76,    76,    63,   409,    13,
     402,    15,    80,    17,    71,    76,    20,     1,    74,   411,
      80,    60,    78,    95,    76,     9,    93,    80,    88,    13,
      94,    15,    36,    17,    11,    88,    20,    41,    98,    57,
      32,     1,    21,    78,    23,    98,    76,    76,    52,     9,
      29,    76,    36,    35,    40,     9,    80,    41,   262,   263,
     264,   265,    66,    37,    88,    76,    45,    61,    52,    44,
      32,    31,    77,    80,    98,    35,    80,    76,    81,    69,
      24,    88,    66,    35,    63,     3,     4,     5,     6,     7,
      50,    98,    77,    53,    32,    74,    80,    78,    76,    59,
      31,    44,    62,    76,    35,    76,    76,    13,    68,    15,
      70,    17,    72,    19,    20,    79,    76,    76,    76,    50,
      76,    78,    53,    73,     4,    76,    33,    76,    59,    76,
      36,    62,    44,    26,    54,    41,    44,    68,    86,    70,
      44,    72,    44,    33,    78,    76,    52,    78,   273,   274,
     275,   276,   277,   278,    78,    15,    59,    46,   390,   380,
      66,    67,   160,   407,   140,   234,   182,   270,   272,   183,
     271,    77,   279,    -1,    80,   280
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    58,    64,   100,   101,   107,    76,   102,   103,
     102,     0,    76,     9,    76,    14,   108,    25,     1,    18,
     104,   110,   110,    22,   109,    76,   102,   111,    74,   115,
     115,   115,    35,   112,    76,    79,   102,   116,   117,    21,
     132,   132,   132,     8,    80,   113,   102,    82,   117,   102,
     133,   134,    75,   139,   139,   139,     1,   102,   114,   112,
      13,    15,    17,    19,    20,    36,    41,    52,    66,    67,
      77,    80,   102,   118,   119,   120,   121,   122,   124,   128,
     129,   130,   142,   143,   144,    85,   134,   114,   140,    77,
     105,    49,   141,    23,    29,    45,    63,   156,   157,   159,
     160,   161,   162,    81,    79,    81,   113,    42,    77,    80,
      30,    12,    83,   125,    77,     1,     1,     3,     4,     5,
       6,     7,   123,   186,    76,   118,    85,   114,     1,    31,
      35,    50,    53,    59,    62,    68,    70,    72,    76,   102,
     106,   167,   168,   169,   170,   171,   172,   174,   175,   180,
     181,   182,   184,   185,   157,   158,   102,   102,   102,   102,
     157,   115,   166,   102,    77,    80,    21,    65,    74,   114,
     145,   148,   149,   150,   151,   152,   157,   114,   118,    30,
       1,    80,    88,    98,   126,   127,   172,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,    30,   114,   131,    78,    81,    79,    81,
      82,     1,   118,    85,    78,     1,    76,   200,    16,   102,
     200,   102,   105,    34,    48,    72,    76,   200,    80,    78,
     167,    76,   105,    82,    83,    87,    76,   157,    80,   163,
     163,   163,   166,   132,   145,   114,   134,   148,   117,    85,
      71,   146,   149,    76,    81,   118,    76,   200,   187,   197,
      79,    84,    60,    89,    90,    91,    88,    92,    27,    28,
      93,    94,    95,    38,    46,    51,    55,    96,    97,    11,
      57,    32,   118,    85,    78,   114,   186,    83,   135,   200,
      76,    82,    76,    82,   118,    76,    76,   200,    76,    35,
      40,   102,   200,   200,    37,    81,   173,   200,   200,   173,
       9,    76,   114,   164,   165,    44,   139,   146,    81,   118,
     148,    61,   147,    10,    39,    42,    47,   153,   154,   155,
      77,    81,   127,   189,   189,   189,   189,   190,   190,   191,
     191,   192,   193,   194,   195,   195,   195,   195,   195,   195,
     198,   199,   200,   118,    85,     1,     4,   102,   135,   136,
     137,   138,    76,   135,   135,    76,    82,    69,   102,   185,
      24,   183,    35,    76,   105,    79,    81,    76,    84,    85,
      76,    81,   118,   105,   147,    77,    76,   148,    78,    76,
      79,   145,    32,    76,   118,    84,    44,    44,    79,    84,
      79,    84,    79,    84,    76,    76,   135,   176,   177,   178,
     102,    24,    43,   127,    73,   200,   118,   165,    78,   145,
     155,   146,   200,    76,   135,   135,   135,     4,   102,    76,
      76,   177,    44,    56,   127,   179,   200,    33,   102,   105,
      26,   105,    54,   146,   147,    44,    44,    44,   105,    86,
     105,    33,   147,    78,   135,   135,   105,   105,    78
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
#line 41 ".\\moronico.y"
    {printf("\t programa -> def_programa \n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 42 ".\\moronico.y"
    {printf("\t programa -> def_paquete \n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 45 ".\\moronico.y"
    {printf("\t def_programa -> PROGRAMA ';' bloque_programa \n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 46 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 49 ".\\moronico.y"
    {printf("\t nombre -> id_op IDENTIFICADOR \n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 53 ".\\moronico.y"
    {printf("\t id_op -> id_op IDENTIFICADOR CUATRO_PTOS  \n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 57 ".\\moronico.y"
    {printf("\t bloque_programa -> declaracion_cargas declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 58 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 61 ".\\moronico.y"
    {printf("\t bloque_instrucciones -> '{' instruccion_unoomas '}'  \n");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 62 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 65 ".\\moronico.y"
    {printf("\t instruccion_unoomas -> instruccion_unoomas instruccion   \n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 66 ".\\moronico.y"
    {printf("\t instruccion_unoomas -> instruccion  \n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 69 ".\\moronico.y"
    {printf("\t definicion_paquete -> PAQUETE nombre ';' seccion_cabecera seccion_cuerpo  \n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 72 ".\\moronico.y"
    {printf("\t seccion_cabecera -> CABECERA declaracion_cargas declaracion_tipos declaracion_constantes declaracion_variables declaracion_interfaces \n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 75 ".\\moronico.y"
    {printf("\t seccion_cuerpo -> CUERPO declaracion_tipos declaracion_constantes declaracion_variables declaracion_subprograma  \n");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 78 ".\\moronico.y"
    {printf("\t declaracion_cargas -> CARGA declaracion_carga ';'  \n");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 81 ".\\moronico.y"
    {printf("\t declaracion_carga -> nombre en_path_op nombres_op  \n");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 82 ".\\moronico.y"
    {printf("\t declaracion_carga -> declaracion_carga_unoomas ',' nombre en_path_op nombres_op  \n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 86 ".\\moronico.y"
    {printf("\t en_path_op -> EN PATH  \n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 90 ".\\moronico.y"
    {printf("\t nombres_op -> '('  nombres_comas ')'  \n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 91 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 94 ".\\moronico.y"
    {printf("\t nombres_comas -> nombres_comas ',' nombre  \n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 95 ".\\moronico.y"
    {printf("\t nombres_comas -> nombre  \n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 104 ".\\moronico.y"
    {printf("\t declaracion_tipos -> TIPO declaracion_tipo_unoomas  \n");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 107 ".\\moronico.y"
    {printf("\t declaracion_tipo_unoomas -> declaracion_tipo_unoomas declaracion_tipo   \n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 108 ".\\moronico.y"
    {printf("\t declaracion_tipo_unoomas -> declaracion_tipo  \n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 111 ".\\moronico.y"
    {printf("\t declaracion_tipo -> nombre '=' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 112 ".\\moronico.y"
    {printf("\t declaracion_tipo -> nombre '=' tipo_estructurado  \n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 115 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> nombre  \n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 116 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_escalar  \n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 117 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_fichero  \n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 118 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_enumerado  \n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 119 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_lista  \n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 120 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_lista_asociativa  \n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 121 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_conjunto  \n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 124 ".\\moronico.y"
    {printf("\t tipo_estructurado -> tipo_registro  \n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 125 ".\\moronico.y"
    {printf("\t tipo_estructurado -> declaracion_clase  \n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 128 ".\\moronico.y"
    {printf("\t tipo_escalar -> ENTERO  \n");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 129 ".\\moronico.y"
    {printf("\t tipo_escalar -> REAL  \n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 130 ".\\moronico.y"
    {printf("\t tipo_escalar -> BOOLEANO  \n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 131 ".\\moronico.y"
    {printf("\t tipo_escalar -> CARACTER  \n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 132 ".\\moronico.y"
    {printf("\t tipo_escalar -> CADENA  \n");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 135 ".\\moronico.y"
    {printf("\t tipo_fichero -> FICHERO  \n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 138 ".\\moronico.y"
    {printf("\t tipo_enumerado -> '(' expresion_constante_unoomas ')'  \n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 139 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 142 ".\\moronico.y"
    {printf("\t expresion_constante_unoomas -> expresion_constante  \n");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 143 ".\\moronico.y"
    {printf("\t expresion_constante_unoomas -> expresion_constante_unoomas ',' expresion_constante  \n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 146 ".\\moronico.y"
    {printf("\t tipo_lista -> LISTA rango_lista_op DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 150 ".\\moronico.y"
    {printf("\t rango_lista_op -> '[' rango_lista ']'  \n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 153 ".\\moronico.y"
    {printf("\t rango_lista ->  rango_lista ',' rango  \n");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 154 ".\\moronico.y"
    {printf("\t rango_lista -> rango  \n");;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 155 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 158 ".\\moronico.y"
    {printf("\t rango -> expresion DOS_PTOS expresion   \n");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 159 ".\\moronico.y"
    {printf("\t rango -> expresion DOS_PTOS expresion DOS_PTOS expresion    \n");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 162 ".\\moronico.y"
    {printf("\t tipo_lista_asociativa -> LISTA ASOCIATIVA DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 165 ".\\moronico.y"
    {printf("\t tipo_conjunto -> CONJUNTO DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 168 ".\\moronico.y"
    {printf("\t tipo_registro -> REGISTRO '{' declaracion_campo '}'  \n");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 169 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 172 ".\\moronico.y"
    {printf("\t declaracion_campo -> declaracion_campo nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 173 ".\\moronico.y"
    {printf("\t declaracion_campo -> nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 181 ".\\moronico.y"
    {printf("\t declaracion_constantes -> CONSTANTE declaracion_constante_unoomas   \n");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 184 ".\\moronico.y"
    {printf("\t declaracion_constante_unoomas -> declaracion_constante_unoomas declaracion_constante  \n");;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 185 ".\\moronico.y"
    {printf("\t declaracion_constante_unoomas -> declaracion_constante  \n");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 188 ".\\moronico.y"
    {printf("\t declaracion_constante ->  nombre ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'  \n");;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 191 ".\\moronico.y"
    {printf("\t valor_constante -> expresion  \n");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 192 ".\\moronico.y"
    {printf("\t valor_constante -> '[' valor_constante_comas ']'  \n");;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 193 ".\\moronico.y"
    {printf("\t valor_constante -> '[' clave_valor ']'  \n");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 194 ".\\moronico.y"
    {printf("\t valor_constante -> '[' campo_valor ']'  \n");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 195 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 198 ".\\moronico.y"
    {printf("\t valor_constante_comas -> valor_constante_comas ',' valor_constante   \n");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 199 ".\\moronico.y"
    {printf("\t valor_constante_comas -> valor_constante  \n");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 202 ".\\moronico.y"
    {printf("\t clave_valor -> clave_valor ',' CTC_CADENA FLECHA_DOBLE valor_constante   \n");;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 203 ".\\moronico.y"
    {printf("\t clave_valor -> CTC_CADENA FLECHA_DOBLE valor_constante   \n");;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 206 ".\\moronico.y"
    {printf("\t campo_valor -> campo_valor ',' nombre FLECHA_DOBLE valor_constante  \n");;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 207 ".\\moronico.y"
    {printf("\t campo_valor -> nombre FLECHA_DOBLE valor_constante  \n");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 211 ".\\moronico.y"
    {printf("\t declaracion_variables -> VARIABLE declaracion_variable  \n");;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 214 ".\\moronico.y"
    {printf("\t declaracion_variable -> declaracion_variable nombres_comas ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'  \n");;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 215 ".\\moronico.y"
    {printf("\t declaracion_variable -> declaracion_variable nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 216 ".\\moronico.y"
    {printf("\t declaracion_variable -> nombres_comas ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'  \n");;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 217 ".\\moronico.y"
    {printf("\t declaracion_variable -> nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 218 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 219 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 223 ".\\moronico.y"
    {printf("\t declaracion_interfaces -> INTERFAZ cabecera_subprograma_unoomas_ptocoma  \n");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 227 ".\\moronico.y"
    {printf("\t declaracion_clase -> declaracion_clase_mod  \n");;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 228 ".\\moronico.y"
    {printf("\t declaracion_clase -> declaracion_clase_nomod  \n");;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 231 ".\\moronico.y"
    {printf("\t declaracion_clase_mod -> CLASE FINAL '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'  \n");;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 232 ".\\moronico.y"
    {printf("\t declaracion_clase_mod -> CLASE FINAL '(' nombres_comas ')' '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'  \n");;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 236 ".\\moronico.y"
    {printf("\t declaracion_clase_nomod ->  CLASE '(' nombres_comas ')' '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'  \n");;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 237 ".\\moronico.y"
    {printf("\t declaracion_clase_nomod ->  CLASE '(' nombres_comas ')' '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'  \n");;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 241 ".\\moronico.y"
    {printf("\t declaraciones_publicas -> PUBLICO declaracion_componente_unoomas  \n");;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 242 ".\\moronico.y"
    {printf("\t rango_ldeclaraciones_publicasista_op -> declaracion_componente_unoomas  \n");;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 246 ".\\moronico.y"
    {printf("\t declaraciones_semi -> SEMIPUBLICO declaracion_componente_unoomas  \n");;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 250 ".\\moronico.y"
    {printf("\t declaraciones_privadas -> PRIVADO declaracion_componente_unoomas  \n");;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 253 ".\\moronico.y"
    {printf("\t declaracion_componente_unoomas -> declaracion_componente  \n");;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 254 ".\\moronico.y"
    {printf("\t declaracion_componente_unoomas -> declaracion_componente_unoomas declaracion_componente   \n");;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 257 ".\\moronico.y"
    {printf("\t declaracion_componente -> declaracion_tipo_anidado  \n");;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 258 ".\\moronico.y"
    {printf("\t declaracion_componente -> declaracion_constante_anidada  \n");;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 259 ".\\moronico.y"
    {printf("\t declaracion_componente -> declaracion_atributos  \n");;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 260 ".\\moronico.y"
    {printf("\t declaracion_componente -> cabecera_subprograma ';' modificadores ';'  \n");;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 261 ".\\moronico.y"
    {printf("\t declaracion_componente -> cabecera_subprograma ';'  \n");;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 264 ".\\moronico.y"
    {printf("\t declaracion_tipo_anidado -> TIPO declaracion_tipo   \n");;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 267 ".\\moronico.y"
    {printf("\t declaracion_constante_anidada -> CONSTANTE declaracion_constante  \n");;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 270 ".\\moronico.y"
    {printf("\t declaracion_atributos -> nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 273 ".\\moronico.y"
    {printf("\t modificadores -> modificador_comas  \n");;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 276 ".\\moronico.y"
    {printf("\t modificador_comas -> modificador_comas ',' modificador  \n");;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 277 ".\\moronico.y"
    {printf("\t modificador_comas -> modificador  \n");;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 280 ".\\moronico.y"
    {printf("\t modificador -> GENERICO  \n");;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 281 ".\\moronico.y"
    {printf("\t modificador -> ABSTRACTO  \n");;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 282 ".\\moronico.y"
    {printf("\t modificador -> ESPECIFICO  \n");;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 283 ".\\moronico.y"
    {printf("\t modificador -> FINAL  \n");;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 292 ".\\moronico.y"
    {printf("\t declaracion_subprograma -> declaracion_subprograma cabecera_subprograma bloque_subprograma  \n");;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 293 ".\\moronico.y"
    {printf("\t declaracion_subprograma -> cabecera_subprograma bloque_subprograma  \n");;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 296 ".\\moronico.y"
    {printf("\t cabecera_subprograma -> cabecera_funcion  \n");;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 297 ".\\moronico.y"
    {printf("\t cabecera_subprograma -> cabecera_procedimiento  \n");;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 298 ".\\moronico.y"
    {printf("\t cabecera_subprograma -> cabecera_constructor  \n");;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 299 ".\\moronico.y"
    {printf("\t cabecera_subprograma -> cabecera_destructor  \n");;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 302 ".\\moronico.y"
    {printf("\t cabecera_subprograma_unoomas_ptocoma -> cabecera_subprograma_unoomas_ptocoma cabecera_subprograma ';'  \n");;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 303 ".\\moronico.y"
    {printf("\t cabecera_subprograma_unoomas_ptocoma -> cabecera_subprograma ';'  \n");;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 306 ".\\moronico.y"
    {printf("\t cabecera_funcion -> FUNCION nombre declaracion_parametros FLECHA_DOBLE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 309 ".\\moronico.y"
    {printf("\t cabecera_procedimiento -> PROCEDIMIENTO nombre declaracion_parametros  \n");;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 312 ".\\moronico.y"
    {printf("\t cabecera_constructor ->  CONSTRUCTOR nombre declaracion_parametros  \n");;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 315 ".\\moronico.y"
    {printf("\t cabecera_destructor -> DESTRUCTOR nombre  \n");;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 319 ".\\moronico.y"
    {printf("\t declaracion_parametros -> declarac'(' lista_parametros_formales ')'ion_constante  \n");;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 322 ".\\moronico.y"
    {printf("\t lista_parametros_formales -> parametros_formales  \n");;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 323 ".\\moronico.y"
    {printf("\t lista_parametros_formales -> lista_parametros_formales ';' parametros_formales  \n");;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 326 ".\\moronico.y"
    {printf("\t parametros_formales -> nombres_comas ':' tipo_no_estructurado_o_nombre_tipo MODIFICABLE  \n");;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 327 ".\\moronico.y"
    {printf("\t parametros_formales -> nombres_comas ':' tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 330 ".\\moronico.y"
    {printf("\t bloque_subprograma -> declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones  \n");;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 340 ".\\moronico.y"
    {printf("\t instruccion -> ';'  \n");;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 341 ".\\moronico.y"
    {printf("\t instruccion -> instruccion_asignacion  \n");;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 342 ".\\moronico.y"
    {printf("\t instruccion -> instruccion_salir  \n");;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 343 ".\\moronico.y"
    {printf("\t instruccion -> instruccion_devolver  \n");;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 344 ".\\moronico.y"
    {printf("\t instruccion -> instruccion_llamada  \n");;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 345 ".\\moronico.y"
    {printf("\t instruccion -> instruccion_si  \n");;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 346 ".\\moronico.y"
    {printf("\t instruccion -> instruccion_casos  \n");;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 347 ".\\moronico.y"
    {printf("\t instruccion -> instruccion_bucle  \n");;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 348 ".\\moronico.y"
    {printf("\t instruccion -> instruccion_probar_excepto  \n");;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 349 ".\\moronico.y"
    {printf("\t instruccion -> instruccion_lanzar  \n");;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 352 ".\\moronico.y"
    {printf("\t instruccion_asignacion -> objeto '=' expresion ';'  \n");;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 354 ".\\moronico.y"
    {printf("\t instruccion_salir -> SALIR SI expresion ';'  \n");;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 355 ".\\moronico.y"
    {printf("\t instruccion_salir -> SALIR ';'  \n");;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 358 ".\\moronico.y"
    {printf("\t instruccion_devolver -> DEVOLVER expresion ';'  \n");;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 359 ".\\moronico.y"
    {printf("\t instruccion_devolver -> DEVOLVER ';'  \n");;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 362 ".\\moronico.y"
    {printf("\t instruccion_llamada -> llamada_subprograma ';'  \n");;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 365 ".\\moronico.y"
    {printf("\t llamada_subprograma -> nombre '(' expresion_comas ')'  \n");;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 366 ".\\moronico.y"
    {printf("\t llamada_subprograma -> nombre '(' ')'  \n");;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 369 ".\\moronico.y"
    {printf("\t expresion_comas -> expresion_comas ',' expresion  \n");;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 370 ".\\moronico.y"
    {printf("\t expresion_comas -> expresion  \n");;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 373 ".\\moronico.y"
    {printf("\t instruccion_si ->  SI expresion ENTONCES bloque_instrucciones SINO bloque_instrucciones  \n");;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 374 ".\\moronico.y"
    {printf("\t instruccion_si ->  SI expresion ENTONCES bloque_instrucciones SINO bloque_instrucciones  \n");;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 377 ".\\moronico.y"
    {printf("\t instruccion_casos ->  EN  CASO expresion SEA caso ';'  \n");;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 380 ".\\moronico.y"
    {printf("\t caso -> caso entradas FLECHA_DOBLE bloque_instrucciones  \n");;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 381 ".\\moronico.y"
    {printf("\t caso -> entradas FLECHA_DOBLE bloque_instrucciones  \n");;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 386 ".\\moronico.y"
    {printf("\t entradas -> entrada_op entrada  \n");;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 390 ".\\moronico.y"
    {printf("\t entrada_op -> entrada_op entrada '|'  \n");;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 393 ".\\moronico.y"
    {printf("\t entrada -> expresion  \n");;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 394 ".\\moronico.y"
    {printf("\t entrada -> rango  \n");;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 395 ".\\moronico.y"
    {printf("\t entrada -> OTRO  \n");;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 398 ".\\moronico.y"
    {printf("\t instruccion_bucle -> clausula_iteracion bloque_instrucciones  \n");;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 401 ".\\moronico.y"
    {printf("\t clausula_iteracion -> PARA nombre EN objeto   \n");;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 402 ".\\moronico.y"
    {printf("\t clausula_iteracion -> REPITE ELEMENTO nombre EN rango DESCENDENTE  \n");;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 403 ".\\moronico.y"
    {printf("\t clausula_iteracion -> REPITE ELEMENTO nombre EN rango  \n");;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 404 ".\\moronico.y"
    {printf("\t clausula_iteracion -> MIENTRAS expresion  \n");;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 405 ".\\moronico.y"
    {printf("\t clausula_iteracion -> REPITE HASTA expresion  \n");;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 408 ".\\moronico.y"
    {printf("\t instruccion_probar_excepto -> PROBAR bloque_instrucciones EXCEPTO clausula_excepcion FINALMENTE bloque_instrucciones  \n");;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 409 ".\\moronico.y"
    {printf("\t instruccion_probar_excepto -> PROBAR bloque_instrucciones EXCEPTO clausula_excepcion  \n");;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 412 ".\\moronico.y"
    {printf("\t clausula_excepcion -> clausula_excepcion CUANDO nombre EJECUTA bloque_instrucciones  \n");;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 413 ".\\moronico.y"
    {printf("\t clausula_excepcion -> clausula_excepcion CUANDO nombre EJECUTA bloque_instrucciones  \n");;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 416 ".\\moronico.y"
    {printf("\t instruccion_lanzar -> LANZAR nombre ';'  \n");;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 424 ".\\moronico.y"
    {printf("\t objeto -> nombre  \n");;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 425 ".\\moronico.y"
    {printf("\t objeto -> objeto '[' expresion_comas ']'  \n");;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 426 ".\\moronico.y"
    {printf("\t objeto -> objeto '.' IDENTIFICADOR  \n");;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 429 ".\\moronico.y"
    {printf("\t expresion_constante -> CTC_ENTERA  \n");;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 430 ".\\moronico.y"
    {printf("\t expresion_constante -> CTC_REAL  \n");;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 431 ".\\moronico.y"
    {printf("\t expresion_constante -> CTC_CADENA  \n");;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 432 ".\\moronico.y"
    {printf("\t expresion_constante -> CTC_CARACTER  \n");;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 433 ".\\moronico.y"
    {printf("\t expresion_constante -> CTC_BOOLEANA  \n");;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 436 ".\\moronico.y"
    {printf("\t expresion_primaria -> expresion_constante  \n");;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 437 ".\\moronico.y"
    {printf("\t expresion_primaria -> objeto  \n");;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 438 ".\\moronico.y"
    {printf("\t expresion_primaria -> llamada_subprograma  \n");;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 439 ".\\moronico.y"
    {printf("\t expresion_primaria -> '(' expresion ')'  \n");;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 442 ".\\moronico.y"
    {printf("\t expresion_unitaria -> '-' expresion_primaria   \n");;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 443 ".\\moronico.y"
    {printf("\t expresion_unitaria -> expresion_primaria  \n");;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 446 ".\\moronico.y"
    {printf("\t expresion_potencia -> expresion_unitaria POTENCIA expresion_potencia  \n");;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 447 ".\\moronico.y"
    {printf("\t expresion_potencia -> expresion_unitaria  \n");;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 450 ".\\moronico.y"
    {printf("\t expresion_prod -> expresion_prod '*' expresion_potencia  \n");;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 451 ".\\moronico.y"
    {printf("\t expresion_prod -> expresion_prod '/' expresion_potencia  \n");;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 452 ".\\moronico.y"
    {printf("\t expresion_prod -> expresion_prod '%' expresion_potencia  \n");;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 453 ".\\moronico.y"
    {printf("\t expresion_prod -> expresion_potencia  \n");;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 456 ".\\moronico.y"
    {printf("\t expresion_sum -> expresion_sum '+' expresion_prod  \n");;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 457 ".\\moronico.y"
    {printf("\t expresion_sum -> expresion_sum '-' expresion_prod  \n");;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 458 ".\\moronico.y"
    {printf("\t expresion_sum -> expresion_prod  \n");;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 461 ".\\moronico.y"
    {printf("\t expresion_desplz -> expresion_desplz DESPI expresion_sum  \n");;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 462 ".\\moronico.y"
    {printf("\t expresion_desplz -> expresion_desplz DESPD expresion_sum  \n");;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 463 ".\\moronico.y"
    {printf("\t expresion_desplz -> expresion_sum  \n");;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 467 ".\\moronico.y"
    {printf("\t expresion_and_bin -> expresion_and_bin '&' expresion_desplz   \n");;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 468 ".\\moronico.y"
    {printf("\t expresion_and_bin -> expresion_desplz  \n");;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 471 ".\\moronico.y"
    {printf("\t expresion_or_bin -> expresion_or_bin '^' expresion_and_bin  \n");;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 472 ".\\moronico.y"
    {printf("\t expresion_or_bin -> expresion_and_bin  \n");;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 475 ".\\moronico.y"
    {printf("\t expresion_xor_bin -> expresion_xor_bin '@' expresion_or_bin  \n");;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 476 ".\\moronico.y"
    {printf("\t expresion_xor_bin -> expresion_or_bin  \n");;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 479 ".\\moronico.y"
    {printf("\t expresion_comparar -> expresion_comparar '<' expresion_xor_bin  \n");;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 480 ".\\moronico.y"
    {printf("\t expresion_comparar -> expresion_comparar '>' expresion_xor_bin  \n");;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 481 ".\\moronico.y"
    {printf("\t expresion_comparar -> expresion_comparar LEQ expresion_xor_bin  \n");;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 482 ".\\moronico.y"
    {printf("\t expresion_comparar -> expresion_comparar GEQ expresion_xor_bin  \n");;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 483 ".\\moronico.y"
    {printf("\t expresion_comparar -> expresion_comparar EQ expresion_xor_bin  \n");;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 484 ".\\moronico.y"
    {printf("\t expresion_comparar -> expresion_comparar NEQ expresion_xor_bin  \n");;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 485 ".\\moronico.y"
    {printf("\t expresion_comparar -> expresion_xor_bin  \n");;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 488 ".\\moronico.y"
    {printf("\t expresion_negacion -> '!' expresion_negacion  \n");;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 489 ".\\moronico.y"
    {printf("\t expresion_negacion -> expresion_comparar  \n");;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 492 ".\\moronico.y"
    {printf("\t expresion_and_logico -> expresion_negacion AND expresion_and_logico  \n");;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 493 ".\\moronico.y"
    {printf("\t expresion_and_logico -> expresion_negacion  \n");;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 497 ".\\moronico.y"
    {printf("\t expresion_or_logico -> expresion_and_logico OR expresion_or_logico  \n");;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 498 ".\\moronico.y"
    {printf("\t expresion_or_logico -> expresion_and_logico  \n");;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 502 ".\\moronico.y"
    {printf("\t expresion -> expresion_or_logico  \n");;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 503 ".\\moronico.y"
    {yyerrok; ;}
    break;



/* Line 1455 of yacc.c  */
#line 3408 "moronico.tab.c"
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
#line 505 ".\\moronico.y"


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

