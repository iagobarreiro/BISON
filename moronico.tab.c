
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
#define YYLAST   538

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  228
/* YYNRULES -- Number of states.  */
#define YYNSTATES  460

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
     504,   506,   511,   516,   519,   523,   526,   529,   530,   539,
     543,   545,   552,   557,   564,   569,   573,   576,   577,   581,
     583,   585,   587,   590,   595,   602,   608,   611,   615,   622,
     627,   633,   638,   642,   644,   649,   653,   655,   657,   659,
     661,   663,   665,   667,   669,   673,   676,   678,   682,   684,
     688,   692,   696,   698,   702,   706,   708,   712,   716,   718,
     722,   724,   728,   730,   734,   736,   740,   744,   748,   752,
     756,   760,   762,   765,   767,   771,   773,   777,   779
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
      80,     1,    81,    -1,   187,    -1,   123,    79,   187,    -1,
      52,   125,    30,   118,    -1,    -1,    83,   126,    84,    -1,
     126,    79,   127,    -1,   127,    -1,     1,    76,    -1,   201,
      32,   201,    -1,   201,    32,   201,    32,   201,    -1,    52,
      12,    30,   118,    -1,    20,    30,   118,    -1,    67,    77,
     131,    78,    -1,    77,     1,    78,    -1,   131,   114,    85,
     118,    76,    -1,   114,    85,   118,    76,    -1,    -1,    21,
     133,    -1,   133,   134,    -1,   134,    -1,   102,    85,   118,
      82,   135,    76,    -1,   201,    -1,    83,   136,    84,    -1,
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
     169,    -1,   170,    -1,   171,    -1,   175,    -1,   176,    -1,
     181,    -1,   183,    -1,   185,    -1,   186,    82,   201,    76,
      -1,    70,    72,   201,    76,    -1,    70,    76,    -1,    31,
     201,    76,    -1,    31,    76,    -1,   172,    76,    -1,    -1,
     102,    80,   174,    81,   173,   102,    80,    81,    -1,   174,
      79,   201,    -1,   201,    -1,    72,   201,    37,   105,    73,
     105,    -1,    72,   201,    37,   105,    -1,    35,    16,   201,
      69,   177,    76,    -1,   177,   178,    44,   105,    -1,   178,
      44,   105,    -1,   179,   180,    -1,    -1,   179,   180,    86,
      -1,   201,    -1,   127,    -1,    56,    -1,   182,   105,    -1,
      59,   102,    35,   186,    -1,    68,    34,   102,    35,   127,
      26,    -1,    68,    34,   102,    35,   127,    -1,    53,   201,
      -1,    68,    48,   201,    -1,    62,   105,    40,   184,    43,
     105,    -1,    62,   105,    40,   184,    -1,   184,    24,   102,
      33,   105,    -1,    24,   102,    33,   105,    -1,    50,   102,
      76,    -1,   102,    -1,   186,    83,   174,    84,    -1,   186,
      87,     9,    -1,     6,    -1,     7,    -1,     4,    -1,     5,
      -1,     3,    -1,   187,    -1,   186,    -1,   172,    -1,    80,
     201,    81,    -1,    88,   188,    -1,   188,    -1,   189,    60,
     190,    -1,   189,    -1,   191,    89,   190,    -1,   191,    90,
     190,    -1,   191,    91,   190,    -1,   190,    -1,   192,    92,
     191,    -1,   192,    88,   191,    -1,   191,    -1,   193,    28,
     192,    -1,   193,    27,   192,    -1,   192,    -1,   194,    93,
     193,    -1,   193,    -1,   195,    94,   194,    -1,   194,    -1,
     196,    95,   195,    -1,   195,    -1,   197,    96,   196,    -1,
     197,    97,   196,    -1,   197,    51,   196,    -1,   197,    46,
     196,    -1,   197,    38,   196,    -1,   197,    55,   196,    -1,
     196,    -1,    98,   198,    -1,   197,    -1,   198,    11,   199,
      -1,   198,    -1,   199,    57,   200,    -1,   199,    -1,   200,
      -1
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
     349,   352,   354,   355,   358,   359,   362,   365,   365,   369,
     370,   373,   374,   377,   380,   381,   386,   389,   390,   393,
     394,   395,   398,   401,   402,   403,   404,   405,   408,   409,
     412,   413,   416,   424,   425,   426,   429,   430,   431,   432,
     433,   436,   437,   438,   439,   442,   443,   446,   447,   450,
     451,   452,   453,   456,   457,   458,   461,   462,   463,   467,
     468,   471,   472,   475,   476,   479,   480,   481,   482,   483,
     484,   485,   488,   489,   492,   493,   497,   498,   502
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
  "instruccion_llamada", "llamada_subprograma", "$@1", "expresion_comas",
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
     167,   168,   169,   169,   170,   170,   171,   173,   172,   174,
     174,   175,   175,   176,   177,   177,   178,   179,   179,   180,
     180,   180,   181,   182,   182,   182,   182,   182,   183,   183,
     184,   184,   185,   186,   186,   186,   187,   187,   187,   187,
     187,   188,   188,   188,   188,   189,   189,   190,   190,   191,
     191,   191,   191,   192,   192,   192,   193,   193,   193,   194,
     194,   195,   195,   196,   196,   197,   197,   197,   197,   197,
     197,   197,   198,   198,   199,   199,   200,   200,   201
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
       1,     4,     4,     2,     3,     2,     2,     0,     8,     3,
       1,     6,     4,     6,     4,     3,     2,     0,     3,     1,
       1,     1,     2,     4,     6,     5,     2,     3,     6,     4,
       5,     4,     3,     1,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     1,     3,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     1,     2,     1,     3,     1,     3,     1,     1
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
     186,   187,     0,    52,    33,     0,     0,     0,     0,     7,
       0,     7,     7,     7,     0,     0,     0,     7,   141,   183,
       7,    14,   142,   143,   144,   145,     0,   146,   147,   148,
       0,   149,   150,     0,     0,    92,   134,   133,   134,   134,
      29,    68,   123,    27,     7,     7,     7,     7,     7,     0,
     101,   100,   105,   107,   108,   109,     0,     0,    63,     7,
       0,     7,     7,     7,     0,    58,   193,   192,   191,   196,
     198,   202,   205,   208,   210,   212,   214,   221,   223,   225,
     227,   228,     0,     7,     0,     7,    65,    51,     0,    50,
       7,     0,     0,     7,    12,   155,     0,     7,     0,   176,
       0,     0,     7,     7,     7,   153,     0,     7,    11,    13,
     156,   172,     7,     7,     0,   129,     0,     7,   132,     0,
     131,   122,    84,   101,     0,   113,    99,   112,     7,     7,
     103,   106,   111,     0,    62,    59,     0,   195,   222,     7,
      56,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,    54,     7,    64,     0,    53,     0,     0,    73,    91,
       7,    89,     7,     0,   154,     0,   182,     7,     0,     0,
     177,     0,     0,     0,   160,     0,     0,   185,   128,     0,
       0,   136,     7,     0,   103,     0,     0,   102,     7,     0,
     119,   120,   121,   118,     0,   115,   117,     7,   194,    57,
     197,   199,   200,   201,   204,   203,   207,   206,   209,   211,
     213,   219,   218,   217,   220,   215,   216,   224,   226,    60,
       0,     7,     0,   188,   183,    79,     0,     0,     0,    72,
       0,     0,    87,     7,   167,   183,   173,     7,   179,     7,
     152,   162,     7,   157,   151,   184,     7,     7,   135,   130,
     140,     0,     7,   114,     7,    98,   110,     0,   101,     7,
      67,     0,    77,     7,     7,     7,    74,     0,    75,     7,
      76,    90,    88,     0,   167,     0,     7,     0,     7,     0,
     175,     0,   159,     7,   139,   137,    95,   101,   116,   103,
      61,    66,    81,    83,    78,     0,     0,    86,   163,     0,
       0,   171,   170,   166,   169,     0,     0,   178,   174,   161,
       0,   138,   103,     0,     7,     7,     0,   165,   168,   181,
       0,     0,     0,    97,    80,    82,   164,   180,   158,    96
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,   139,     9,    20,    90,   140,     6,    16,
      24,    21,    27,    33,    45,   169,   161,    37,    38,    73,
      74,    75,    76,    77,   122,    78,   113,   184,   185,    79,
      80,    81,   205,    40,    50,    51,   287,   356,   357,   358,
      53,    88,    92,    82,    83,    84,   170,   250,   319,   171,
     172,   173,   174,   175,   324,   325,   326,    97,   176,   155,
      99,   100,   101,   102,   238,   310,   311,   162,   141,   142,
     143,   144,   145,   186,   413,   303,   147,   148,   404,   405,
     406,   433,   149,   150,   151,   368,   152,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   288
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -288
static const yytype_int16 yypact[] =
{
      23,   -12,  -288,  -288,    76,  -288,  -288,  -288,    38,    34,
      60,  -288,   132,   135,   326,   153,   161,  -288,   140,  -288,
    -288,   169,   169,   169,  -288,  -288,   221,    22,  -288,   238,
     238,   238,   285,   196,  -288,  -288,   222,   288,  -288,  -288,
     231,   231,   231,  -288,   129,  -288,   221,   418,  -288,   226,
     288,  -288,  -288,   240,   277,    74,   257,  -288,   215,   196,
    -288,  -288,  -288,   -11,   299,  -288,  -288,    16,  -288,   273,
     344,   235,  -288,   287,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,   368,  -288,   -26,   288,   377,
    -288,    74,  -288,  -288,  -288,  -288,  -288,    74,   169,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,    81,   331,  -288,
     368,   347,   248,   349,  -288,   306,   314,  -288,  -288,  -288,
    -288,  -288,   228,  -288,  -288,   305,    43,    42,   324,   263,
     397,  -288,   364,  -288,   240,    27,   -40,   364,  -288,   334,
     429,  -288,  -288,  -288,  -288,  -288,   341,  -288,  -288,  -288,
     240,  -288,  -288,   130,   343,    74,   342,  -288,   342,   342,
     169,   238,  -288,  -288,   331,  -288,  -288,    26,  -288,    55,
     350,    59,  -288,  -288,  -288,  -288,   352,   256,  -288,   368,
     353,   364,   184,   364,   166,  -288,  -288,   150,  -288,  -288,
     363,  -288,   211,   200,   197,   333,   338,   346,   164,   431,
     389,  -288,   411,   368,    66,   372,  -288,  -288,   386,  -288,
     327,    77,    96,   368,  -288,  -288,   375,   364,   379,  -288,
     421,   417,  -288,   364,   364,  -288,   424,   364,  -288,  -288,
    -288,  -288,   364,   364,   454,  -288,   390,  -288,  -288,   423,
    -288,  -288,   231,   350,   274,  -288,    59,  -288,   368,    26,
     404,  -288,    31,   391,  -288,  -288,   393,  -288,  -288,   364,
    -288,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   364,   364,
     364,  -288,   368,  -288,    97,  -288,   225,   396,  -288,  -288,
     327,  -288,   327,   103,  -288,   402,  -288,  -288,   451,   441,
    -288,   401,   240,   283,  -288,   405,   179,  -288,  -288,   142,
      99,  -288,   368,   240,   404,   403,   407,    59,    26,   400,
    -288,  -288,  -288,  -288,   410,   408,  -288,   331,  -288,  -288,
    -288,  -288,  -288,  -288,   211,   211,   200,   200,   197,   333,
     338,   346,   346,   346,   346,   346,   346,  -288,  -288,   457,
     414,   368,   409,   448,   -15,  -288,   199,   206,   207,  -288,
     420,   426,  -288,   327,  -288,  -288,   150,  -288,    -4,   364,
    -288,   427,   364,  -288,  -288,  -288,   368,  -288,  -288,  -288,
    -288,   416,   331,  -288,   395,  -288,  -288,    31,   350,   364,
    -288,   428,  -288,   327,   327,   327,  -288,   499,  -288,  -288,
    -288,  -288,  -288,   430,   432,   465,   268,   477,  -288,   240,
     485,   240,  -288,  -288,   458,  -288,  -288,   350,  -288,   404,
    -288,  -288,  -288,  -288,  -288,   469,   470,  -288,  -288,   471,
     240,  -288,  -288,   433,   411,   240,   483,  -288,  -288,  -288,
     437,  -288,   404,   440,   327,   327,   240,  -288,  -288,  -288,
     240,   439,   443,  -288,  -288,  -288,  -288,  -288,  -288,  -288
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -288,  -288,  -288,    -2,  -288,  -288,  -132,  -288,  -288,  -288,
    -288,   507,  -288,   478,   464,   -37,   336,  -288,   -21,   -64,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -256,  -288,
    -288,  -288,  -288,   -17,  -288,   -31,  -252,  -288,  -288,  -288,
     -33,  -288,  -288,  -288,  -288,  -288,  -160,  -231,  -287,  -144,
    -161,  -288,  -288,  -288,  -288,  -288,   138,  -288,    -1,  -288,
    -288,  -288,  -288,  -288,   183,  -288,   149,   367,   388,  -288,
    -288,  -288,  -288,   -22,  -288,   296,  -288,  -288,  -288,   126,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,   -83,   -60,   351,
    -288,    58,   107,   131,   262,   264,   261,   -78,  -288,   354,
     258,   259,  -107
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -105
static const yytype_int16 yytable[] =
{
       8,    10,   221,   329,   243,   202,   153,    58,    54,    55,
     251,   123,   314,    41,    42,    87,    48,    26,   231,    86,
     408,   125,   216,   246,     1,   219,    36,   381,   111,   394,
     226,   107,   224,    46,   355,    36,   225,    49,   360,   409,
     361,   320,    57,    13,   211,    72,   178,   166,    49,    93,
      57,   127,    -7,   104,    98,    94,    60,   153,    61,   126,
      62,   222,   212,    64,     7,   227,   108,   146,    -7,   109,
     321,    95,   177,   322,   256,   223,    11,   204,   323,    65,
     166,     2,    93,    72,    66,   251,    57,     3,    94,    96,
     154,   156,   157,   158,   159,    67,   160,    93,    34,   112,
     168,    35,   163,    94,    95,   317,    57,    57,    72,    68,
     295,   403,    57,   410,    12,   254,   300,   301,   146,    95,
     304,   104,    96,    71,    72,   305,   304,   213,   244,   218,
      56,   220,   443,   168,   104,   245,    14,    96,    -7,   281,
     248,   422,   423,   424,   242,   104,    15,   247,   285,   293,
     432,   282,   202,   289,   236,   452,   251,   419,   164,   290,
      17,   165,    57,    57,    49,    57,    36,   388,   284,    57,
     371,    19,   291,   349,   384,   377,   104,    72,   292,   362,
     378,   380,   351,    23,   316,   363,   442,   117,   118,   119,
     120,   121,   454,   455,   341,   342,   343,   344,   345,   346,
     309,    72,   272,    57,   117,   118,   119,   120,   121,   313,
     273,    72,   232,   233,   366,   274,    25,   234,   350,   275,
     299,   104,   417,   251,   267,   268,   352,   376,   117,   353,
     119,   120,   121,   233,    -7,    57,   116,   234,   117,   118,
     119,   120,   121,    28,    57,   259,    72,    57,   379,   180,
     260,   117,   118,   119,   120,   121,    32,    -7,   372,    39,
     276,   277,   202,   375,   181,   412,   117,   118,   119,   120,
     121,   117,   118,   119,   120,   121,    44,   437,   395,   439,
      72,   181,   420,   396,   354,   397,   399,   391,   265,   182,
     398,   400,   266,    43,   104,   365,   105,    -7,   447,   434,
     262,   263,   264,   449,    47,   181,    52,   208,   286,   209,
      72,    85,   414,   182,   456,    57,    57,    89,   457,   330,
     331,   332,   333,   183,   431,    57,    91,    18,   181,   110,
     117,   118,   119,   120,   121,   104,   182,   253,   103,   215,
     309,   239,   240,   181,    19,   115,   183,   -18,   181,    72,
     114,   182,   166,   104,    93,   315,   182,    29,    30,    31,
      94,   183,   372,   124,   373,   407,   183,   117,   118,   119,
     120,   121,   334,   335,    72,    57,    95,   179,   128,   203,
      57,    60,    57,    61,   206,    62,    -7,   210,    64,   117,
     118,   119,   120,   121,    96,   207,   167,   426,   336,   337,
     -18,   -18,   214,   -18,    65,   168,   436,   181,   129,    66,
     286,   440,   130,   217,   227,   182,   166,   230,    93,   235,
      67,   249,   237,   261,    94,   183,   269,   131,   252,   255,
     132,    60,   270,    61,    68,    62,   133,    63,    64,   134,
      95,   271,   278,   280,   181,   135,   279,   136,    71,   137,
     283,   294,   182,   138,    65,   296,   297,   298,    96,    66,
     129,   302,   183,   307,   130,   318,   308,   312,   327,   168,
      67,   364,   359,  -104,   328,   367,   369,   370,   385,   131,
     382,   374,   132,   383,    68,    69,   386,   387,   133,   389,
     390,   134,   393,   392,   416,    70,   401,   135,    71,   136,
     411,   137,   402,   425,   421,   138,   427,   228,   428,   430,
     435,   438,   441,   444,   445,   446,   450,   451,   453,   448,
     458,   459,    22,   106,    59,   418,   415,   241,   229,   306,
     429,   338,   340,   257,   339,     0,   347,   258,   348
};

static const yytype_int16 yycheck[] =
{
       2,     3,   134,   259,   164,   112,    89,    44,    41,    42,
     171,    71,   243,    30,    31,    52,    37,    19,   150,    50,
      24,    85,   129,   167,     1,   132,    28,   314,    12,    44,
     137,    42,    72,    35,   286,    37,    76,    39,   290,    43,
     292,    10,    44,     9,     1,    47,   110,    21,    50,    23,
      52,    88,     9,    79,    55,    29,    13,   140,    15,    85,
      17,    34,   126,    20,    76,    80,    77,    89,     9,    80,
      39,    45,   109,    42,   181,    48,     0,   114,    47,    36,
      21,    58,    23,    85,    41,   246,    88,    64,    29,    63,
      91,    93,    94,    95,    96,    52,    97,    23,    76,    83,
      74,    79,   104,    29,    45,   249,   108,   109,   110,    66,
     217,   363,   114,   369,    76,   179,   223,   224,   140,    45,
     227,    79,    63,    80,   126,   232,   233,    85,   165,   131,
       1,   133,   419,    74,    79,   166,    76,    63,     9,   203,
      85,   393,   394,   395,   161,    79,    14,   168,   208,   213,
     406,    85,   259,    76,   155,   442,   317,   388,    77,    82,
      25,    80,   164,   165,   166,   167,   168,   327,   205,   171,
     302,    18,    76,   280,   318,    76,    79,   179,    82,    76,
      81,   313,    85,    22,   248,    82,   417,     3,     4,     5,
       6,     7,   444,   445,   272,   273,   274,   275,   276,   277,
     237,   203,    38,   205,     3,     4,     5,     6,     7,   242,
      46,   213,    82,    83,   297,    51,    76,    87,   282,    55,
     222,    79,   382,   384,    27,    28,     1,    85,     3,     4,
       5,     6,     7,    83,     9,   237,     1,    87,     3,     4,
       5,     6,     7,    74,   246,    79,   248,   249,   312,     1,
      84,     3,     4,     5,     6,     7,    35,     9,    79,    21,
      96,    97,   369,    84,    80,   372,     3,     4,     5,     6,
       7,     3,     4,     5,     6,     7,    80,   409,    79,   411,
     282,    80,   389,    84,   286,    79,    79,   351,    88,    88,
      84,    84,    92,     8,    79,   297,    81,     9,   430,   406,
      89,    90,    91,   435,    82,    80,    75,    79,    83,    81,
     312,    85,   376,    88,   446,   317,   318,    77,   450,   261,
     262,   263,   264,    98,    56,   327,    49,     1,    80,    30,
       3,     4,     5,     6,     7,    79,    88,    81,    81,    76,
     377,   158,   159,    80,    18,     1,    98,    21,    80,   351,
      77,    88,    21,    79,    23,    81,    88,    21,    22,    23,
      29,    98,    79,    76,    81,   367,    98,     3,     4,     5,
       6,     7,   265,   266,   376,   377,    45,    30,     1,    30,
     382,    13,   384,    15,    78,    17,     9,    82,    20,     3,
       4,     5,     6,     7,    63,    81,    65,   399,   267,   268,
      74,    75,    78,    77,    36,    74,   408,    80,    31,    41,
      83,   413,    35,    16,    80,    88,    21,    76,    23,    76,
      52,    71,    80,    60,    29,    98,    93,    50,    76,    76,
      53,    13,    94,    15,    66,    17,    59,    19,    20,    62,
      45,    95,    11,    32,    80,    68,    57,    70,    80,    72,
      78,    76,    88,    76,    36,    76,    35,    40,    63,    41,
      31,    37,    98,     9,    35,    61,    76,    44,    77,    74,
      52,    69,    76,    78,    81,    24,    35,    76,    78,    50,
      77,    76,    53,    76,    66,    67,    76,    79,    59,    32,
      76,    62,    44,    84,    78,    77,    76,    68,    80,    70,
      73,    72,    76,     4,    76,    76,    76,    78,    76,    44,
      33,    26,    54,    44,    44,    44,    33,    80,    78,    86,
      81,    78,    15,    59,    46,   387,   377,   160,   140,   233,
     404,   269,   271,   182,   270,    -1,   278,   183,   279
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
       6,     7,   123,   187,    76,   118,    85,   114,     1,    31,
      35,    50,    53,    59,    62,    68,    70,    72,    76,   102,
     106,   167,   168,   169,   170,   171,   172,   175,   176,   181,
     182,   183,   185,   186,   157,   158,   102,   102,   102,   102,
     157,   115,   166,   102,    77,    80,    21,    65,    74,   114,
     145,   148,   149,   150,   151,   152,   157,   114,   118,    30,
       1,    80,    88,    98,   126,   127,   172,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,    30,   114,   131,    78,    81,    79,    81,
      82,     1,   118,    85,    78,    76,   201,    16,   102,   201,
     102,   105,    34,    48,    72,    76,   201,    80,    78,   167,
      76,   105,    82,    83,    87,    76,   157,    80,   163,   163,
     163,   166,   132,   145,   114,   134,   148,   117,    85,    71,
     146,   149,    76,    81,   118,    76,   201,   188,   198,    79,
      84,    60,    89,    90,    91,    88,    92,    27,    28,    93,
      94,    95,    38,    46,    51,    55,    96,    97,    11,    57,
      32,   118,    85,    78,   114,   187,    83,   135,   201,    76,
      82,    76,    82,   118,    76,   201,    76,    35,    40,   102,
     201,   201,    37,   174,   201,   201,   174,     9,    76,   114,
     164,   165,    44,   139,   146,    81,   118,   148,    61,   147,
      10,    39,    42,    47,   153,   154,   155,    77,    81,   127,
     190,   190,   190,   190,   191,   191,   192,   192,   193,   194,
     195,   196,   196,   196,   196,   196,   196,   199,   200,   201,
     118,    85,     1,     4,   102,   135,   136,   137,   138,    76,
     135,   135,    76,    82,    69,   102,   186,    24,   184,    35,
      76,   105,    79,    81,    76,    84,    85,    76,    81,   118,
     105,   147,    77,    76,   148,    78,    76,    79,   145,    32,
      76,   118,    84,    44,    44,    79,    84,    79,    84,    79,
      84,    76,    76,   135,   177,   178,   179,   102,    24,    43,
     127,    73,   201,   173,   118,   165,    78,   145,   155,   146,
     201,    76,   135,   135,   135,     4,   102,    76,    76,   178,
      44,    56,   127,   180,   201,    33,   102,   105,    26,   105,
     102,    54,   146,   147,    44,    44,    44,   105,    86,   105,
      33,    80,   147,    78,   135,   135,   105,   105,    81,    78
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



/* Line 1455 of yacc.c  */
#line 3395 "moronico.tab.c"
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
#line 504 ".\\moronico.y"


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

