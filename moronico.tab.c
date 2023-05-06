
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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   701

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  216
/* YYNRULES -- Number of states.  */
#define YYNSTATES  429

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
       0,     0,     3,     5,     7,    12,    15,    18,    21,    22,
      26,    32,    35,    39,    42,    44,    50,    57,    63,    64,
      68,    72,    78,    79,    82,    83,    87,    91,    93,    94,
      97,   100,   102,   107,   111,   113,   115,   117,   119,   121,
     123,   125,   127,   129,   131,   133,   135,   137,   139,   141,
     145,   147,   151,   156,   160,   162,   167,   168,   171,   176,
     180,   185,   191,   196,   197,   200,   203,   205,   211,   213,
     217,   221,   225,   229,   231,   237,   241,   247,   251,   252,
     255,   262,   267,   270,   272,   274,   284,   295,   305,   314,
     317,   319,   320,   323,   324,   327,   329,   332,   334,   336,
     338,   343,   346,   349,   352,   357,   359,   363,   365,   367,
     369,   371,   373,   377,   380,   382,   384,   386,   388,   391,
     393,   399,   403,   407,   410,   411,   415,   417,   421,   426,
     430,   435,   437,   439,   441,   443,   445,   447,   449,   451,
     453,   455,   460,   465,   468,   472,   475,   478,   486,   490,
     492,   499,   504,   511,   516,   520,   523,   524,   528,   530,
     532,   534,   537,   542,   549,   555,   558,   562,   569,   574,
     579,   583,   585,   590,   594,   596,   598,   600,   602,   604,
     606,   608,   610,   614,   617,   619,   623,   625,   629,   633,
     637,   639,   643,   647,   649,   653,   657,   659,   663,   665,
     669,   671,   675,   677,   681,   685,   689,   693,   697,   701,
     703,   706,   708,   712,   714,   718,   720
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     100,     0,    -1,   101,    -1,   107,    -1,    64,   102,    76,
     104,    -1,     1,    76,    -1,   103,    47,    -1,     1,    76,
      -1,    -1,   103,    47,    23,    -1,   110,   115,   132,   139,
     105,    -1,     1,    76,    -1,    77,   106,    78,    -1,   106,
     167,    -1,   167,    -1,    57,   102,    76,   108,   109,    -1,
       7,   110,   115,   132,   139,   141,    -1,    15,   115,   132,
     139,   156,    -1,    -1,    11,   111,    76,    -1,   102,   112,
     113,    -1,   111,    79,   102,   112,   113,    -1,    -1,    33,
      59,    -1,    -1,    80,   114,    81,    -1,   114,    79,   102,
      -1,   102,    -1,    -1,    74,   116,    -1,   116,   117,    -1,
     117,    -1,   102,    82,   118,    76,    -1,   102,    82,   119,
      -1,   102,    -1,   120,    -1,   121,    -1,   122,    -1,   124,
      -1,   128,    -1,   129,    -1,   130,    -1,   142,    -1,    34,
      -1,    66,    -1,     6,    -1,    10,    -1,     8,    -1,    39,
      -1,    80,   123,    81,    -1,   186,    -1,   123,    79,   186,
      -1,    51,   125,    28,   118,    -1,   125,    79,   126,    -1,
     126,    -1,   200,    30,   200,   127,    -1,    -1,    30,   200,
      -1,    51,     5,    28,   118,    -1,    13,    28,   118,    -1,
      67,    77,   131,    78,    -1,   131,   114,    83,   118,    76,
      -1,   114,    83,   118,    76,    -1,    -1,    14,   133,    -1,
     133,   134,    -1,   134,    -1,   102,    76,   118,    82,   135,
      -1,   200,    -1,    84,   136,    85,    -1,    84,   137,    85,
      -1,    84,   138,    85,    -1,   136,    79,   135,    -1,   135,
      -1,   137,    79,    17,    42,   135,    -1,    17,    42,   135,
      -1,   138,    79,   102,    42,   135,    -1,   102,    42,   135,
      -1,    -1,    75,   140,    -1,   114,    83,   118,    82,   135,
      76,    -1,   114,    83,   118,    76,    -1,    48,   158,    -1,
     143,    -1,   144,    -1,    12,    40,    80,    81,    77,   145,
     146,   147,    78,    -1,    12,    40,    80,   114,    81,    77,
     145,   146,   147,    78,    -1,    12,    80,   114,    81,    77,
     145,   146,   147,    78,    -1,    12,    80,    81,    77,   145,
     146,   147,    78,    -1,    65,   148,    -1,   148,    -1,    -1,
      71,   148,    -1,    -1,    61,   148,    -1,   149,    -1,   148,
     149,    -1,   150,    -1,   151,    -1,   152,    -1,   157,    76,
     153,    76,    -1,   157,    76,    -1,    74,   117,    -1,    14,
     134,    -1,   114,    83,   118,    76,    -1,   154,    -1,   154,
      79,   155,    -1,   155,    -1,    45,    -1,     3,    -1,    37,
      -1,    40,    -1,   156,   157,   166,    -1,   157,   166,    -1,
     159,    -1,   160,    -1,   161,    -1,   162,    -1,   158,   157,
      -1,   157,    -1,    43,   102,   163,    42,   118,    -1,    63,
     102,   163,    -1,    21,   102,   163,    -1,    27,   102,    -1,
      -1,    80,   164,    81,    -1,   165,    -1,   164,    76,   165,
      -1,   114,    83,   118,    53,    -1,   114,    83,   118,    -1,
     115,   132,   139,   105,    -1,    76,    -1,   168,    -1,   169,
      -1,   170,    -1,   171,    -1,   174,    -1,   175,    -1,   180,
      -1,   182,    -1,   184,    -1,   185,    82,   200,    76,    -1,
      70,    72,   200,    76,    -1,    70,    76,    -1,    29,   200,
      76,    -1,    29,    76,    -1,   172,    76,    -1,   102,    80,
     173,    81,   102,    80,    81,    -1,   173,    79,   200,    -1,
     200,    -1,    72,   200,    35,   105,    73,   105,    -1,    72,
     200,    35,   105,    -1,    33,     9,   200,    69,   176,    76,
      -1,   176,   177,    42,   105,    -1,   177,    42,   105,    -1,
     178,   179,    -1,    -1,   178,   179,    86,    -1,   200,    -1,
     126,    -1,    55,    -1,   181,   105,    -1,    58,   102,    33,
     185,    -1,    68,    32,   102,    33,   126,    24,    -1,    68,
      32,   102,    33,   126,    -1,    52,   200,    -1,    68,    46,
     200,    -1,    62,   105,    38,   183,    41,   105,    -1,    62,
     105,    38,   183,    -1,    22,   102,    31,   105,    -1,    49,
     102,    76,    -1,   102,    -1,   185,    84,   173,    85,    -1,
     185,    87,    47,    -1,    19,    -1,    20,    -1,    17,    -1,
      18,    -1,    16,    -1,   186,    -1,   185,    -1,   172,    -1,
      80,   200,    81,    -1,    88,   187,    -1,   187,    -1,   188,
      60,   189,    -1,   188,    -1,   190,    89,   189,    -1,   190,
      90,   189,    -1,   190,    91,   189,    -1,   189,    -1,   191,
      92,   190,    -1,   191,    88,   190,    -1,   190,    -1,   192,
      26,   191,    -1,   192,    25,   191,    -1,   191,    -1,   193,
      93,   192,    -1,   192,    -1,   194,    94,   193,    -1,   193,
      -1,   195,    95,   192,    -1,   194,    -1,   196,    96,   195,
      -1,   196,    97,   195,    -1,   196,    50,   195,    -1,   196,
      44,   195,    -1,   196,    36,   195,    -1,   196,    54,   195,
      -1,   195,    -1,    98,   197,    -1,   196,    -1,   198,     4,
     197,    -1,   197,    -1,   199,    56,   198,    -1,   198,    -1,
     199,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    25,    25,    26,    29,    30,    33,    34,    37,    38,
      42,    43,    46,    49,    50,    53,    56,    59,    61,    62,
      65,    66,    69,    70,    73,    74,    77,    78,    86,    87,
      90,    91,    94,    95,    98,    99,   100,   101,   102,   103,
     104,   107,   108,   111,   112,   113,   114,   115,   118,   121,
     124,   125,   128,   131,   132,   135,   138,   139,   142,   145,
     148,   151,   152,   160,   160,   163,   164,   167,   170,   171,
     172,   173,   176,   177,   180,   181,   184,   185,   188,   189,
     192,   193,   197,   201,   202,   205,   206,   210,   211,   215,
     216,   219,   220,   223,   224,   227,   228,   231,   232,   233,
     234,   235,   238,   241,   244,   247,   250,   251,   254,   255,
     256,   257,   266,   267,   270,   271,   272,   273,   276,   277,
     279,   282,   285,   288,   291,   292,   295,   296,   299,   300,
     303,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   325,   327,   328,   331,   332,   335,   338,   342,   343,
     346,   347,   350,   353,   354,   357,   359,   360,   363,   364,
     365,   368,   371,   372,   373,   374,   375,   378,   379,   382,
     385,   393,   394,   395,   398,   399,   400,   401,   402,   405,
     406,   407,   408,   411,   412,   415,   416,   419,   420,   421,
     422,   425,   426,   427,   430,   431,   432,   436,   437,   440,
     441,   444,   445,   448,   449,   450,   451,   452,   453,   454,
     457,   458,   461,   462,   466,   467,   471
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
       0,    99,   100,   100,   101,   101,   102,   102,   103,   103,
     104,   104,   105,   106,   106,   107,   108,   109,   110,   110,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   118,   118,   118,   118,
     118,   119,   119,   120,   120,   120,   120,   120,   121,   122,
     123,   123,   124,   125,   125,   126,   127,   127,   128,   129,
     130,   131,   131,   132,   132,   133,   133,   134,   135,   135,
     135,   135,   136,   136,   137,   137,   138,   138,   139,   139,
     140,   140,   141,   142,   142,   143,   143,   144,   144,   145,
     145,   146,   146,   147,   147,   148,   148,   149,   149,   149,
     149,   149,   150,   151,   152,   153,   154,   154,   155,   155,
     155,   155,   156,   156,   157,   157,   157,   157,   158,   158,
     159,   160,   161,   162,   163,   163,   164,   164,   165,   165,
     166,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   168,   169,   169,   170,   170,   171,   172,   173,   173,
     174,   174,   175,   176,   176,   177,   178,   178,   179,   179,
     179,   180,   181,   181,   181,   181,   181,   182,   182,   183,
     184,   185,   185,   185,   186,   186,   186,   186,   186,   187,
     187,   187,   187,   188,   188,   189,   189,   190,   190,   190,
     190,   191,   191,   191,   192,   192,   192,   193,   193,   194,
     194,   195,   195,   196,   196,   196,   196,   196,   196,   196,
     197,   197,   198,   198,   199,   199,   200
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     2,     2,     0,     3,
       5,     2,     3,     2,     1,     5,     6,     5,     0,     3,
       3,     5,     0,     2,     0,     3,     3,     1,     0,     2,
       2,     1,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     4,     3,     1,     4,     0,     2,     4,     3,
       4,     5,     4,     0,     2,     2,     1,     5,     1,     3,
       3,     3,     3,     1,     5,     3,     5,     3,     0,     2,
       6,     4,     2,     1,     1,     9,    10,     9,     8,     2,
       1,     0,     2,     0,     2,     1,     2,     1,     1,     1,
       4,     2,     2,     2,     4,     1,     3,     1,     1,     1,
       1,     1,     3,     2,     1,     1,     1,     1,     2,     1,
       5,     3,     3,     2,     0,     3,     1,     3,     4,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     2,     3,     2,     2,     7,     3,     1,
       6,     4,     6,     4,     3,     2,     0,     3,     1,     1,
       1,     2,     4,     6,     5,     2,     3,     6,     4,     4,
       3,     1,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     3,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     1,
       2,     1,     3,     1,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     3,     5,     0,     0,
       0,     0,     1,     7,     0,     6,     0,    18,     0,     9,
       0,     0,     4,    28,    28,    28,    15,    11,    22,     0,
       0,    63,    63,    63,     0,    24,    19,     0,     0,     0,
      31,     0,    78,    78,    78,    23,     0,    20,    22,     0,
      30,     0,     0,    66,     0,     0,     0,     0,    27,     0,
      24,    45,    47,    46,     0,     0,    43,    48,     0,    44,
       0,     0,    34,     0,    33,    35,    36,    37,    38,    39,
      40,    41,    42,    83,    84,     0,    65,     0,    79,     0,
      10,     0,    16,     0,     0,     0,     0,    17,    28,   114,
     115,   116,   117,     0,    25,    21,     0,     0,     0,     0,
     178,   176,   177,   174,   175,     0,     0,     0,   171,     0,
      54,   181,   180,   179,   184,   186,   190,   193,   196,   198,
     200,   202,   209,   211,   213,   215,   216,     0,     0,     0,
      50,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   131,     0,    14,   132,   133,   134,   135,
       0,   136,   137,   138,     0,   139,   140,     0,   119,    82,
     124,   123,   124,   124,    28,    63,   113,    26,     0,     0,
       0,    59,     0,     0,   183,   210,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,   145,     0,     0,
       0,   165,     0,     0,     0,     0,     0,   143,     0,    12,
      13,   146,   161,     0,   118,     0,   122,     0,   121,   112,
      78,     0,     0,     0,     0,    58,   182,     0,   149,    52,
      53,     0,   173,   185,   187,   188,   189,   192,   191,   195,
     194,   197,   199,   201,   207,   206,   205,   208,   203,   204,
     212,   214,    56,     0,    60,     0,    51,     0,    67,    68,
      81,     0,   144,     0,   170,     0,     0,     0,   166,     0,
       0,     0,     0,     0,   126,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,    95,    97,    98,    99,     0,
       0,     0,     0,   172,     0,    55,     0,     0,   176,   171,
      73,     0,     0,     0,     0,   156,   171,   162,     0,   168,
       0,   142,   151,   141,     0,     0,   125,   120,   130,    91,
       0,   103,     0,   102,     0,     0,    93,    96,   101,    91,
     148,     0,    57,    62,     0,     0,     0,     0,    69,     0,
      70,     0,    71,    80,   156,     0,     0,     0,     0,   164,
       0,   129,   127,    93,    91,     0,     0,     0,     0,   109,
     110,   111,   108,     0,   105,   107,    93,     0,    61,    75,
      77,    72,     0,     0,   152,     0,     0,   160,   159,   155,
     158,     0,   167,   163,   150,   128,     0,    93,   104,     0,
      88,   100,     0,     0,   147,     0,     0,     0,   154,   157,
     169,    85,     0,   106,    87,    74,    76,   153,    86
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,   118,    10,    22,    90,   154,     6,    18,
      26,    23,    29,    35,    47,   302,   175,    39,    40,    73,
      74,    75,    76,    77,   139,    78,   119,   120,   315,    79,
      80,    81,   212,    42,    52,    53,   278,   321,   322,   323,
      55,    88,    92,    82,    83,    84,   303,   346,   378,   304,
     305,   306,   307,   308,   383,   384,   385,    97,   309,   169,
      99,   100,   101,   102,   236,   293,   294,   176,   155,   156,
     157,   158,   159,   121,   247,   161,   162,   364,   365,   366,
     399,   163,   164,   165,   329,   166,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   279
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -280
static const yytype_int16 yypact[] =
{
      17,   -28,    30,    30,    33,  -280,  -280,  -280,    -7,    62,
      41,    92,  -280,  -280,   170,   110,    65,   175,   136,  -280,
     142,    30,  -280,   128,   128,   128,  -280,  -280,   193,    99,
      30,   216,   216,   216,   187,   174,  -280,    30,   168,   570,
    -280,    30,   192,   192,   192,  -280,    30,  -280,   193,   181,
    -280,   186,   559,  -280,    30,   195,   221,    57,  -280,   102,
     174,  -280,  -280,  -280,     6,   266,  -280,  -280,   269,  -280,
     219,   180,  -280,   227,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,  -280,   422,  -280,   -47,  -280,   567,
    -280,    57,  -280,    30,    30,    30,    30,    57,   128,  -280,
    -280,  -280,  -280,    30,  -280,  -280,   226,    21,   422,   279,
    -280,  -280,  -280,  -280,  -280,   395,    42,   395,   229,    -4,
    -280,  -280,    12,  -280,  -280,   251,  -280,   145,    73,   233,
     220,   231,   239,   116,  -280,   310,   280,   305,    30,   135,
    -280,  -280,   257,   422,   304,   332,    30,   395,    30,   195,
       8,   -31,   395,  -280,   443,  -280,  -280,  -280,  -280,  -280,
     268,  -280,  -280,  -280,   195,  -280,  -280,    63,  -280,    57,
     265,  -280,   265,   265,   128,   216,  -280,  -280,    26,   270,
     140,  -280,   422,   267,  -280,  -280,   395,   422,   395,   395,
     299,   420,   420,   420,   420,   420,   420,   420,   420,   420,
     420,   420,   420,   420,   420,   420,   420,   420,   395,   395,
     395,   105,    20,   180,  -280,   311,    34,  -280,   274,   395,
     284,  -280,   328,   324,    30,   395,   395,  -280,   329,  -280,
    -280,  -280,  -280,   395,  -280,    30,  -280,   321,  -280,  -280,
     192,   288,   144,   627,   289,  -280,  -280,   159,  -280,  -280,
    -280,    36,  -280,  -280,  -280,  -280,  -280,   145,   145,    73,
      73,   233,   220,   233,   239,   239,   239,   239,   239,   239,
    -280,   310,   338,   422,  -280,   124,  -280,   336,  -280,  -280,
    -280,   311,  -280,   300,  -280,    30,   348,   339,  -280,   297,
     195,   301,   125,    98,  -280,   422,   195,   627,   302,    30,
     210,    30,   126,   307,   477,  -280,  -280,  -280,  -280,   306,
     627,   395,    30,  -280,   395,  -280,   309,   422,   334,     7,
    -280,    38,    49,    52,   317,  -280,  -280,    12,    30,   340,
     395,  -280,   325,  -280,   422,    30,  -280,  -280,  -280,   307,
     627,  -280,   496,  -280,   422,   210,   333,  -280,   122,   307,
    -280,   320,  -280,  -280,   327,   311,   311,   311,  -280,   380,
    -280,    30,  -280,  -280,   330,   359,   370,   373,   195,   381,
     195,   355,  -280,   333,   307,   342,   515,   210,   341,  -280,
    -280,  -280,  -280,   346,   331,  -280,   333,   345,  -280,  -280,
    -280,  -280,   385,   387,  -280,   389,   195,  -280,  -280,   347,
     305,   195,  -280,  -280,  -280,  -280,   363,   333,  -280,   552,
    -280,  -280,   122,   365,  -280,   311,   311,   195,  -280,  -280,
    -280,  -280,   367,  -280,  -280,  -280,  -280,  -280,  -280
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -280,  -280,  -280,    -2,  -280,  -280,  -141,  -280,  -280,  -280,
    -280,   429,  -280,   399,   388,   -43,   294,  -280,   -37,   -78,
    -280,  -280,  -280,  -280,  -280,  -280,  -280,  -176,  -280,  -280,
    -280,  -280,  -280,   -19,  -280,   -48,  -243,  -280,  -280,  -280,
     -34,  -280,  -280,  -280,  -280,  -280,  -268,  -231,  -254,  -274,
    -279,  -280,  -280,  -280,  -280,  -280,    37,  -280,   -40,  -280,
    -280,  -280,  -280,  -280,  -117,  -280,   117,   277,   303,  -280,
    -280,  -280,  -280,   -74,   264,  -280,  -280,  -280,    90,  -280,
    -280,  -280,  -280,  -280,  -280,  -280,   -84,   -55,   343,  -280,
      51,    95,   103,    64,   255,  -280,    75,  -280,   -97,   253,
    -280,   -62
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -95
static const yytype_int16 yytable[] =
{
       9,    11,    50,    59,    86,   167,   137,   142,   223,    56,
      57,    87,   250,    43,    44,   160,   140,    98,     1,    28,
     185,     8,     8,   232,   187,   347,   342,     8,    38,   339,
     181,     8,   103,    12,   320,    48,   143,    38,   324,    51,
     224,   226,   349,     8,    58,   227,   106,    72,     7,   356,
      51,   168,    58,   183,   225,   237,   238,   174,   110,   111,
     112,   113,   114,   347,   180,   216,    20,    -8,    -8,    13,
     167,   376,   374,    -8,     2,   188,    21,    -8,    93,   -18,
     160,     3,   218,    72,    94,   221,   107,   186,    15,    -8,
     228,   170,   171,   172,   173,   211,   189,   347,   274,   190,
      95,   177,   179,   409,   245,    58,    72,   241,   373,   249,
     280,   270,   389,   390,   391,   311,   281,   357,   386,   406,
      96,   313,   115,   358,   248,   379,   137,   248,   359,   234,
     347,   361,   413,    19,   360,   242,    58,   362,    14,   -18,
     -18,    72,   -18,   407,   220,   233,   222,   189,   272,   332,
     190,    25,   202,   422,   369,   338,   240,   283,   276,   380,
     203,   195,   381,   288,   289,   196,   204,   382,    16,   275,
     205,   291,   425,   426,   335,    36,    58,    17,    37,   336,
      72,   103,     8,   104,   103,    72,    21,    61,   273,    62,
     398,    63,   292,    64,    65,   316,   110,   111,   112,   113,
     114,   327,    30,   103,   103,   103,   296,   317,   334,   344,
      58,     8,   206,   207,   213,    66,   214,   337,    27,   103,
      67,   244,   287,   103,   299,   298,    34,   402,    -8,   404,
      41,    93,    68,    58,   192,   193,   194,    94,   311,   354,
     312,    58,   253,   254,   255,   256,    45,    69,    70,   350,
      49,   341,   352,    95,    46,   418,   371,    -8,   197,   198,
     420,    71,    85,   261,   343,   263,   375,    54,   137,    91,
       8,    72,    89,    96,   109,   319,   427,   264,   265,   266,
     267,   268,   269,   326,   301,   110,   111,   112,   113,   114,
     257,   258,   292,    72,   108,    58,   138,    51,    58,    38,
     259,   260,    58,   141,   400,     8,   178,   182,    58,   186,
     351,   191,     8,   199,   208,    72,    -8,    31,    32,    33,
     110,   111,   112,   113,   114,   200,   367,   110,   111,   112,
     113,   114,    72,    58,   201,   210,   209,     8,    58,   215,
      58,   219,    72,    58,   231,   235,   252,   243,   246,   115,
     282,    -8,   110,   318,   112,   113,   114,   116,    -8,   393,
     284,   285,   286,   295,   290,   297,   310,   117,   314,   325,
     328,     8,   330,   331,    58,    58,   355,   333,   345,   340,
     217,   368,   348,    -8,   115,   353,   110,   111,   112,   113,
     114,   115,   116,   363,   377,   277,     8,   392,   370,   116,
     387,   396,   117,   388,   401,   403,   394,    58,   405,   117,
     412,   110,   111,   112,   113,   114,   115,    -8,   408,   410,
     277,     8,   411,     8,   116,   397,   414,   415,    61,   416,
      62,   417,    63,   419,   117,    65,   110,   111,   112,   113,
     114,   421,    -8,   424,     8,   428,    24,    60,   105,   423,
     115,   239,   372,   251,   395,   262,    66,   230,   116,   184,
       0,    67,   271,     0,     0,     0,     0,    -8,   117,    -8,
       0,     0,   144,    68,     0,   115,   145,     0,     8,     0,
       0,     0,     0,   116,     0,     0,     0,     0,    69,     0,
      -8,   299,   146,   117,     0,   147,     0,     8,    93,     0,
     115,   148,    71,     0,    94,   149,     0,     0,   116,     0,
     299,   150,     0,   151,     0,   152,     8,    93,     0,   153,
      95,   229,     0,    94,    -8,     0,     0,     0,     0,   299,
       0,     0,     0,     0,     0,     0,    93,     0,   -90,    95,
      96,     0,    94,    -8,     0,     0,     0,     0,   -90,     0,
       0,   301,     0,     8,     0,   -90,     0,   -89,    95,    96,
       8,     0,    -8,     0,     0,     0,   299,   -89,     8,     0,
     301,     8,     0,    93,   -89,     0,   -92,     0,    96,    94,
     -64,     0,     0,     0,   -29,     0,   -64,     0,     0,   301,
       0,   -29,     0,   -92,     0,    95,   144,   -29,     0,    -8,
     145,     0,   -64,     0,     0,     0,    -8,   -64,     0,     0,
       0,     0,     0,   -29,    -8,    96,   146,    -8,   -29,   147,
       0,     0,   -64,     0,     0,   148,   301,     0,     8,   149,
     -94,     0,     0,   -29,   -64,   150,   -64,   151,     0,   152,
       0,   299,     0,   153,     0,   -29,     0,   -29,    93,     0,
       0,     0,     0,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,     0,     0,     0,    -8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      96,     0,   300,     0,     0,     0,     0,     0,     0,     0,
       0,   301
};

static const yytype_int16 yycheck[] =
{
       2,     3,    39,    46,    52,    89,    68,    85,   149,    43,
      44,    54,   188,    32,    33,    89,    71,    57,     1,    21,
     117,     1,     1,   164,    28,   304,   300,     1,    30,   297,
     108,     1,    79,     0,   277,    37,    83,    39,   281,    41,
      32,    72,   310,     1,    46,    76,    40,    49,    76,    42,
      52,    91,    54,   115,    46,   172,   173,    97,    16,    17,
      18,    19,    20,   342,   107,   143,     1,    47,    47,    76,
     154,   345,   340,    47,    57,    79,    11,    47,    21,    14,
     154,    64,   144,    85,    27,   147,    80,    80,    47,    47,
     152,    93,    94,    95,    96,   138,    84,   376,    78,    87,
      43,   103,    81,   377,   182,   107,   108,    81,   339,   187,
      76,   208,   355,   356,   357,    79,    82,    79,   349,   373,
      63,    85,    80,    85,   186,     3,   188,   189,    79,   169,
     409,    79,   386,    23,    85,   178,   138,    85,    76,    74,
      75,   143,    77,   374,   146,    82,   148,    84,   210,   290,
      87,    15,    36,   407,   330,   296,   175,   219,   213,    37,
      44,    88,    40,   225,   226,    92,    50,    45,    76,   212,
      54,   233,   415,   416,    76,    76,   178,     7,    79,    81,
     182,    79,     1,    81,    79,   187,    11,     6,    83,     8,
     366,    10,   235,    12,    13,   273,    16,    17,    18,    19,
      20,   285,    74,    79,    79,    79,   240,    83,    83,    83,
     212,     1,    96,    97,    79,    34,    81,   295,    76,    79,
      39,    81,   224,    79,    14,    81,    33,   368,    47,   370,
      14,    21,    51,   235,    89,    90,    91,    27,    79,   317,
      81,   243,   191,   192,   193,   194,    59,    66,    67,   311,
      82,   299,   314,    43,    80,   396,   334,    47,    25,    26,
     401,    80,    76,   199,   301,   201,   344,    75,   330,    48,
       1,   273,    77,    63,     5,   277,   417,   202,   203,   204,
     205,   206,   207,   285,    74,    16,    17,    18,    19,    20,
     195,   196,   335,   295,    28,   297,    77,   299,   300,   301,
     197,   198,   304,    76,   366,     1,    80,    28,   310,    80,
     312,    60,     1,    93,     4,   317,    47,    23,    24,    25,
      16,    17,    18,    19,    20,    94,   328,    16,    17,    18,
      19,    20,   334,   335,    95,    30,    56,     1,   340,    82,
     342,     9,   344,   345,    76,    80,    47,    77,    81,    80,
      76,    47,    16,    17,    18,    19,    20,    88,    47,   361,
      76,    33,    38,    42,    35,    77,    77,    98,    30,    69,
      22,     1,    33,    76,   376,   377,    42,    76,    71,    77,
      76,    41,    76,    47,    80,    76,    16,    17,    18,    19,
      20,    80,    88,    76,    61,    84,     1,    17,    73,    88,
      80,    42,    98,    76,    31,    24,    76,   409,    53,    98,
      79,    16,    17,    18,    19,    20,    80,    47,    76,    78,
      84,     1,    76,     1,    88,    55,    81,    42,     6,    42,
       8,    42,    10,    86,    98,    13,    16,    17,    18,    19,
      20,    78,    47,    78,     1,    78,    17,    48,    60,   412,
      80,   174,   335,   189,   364,   200,    34,   154,    88,   116,
      -1,    39,   209,    -1,    -1,    -1,    -1,    47,    98,    47,
      -1,    -1,    29,    51,    -1,    80,    33,    -1,     1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    66,    -1,
      47,    14,    49,    98,    -1,    52,    -1,     1,    21,    -1,
      80,    58,    80,    -1,    27,    62,    -1,    -1,    88,    -1,
      14,    68,    -1,    70,    -1,    72,     1,    21,    -1,    76,
      43,    78,    -1,    27,    47,    -1,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    61,    43,
      63,    -1,    27,    47,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    74,    -1,     1,    -1,    78,    -1,    61,    43,    63,
       1,    -1,    47,    -1,    -1,    -1,    14,    71,     1,    -1,
      74,     1,    -1,    21,    78,    -1,    61,    -1,    63,    27,
      21,    -1,    -1,    -1,    14,    -1,    27,    -1,    -1,    74,
      -1,    21,    -1,    78,    -1,    43,    29,    27,    -1,    47,
      33,    -1,    43,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    43,    47,    63,    49,    47,    48,    52,
      -1,    -1,    63,    -1,    -1,    58,    74,    -1,     1,    62,
      78,    -1,    -1,    63,    75,    68,    77,    70,    -1,    72,
      -1,    14,    -1,    76,    -1,    75,    -1,    77,    21,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    57,    64,   100,   101,   107,    76,     1,   102,
     103,   102,     0,    76,    76,    47,    76,     7,   108,    23,
       1,    11,   104,   110,   110,    15,   109,    76,   102,   111,
      74,   115,   115,   115,    33,   112,    76,    79,   102,   116,
     117,    14,   132,   132,   132,    59,    80,   113,   102,    82,
     117,   102,   133,   134,    75,   139,   139,   139,   102,   114,
     112,     6,     8,    10,    12,    13,    34,    39,    51,    66,
      67,    80,   102,   118,   119,   120,   121,   122,   124,   128,
     129,   130,   142,   143,   144,    76,   134,   114,   140,    77,
     105,    48,   141,    21,    27,    43,    63,   156,   157,   159,
     160,   161,   162,    79,    81,   113,    40,    80,    28,     5,
      16,    17,    18,    19,    20,    80,    88,    98,   102,   125,
     126,   172,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,    77,   123,
     186,    76,   118,    83,    29,    33,    49,    52,    58,    62,
      68,    70,    72,    76,   106,   167,   168,   169,   170,   171,
     172,   174,   175,   180,   181,   182,   184,   185,   157,   158,
     102,   102,   102,   102,   157,   115,   166,   102,    80,    81,
     114,   118,    28,   200,   187,   197,    80,    28,    79,    84,
      87,    60,    89,    90,    91,    88,    92,    25,    26,    93,
      94,    95,    36,    44,    50,    54,    96,    97,     4,    56,
      30,   114,   131,    79,    81,    82,   118,    76,   200,     9,
     102,   200,   102,   105,    32,    46,    72,    76,   200,    78,
     167,    76,   105,    82,   157,    80,   163,   163,   163,   166,
     132,    81,   114,    77,    81,   118,    81,   173,   200,   118,
     126,   173,    47,   189,   189,   189,   189,   190,   190,   191,
     191,   192,   193,   192,   195,   195,   195,   195,   195,   195,
     197,   198,   200,    83,    78,   114,   186,    84,   135,   200,
      76,    82,    76,   200,    76,    33,    38,   102,   200,   200,
      35,   200,   114,   164,   165,    42,   139,    77,    81,    14,
      65,    74,   114,   145,   148,   149,   150,   151,   152,   157,
      77,    79,    81,    85,    30,   127,   118,    83,    17,   102,
     135,   136,   137,   138,   135,    69,   102,   185,    22,   183,
      33,    76,   105,    76,    83,    76,    81,   118,   105,   145,
      77,   134,   148,   117,    83,    71,   146,   149,    76,   145,
     200,   102,   200,    76,   118,    42,    42,    79,    85,    79,
      85,    79,    85,    76,   176,   177,   178,   102,    41,   126,
      73,   118,   165,   146,   145,   118,   148,    61,   147,     3,
      37,    40,    45,   153,   154,   155,   146,    80,    76,   135,
     135,   135,    17,   102,    76,   177,    42,    55,   126,   179,
     200,    31,   105,    24,   105,    53,   147,   146,    76,   148,
      78,    76,    79,   147,    81,    42,    42,    42,   105,    86,
     105,    78,   147,   155,    78,   135,   135,   105,    78
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
#line 30 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 33 ".\\moronico.y"
    {printf("\t nombre -> identificador_con_cuatro_ptos_ceroomas IDENTIFICADOR \n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 34 ".\\moronico.y"
    {yyerrok; ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 42 ".\\moronico.y"
    {printf("\t bloque_programa -> declaracion_cargas_op declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones \n");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 43 ".\\moronico.y"
    {yyerror("Error en bloque programa");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 46 ".\\moronico.y"
    {printf("\t bloque_instrucciones -> '{' instruccion_unoomas '}'  \n");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 49 ".\\moronico.y"
    {printf("\t instruccion_unoomas -> instruccion  \n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 50 ".\\moronico.y"
    {printf("\t instruccion_unoomas -> instruccion_unoomas instruccion  \n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 53 ".\\moronico.y"
    {printf("\t definicion_paquete -> PAQUETE nombre ';' seccion_cabecera seccion_cuerpo  \n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 56 ".\\moronico.y"
    {printf("\t seccion_cabecera -> CABECERA declaracion_cargas_op declaracion_tipos declaracion_constantes declaracion_variables declaracion_interfaces  \n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 59 ".\\moronico.y"
    {printf("\t seccion_cuerpo -> CUERPO declaracion_tipos declaracion_constantes declaracion_variables declaracion_subprograma  \n");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 62 ".\\moronico.y"
    {printf("\t declaracion_cargas_op -> CARGA declaracion_carga_unoomas ';'  \n");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 65 ".\\moronico.y"
    {printf("\t declaracion_carga_unoomas -> nombre en_path_op nombres_op  \n");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 66 ".\\moronico.y"
    {printf("\t declaracion_carga_unoomas -> declaracion_carga_unoomas ',' nombre en_path_op nombres_op  \n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 70 ".\\moronico.y"
    {printf("\t en_path_op -> EN PATH  \n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 74 ".\\moronico.y"
    {printf("\t nombres_op -> '('  nombres_comas ')'  \n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 77 ".\\moronico.y"
    {printf("\t nombres_comas -> nombres_comas ',' nombre  \n");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 78 ".\\moronico.y"
    {printf("\t nombres_comas -> nombre  \n");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 87 ".\\moronico.y"
    {printf("\t declaracionlaracion_tipos -> TIPO declaracion_tipo  \n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 94 ".\\moronico.y"
    {printf("\t declaracion_tipo -> nombre '=' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 95 ".\\moronico.y"
    {printf("\t declaracion_tipo -> nombre '=' tipo_estructurado  \n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 98 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> nombre  \n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 99 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_escalar  \n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 100 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_fichero  \n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 101 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_enumerado  \n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 102 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_lista  \n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 103 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_lista_asociativa  \n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 104 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_conjunto  \n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 107 ".\\moronico.y"
    {printf("\t tipo_estructurado -> tipo_registro  \n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 108 ".\\moronico.y"
    {printf("\t tipo_estructurado -> declaracion_clase  \n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 111 ".\\moronico.y"
    {printf("\t tipo_escalar -> ENTERO  \n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 112 ".\\moronico.y"
    {printf("\t tipo_escalar -> REAL  \n");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 113 ".\\moronico.y"
    {printf("\t tipo_escalar -> BOOLEANO  \n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 114 ".\\moronico.y"
    {printf("\t tipo_escalar -> CARACTER  \n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 115 ".\\moronico.y"
    {printf("\t tipo_escalar -> CADENA  \n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 118 ".\\moronico.y"
    {printf("\t tipo_fichero -> FICHERO  \n");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 121 ".\\moronico.y"
    {printf("\t tipo_enumerado -> '(' expresion_constante_unoomas ')'  \n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 124 ".\\moronico.y"
    {printf("\t expresion_constante_unoomas -> expresion_constante  \n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 125 ".\\moronico.y"
    {printf("\t expresion_constante_unoomas -> expresion_constante_unoomas ',' expresion_constante  \n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 128 ".\\moronico.y"
    {printf("\t tipo_lista -> LISTA rango_lista DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 131 ".\\moronico.y"
    {printf("\t rango_lista ->  rango_lista ',' rango  \n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 132 ".\\moronico.y"
    {printf("\t rango_lista -> rango  \n");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 135 ".\\moronico.y"
    {printf("\t rango -> expresion DOS_PTOS expresion expresion_rango_op  \n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 139 ".\\moronico.y"
    {printf("\t expresion_rango_op -> DOS_PTOS expresion  \n");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 142 ".\\moronico.y"
    {printf("\t tipo_lista_asociativa -> LISTA ASOCIATIVA DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 145 ".\\moronico.y"
    {printf("\t tipo_conjunto -> CONJUNTO DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 148 ".\\moronico.y"
    {printf("\t tipo_registro -> REGISTRO '{' declaracion_campo '}'  \n");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 151 ".\\moronico.y"
    {printf("\t declaracion_campo -> declaracion_campo nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;



/* Line 1455 of yacc.c  */
#line 2244 "moronico.tab.c"
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
#line 473 ".\\moronico.y"


int yyerror(char *s) {
  fflush(stdout);
  printf("   *****************, %s\n",s);
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

