
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



/* Line 189 of yacc.c  */
#line 84 "moronico.tab.c"

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
#line 201 "moronico.tab.c"

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
#define YYLAST   254

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNRULES -- Number of states.  */
#define YYNSTATES  287

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      80,    81,     2,     2,    79,     2,    87,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    83,    76,
       2,    82,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,     2,    85,     2,     2,     2,     2,     2,     2,
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
       0,     0,     3,     5,     7,    12,    15,    16,    20,    23,
      29,    33,    36,    38,    39,    45,    52,    58,    59,    63,
      69,    73,    74,    77,    78,    82,    86,    88,    89,    93,
      96,   101,   103,   105,   107,   109,   111,   113,   115,   117,
     119,   121,   123,   125,   127,   131,   135,   137,   142,   146,
     148,   153,   154,   157,   162,   166,   167,   171,   174,   180,
     182,   186,   190,   194,   198,   200,   206,   210,   216,   220,
     221,   224,   231,   236,   237,   242,   246,   250,   253,   255,
     257,   259,   261,   267,   271,   275,   278,   279,   283,   285,
     289,   294,   298,   303,   305,   307,   309,   311,   313,   315,
     317,   319,   321,   323,   328,   333,   336,   340,   343,   346,
     354,   358,   360,   367,   372,   379,   384,   388,   390,   394,
     396,   398,   400,   403,   408,   415,   421,   424,   428,   435,
     440,   445,   449,   451,   456,   460,   462,   464,   466,   468,
     470
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      89,     0,    -1,    90,    -1,    96,    -1,    64,    91,    76,
      93,    -1,    92,    47,    -1,    -1,    92,    47,    23,    -1,
      47,    23,    -1,    99,   104,   117,   123,    94,    -1,    77,
      95,    78,    -1,    95,   136,    -1,   136,    -1,    -1,    57,
      91,    76,    97,    98,    -1,     7,    99,   104,   117,   123,
     125,    -1,    15,   104,   117,   123,   126,    -1,    -1,    11,
     100,    76,    -1,   100,    79,    91,   101,   102,    -1,    91,
     101,   102,    -1,    -1,    33,    59,    -1,    -1,    80,   103,
      81,    -1,   103,    79,    91,    -1,    91,    -1,    -1,   104,
      74,   105,    -1,    74,   105,    -1,    91,    82,   106,    76,
      -1,    91,    -1,   107,    -1,   108,    -1,   109,    -1,   111,
      -1,   115,    -1,   116,    -1,    34,    -1,    66,    -1,     6,
      -1,    10,    -1,     8,    -1,    39,    -1,    80,   110,    81,
      -1,   110,    79,   154,    -1,   154,    -1,    51,   112,    28,
     106,    -1,   112,    79,   113,    -1,   113,    -1,   155,    30,
     155,   114,    -1,    -1,    30,   155,    -1,    51,     5,    28,
     106,    -1,    13,    28,   106,    -1,    -1,   117,    14,   118,
      -1,    14,   118,    -1,    91,    76,   106,    82,   119,    -1,
     155,    -1,    84,   120,    85,    -1,    84,   121,    85,    -1,
      84,   122,    85,    -1,   120,    79,   119,    -1,   119,    -1,
     121,    79,    17,    42,   119,    -1,    17,    42,   119,    -1,
     122,    79,    91,    42,   119,    -1,    91,    42,   119,    -1,
      -1,    75,   124,    -1,   103,    83,   106,    82,   119,    76,
      -1,   103,    83,   106,    76,    -1,    -1,   125,    48,   127,
      76,    -1,    48,   127,    76,    -1,   126,   127,   135,    -1,
     127,   135,    -1,   128,    -1,   129,    -1,   130,    -1,   131,
      -1,    43,    91,   132,    42,   106,    -1,    63,    91,   132,
      -1,    21,    91,   132,    -1,    27,    91,    -1,    -1,    80,
     133,    81,    -1,   134,    -1,   133,    76,   134,    -1,   103,
      83,   106,    53,    -1,   103,    83,   106,    -1,   104,   117,
     123,    94,    -1,    76,    -1,   137,    -1,   138,    -1,   139,
      -1,   140,    -1,   143,    -1,   144,    -1,   148,    -1,   150,
      -1,   152,    -1,   153,    82,   155,    76,    -1,    70,    72,
     155,    76,    -1,    70,    76,    -1,    29,   155,    76,    -1,
      29,    76,    -1,   141,    76,    -1,    91,    80,   142,    81,
      91,    80,    81,    -1,   142,    79,   155,    -1,   155,    -1,
      72,   155,    35,    94,    73,    94,    -1,    72,   155,    35,
      94,    -1,    33,     9,   155,    69,   145,    76,    -1,   145,
     146,    42,    94,    -1,   146,    42,    94,    -1,   147,    -1,
     146,    86,   147,    -1,   155,    -1,   113,    -1,    55,    -1,
     149,    94,    -1,    58,    91,    33,   153,    -1,    68,    32,
      91,    33,   113,    24,    -1,    68,    32,    91,    33,   113,
      -1,    52,   155,    -1,    68,    46,   155,    -1,    62,    94,
      38,   151,    41,    94,    -1,    62,    94,    38,   151,    -1,
      22,    91,    31,    94,    -1,    49,    91,    76,    -1,    91,
      -1,   153,    84,   142,    85,    -1,   153,    87,    47,    -1,
      19,    -1,    20,    -1,    17,    -1,    18,    -1,    16,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    23,    23,    24,    27,    31,    34,    35,    36,    39,
      42,    45,    46,    47,    50,    53,    56,    58,    59,    62,
      63,    66,    67,    70,    71,    74,    75,    83,    84,    85,
      89,    93,    94,    95,    96,    97,    98,    99,   106,   107,
     108,   109,   110,   113,   116,   119,   120,   123,   126,   127,
     130,   133,   134,   137,   140,   154,   155,   156,   159,   161,
     162,   163,   164,   167,   168,   171,   172,   175,   176,   179,
     180,   183,   184,   188,   189,   190,   252,   253,   256,   257,
     258,   259,   262,   265,   268,   271,   274,   275,   278,   279,
     282,   283,   286,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   308,   310,   311,   314,   315,   318,   321,
     325,   326,   329,   330,   333,   336,   337,   340,   341,   344,
     345,   346,   349,   352,   353,   354,   355,   356,   359,   360,
     363,   366,   374,   375,   376,   379,   380,   381,   382,   383,
     394
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
  "'='", "':'", "'['", "']'", "'|'", "'.'", "$accept", "programa",
  "definicion_programa", "nombre",
  "identificador_con_cuatro_ptos_ceroomas", "bloque_programa",
  "bloque_instrucciones", "instruccion_unoomas", "definicion_paquete",
  "seccion_cabecera", "seccion_cuerpo", "declaracion_cargas_op",
  "declaracion_carga_unoomas", "en_path_op", "nombres_op", "nombres_comas",
  "declaracion_tipos", "declaracion_tipo",
  "tipo_no_estructurado_o_nombre_tipo", "tipo_escalar", "tipo_fichero",
  "tipo_enumerado", "expresion_constante_unoomas", "tipo_lista",
  "rango_lista", "rango", "expresion_rango_op", "tipo_lista_asociativa",
  "tipo_conjunto", "declaracion_constantes", "declaracion_constante",
  "valor_constante", "valor_constante_comas", "clave_valor", "campo_valor",
  "declaracion_variables", "declaracion_variable",
  "declaracion_interfaces", "declaracion_subprograma",
  "cabecera_subprograma", "cabecera_funcion", "cabecera_procedimiento",
  "cabecera_constructor", "cabecera_destructor", "declaracion_parametros",
  "lista_parametros_formales", "parametros_formales", "bloque_subprograma",
  "instruccion", "instruccion_asignacion", "instruccion_salir",
  "instruccion_devolver", "instruccion_llamada", "llamada_subprograma",
  "expresion_comas", "instruccion_si", "instruccion_casos", "caso",
  "entradas", "entrada", "instruccion_bucle", "clausula_iteracion",
  "instruccion_probar_excepto", "clausula_excepcion", "instruccion_lanzar",
  "objeto", "expresion_constante", "expresion", 0
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
      40,    41,    61,    58,    91,    93,   124,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    90,    91,    92,    92,    92,    93,
      94,    95,    95,    95,    96,    97,    98,    99,    99,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   104,
     105,   106,   106,   106,   106,   106,   106,   106,   107,   107,
     107,   107,   107,   108,   109,   110,   110,   111,   112,   112,
     113,   114,   114,   115,   116,   117,   117,   117,   118,   119,
     119,   119,   119,   120,   120,   121,   121,   122,   122,   123,
     123,   124,   124,   125,   125,   125,   126,   126,   127,   127,
     127,   127,   128,   129,   130,   131,   132,   132,   133,   133,
     134,   134,   135,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   137,   138,   138,   139,   139,   140,   141,
     142,   142,   143,   143,   144,   145,   145,   146,   146,   147,
     147,   147,   148,   149,   149,   149,   149,   149,   150,   150,
     151,   152,   153,   153,   153,   154,   154,   154,   154,   154,
     155
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     0,     3,     2,     5,
       3,     2,     1,     0,     5,     6,     5,     0,     3,     5,
       3,     0,     2,     0,     3,     3,     1,     0,     3,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     4,     3,     1,
       4,     0,     2,     4,     3,     0,     3,     2,     5,     1,
       3,     3,     3,     3,     1,     5,     3,     5,     3,     0,
       2,     6,     4,     0,     4,     3,     3,     2,     1,     1,
       1,     1,     5,     3,     3,     2,     0,     3,     1,     3,
       4,     3,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     2,     3,     2,     2,     7,
       3,     1,     6,     4,     6,     4,     3,     1,     3,     1,
       1,     1,     2,     4,     6,     5,     2,     3,     6,     4,
       4,     3,     1,     4,     3,     1,     1,     1,     1,     1,
       0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     0,     0,
       1,     8,     0,     5,    17,    17,     0,     7,     0,     4,
      27,    27,    27,    14,    21,     0,     0,    55,    55,    55,
       0,    23,    18,     0,     0,    29,     0,     0,    69,    69,
      69,    22,     0,    20,    21,     0,     0,    57,    28,     0,
       0,     0,    73,     0,    26,     0,    23,    40,    42,    41,
       0,    38,    43,   140,    39,     0,    31,     0,    32,    33,
      34,    35,    36,    37,     0,    56,     0,    70,    13,     9,
       0,    15,     0,     0,     0,     0,    16,    27,    78,    79,
      80,    81,     0,    24,    19,     0,     0,     0,    49,     0,
     139,   137,   138,   135,   136,     0,    46,    30,     0,     0,
       0,     0,     0,   140,     0,     0,     0,     0,   140,    93,
     132,     0,    12,    94,    95,    96,    97,     0,    98,    99,
     100,     0,   101,   102,     0,     0,     0,    86,    85,    86,
      86,    27,    55,    77,    25,    54,     0,     0,   140,   140,
       0,    44,   140,     0,   107,     0,   140,     0,   126,     0,
       0,     0,   140,   140,   105,     0,   140,    10,    11,   108,
     122,   140,   140,     0,    75,     0,     0,    84,     0,    83,
      76,    69,    53,    47,    48,    51,    45,   140,    58,    59,
      72,   140,   106,     0,   131,     0,     0,     0,   127,     0,
       0,     0,   111,     0,     0,   134,    74,     0,     0,    88,
       0,     0,   140,    50,     0,     0,    64,     0,     0,     0,
       0,   140,   132,   123,     0,   129,   140,   104,   113,   140,
       0,   103,   133,     0,     0,    87,    82,    92,    52,   140,
     140,   140,    60,     0,    61,     0,    62,    71,   121,   120,
     140,     0,   117,   119,     0,     0,   125,     0,   110,     0,
      91,    89,    66,    68,    63,     0,     0,   114,     0,     0,
     140,     0,   128,   124,   112,     0,    90,   140,   140,     0,
     116,   118,   130,   109,    65,    67,   115
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    66,     8,    19,    79,   121,     5,    16,
      23,    20,    25,    31,    43,   207,   142,    35,    67,    68,
      69,    70,   105,    71,    97,   249,   213,    72,    73,    38,
      47,   188,   217,   218,   219,    51,    77,    81,    86,    87,
      88,    89,    90,    91,   177,   208,   209,   143,   122,   123,
     124,   125,   126,   127,   201,   128,   129,   250,   251,   252,
     130,   131,   132,   225,   133,   134,   106,   189
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -169
static const yytype_int16 yypact[] =
{
     -27,   -14,   -14,    43,  -169,  -169,    22,   -25,    11,    -8,
    -169,  -169,    71,    67,    84,    84,    92,  -169,   -14,  -169,
      56,    56,    56,  -169,    89,    40,   -14,     0,     0,     0,
      58,    60,  -169,   -14,    69,  -169,   -14,   -14,    13,    13,
      13,  -169,   -14,  -169,    89,    46,    76,  -169,  -169,   -14,
     -14,    77,   105,     1,  -169,    54,    60,  -169,  -169,  -169,
     127,  -169,  -169,   152,  -169,    86,  -169,    83,  -169,  -169,
    -169,  -169,  -169,  -169,    46,  -169,    48,  -169,   158,  -169,
       1,   113,   -14,   -14,   -14,   -14,     1,    56,  -169,  -169,
    -169,  -169,   -14,  -169,  -169,    46,   135,   -19,  -169,   138,
    -169,  -169,  -169,  -169,  -169,    57,  -169,  -169,    87,    46,
      95,   156,   -14,  -169,   -14,    77,   -12,    53,  -169,  -169,
      96,   141,  -169,  -169,  -169,  -169,  -169,   101,  -169,  -169,
    -169,    77,  -169,  -169,    12,   103,     1,   100,  -169,   100,
     100,    56,     0,  -169,  -169,  -169,    46,    46,  -169,  -169,
      86,  -169,    88,   -36,  -169,   106,  -169,   107,  -169,   151,
     147,   -14,  -169,  -169,  -169,   154,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,   145,  -169,   119,   -14,  -169,   155,  -169,
    -169,    13,  -169,  -169,  -169,   166,  -169,    -5,  -169,  -169,
    -169,    88,  -169,   129,  -169,   -14,   178,   168,  -169,   130,
      77,    62,  -169,   132,   -32,  -169,  -169,    49,   -55,  -169,
      46,    77,  -169,  -169,   162,   170,  -169,   -18,   -16,     7,
     139,   159,  -169,    50,   -14,   177,  -169,  -169,   148,  -169,
     -14,  -169,  -169,    46,   -14,  -169,  -169,  -169,  -169,    88,
      88,    88,  -169,   207,  -169,   -14,  -169,  -169,  -169,  -169,
     -26,   -31,  -169,   138,   194,    77,   203,    77,  -169,   157,
     179,  -169,  -169,  -169,  -169,   189,   193,  -169,   -29,    77,
     159,    77,  -169,  -169,  -169,   160,  -169,    88,    88,    77,
    -169,  -169,  -169,  -169,  -169,  -169,  -169
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,  -169,  -169,    -1,  -169,  -169,  -113,  -169,  -169,  -169,
    -169,   221,  -169,   195,   182,   -11,   128,   205,   -71,  -169,
    -169,  -169,  -169,  -169,  -169,   -59,  -169,  -169,  -169,   -21,
     191,  -168,  -169,  -169,  -169,   -34,  -169,  -169,  -169,   -70,
    -169,  -169,  -169,  -169,     6,  -169,     9,   104,   125,  -169,
    -169,  -169,  -169,  -169,    75,  -169,  -169,  -169,    -2,   -20,
    -169,  -169,  -169,  -169,  -169,    59,    99,   -48
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
       7,     9,   160,   108,    98,    52,    53,    39,    40,   147,
     135,   269,   214,   279,    36,    99,   141,    24,   170,   216,
     161,   234,    82,   220,   145,    34,   235,    49,    83,   248,
       1,    55,    44,     6,   162,    46,    34,     2,   153,    76,
     190,    54,     6,    10,    84,    11,   191,   229,    46,    54,
     267,    12,    57,   232,    58,   270,    59,   270,    13,    60,
     148,   241,   155,   243,    85,   158,   175,   242,    14,   244,
     165,   262,   263,   264,    37,   182,   183,   120,    15,   187,
      61,   137,   138,   139,   140,    62,   245,   228,    50,   184,
      17,   144,   246,     6,   171,    18,   172,    63,   237,   173,
      99,   185,   100,   101,   102,   103,   104,    22,   193,   284,
     285,   157,    64,   159,   198,   199,    32,    41,   202,    33,
     120,   181,    30,   203,   202,   163,    65,    92,    92,   164,
      26,   109,   233,    92,   172,    93,   150,   173,   151,   236,
      42,   229,   272,   230,   274,   178,   179,   211,    27,    28,
      29,    45,    74,    80,    78,    95,   280,    96,   282,   107,
     197,   136,   260,   146,   238,   156,   286,   256,   149,   152,
     110,   154,   187,   253,   111,    54,   166,   169,    99,   174,
     176,   258,   192,   194,   195,   196,   215,   110,     6,   200,
     112,   111,   205,   113,   222,   206,   212,   210,   221,   114,
     224,   226,   253,   115,   239,     6,   227,   112,   231,   116,
     113,   117,   240,   118,   248,   247,   114,   119,   255,   167,
     115,   257,   253,   254,   265,   271,   116,   273,   117,   259,
     118,   277,   276,    54,   119,   278,    21,   275,    94,    56,
      75,   283,    48,   261,   266,   180,   168,   204,   268,   186,
     281,     0,     0,     0,   223
};

static const yytype_int16 yycheck[] =
{
       1,     2,   115,    74,    63,    39,    40,    28,    29,    28,
      80,    42,    17,    42,    14,    63,    86,    18,   131,   187,
      32,    76,    21,   191,    95,    26,    81,    14,    27,    55,
      57,    42,    33,    47,    46,    36,    37,    64,   109,    50,
      76,    42,    47,     0,    43,    23,    82,    79,    49,    50,
      76,    76,     6,    85,     8,    86,    10,    86,    47,    13,
      79,    79,   110,    79,    63,   113,   136,    85,    76,    85,
     118,   239,   240,   241,    74,   146,   147,    78,     7,    84,
      34,    82,    83,    84,    85,    39,    79,   200,    75,   148,
      23,    92,    85,    47,    82,    11,    84,    51,   211,    87,
     148,   149,    16,    17,    18,    19,    20,    15,   156,   277,
     278,   112,    66,   114,   162,   163,    76,    59,   166,    79,
     121,   142,    33,   171,   172,    72,    80,    79,    79,    76,
      74,    83,    83,    79,    84,    81,    79,    87,    81,   210,
      80,    79,   255,    81,   257,   139,   140,   181,    20,    21,
      22,    82,    76,    48,    77,    28,   269,     5,   271,    76,
     161,    48,   233,    28,   212,     9,   279,   226,    30,    82,
      29,    76,    84,   221,    33,   176,    80,    76,   226,    76,
      80,   229,    76,    76,    33,    38,   187,    29,    47,    35,
      49,    33,    47,    52,   195,    76,    30,    42,    69,    58,
      22,    33,   250,    62,    42,    47,    76,    49,    76,    68,
      52,    70,    42,    72,    55,    76,    58,    76,    41,    78,
      62,    73,   270,   224,    17,    31,    68,    24,    70,   230,
      72,    42,    53,   234,    76,    42,    15,    80,    56,    44,
      49,    81,    37,   234,   245,   141,   121,   172,   250,   150,
     270,    -1,    -1,    -1,   195
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    64,    89,    90,    96,    47,    91,    92,    91,
       0,    23,    76,    47,    76,     7,    97,    23,    11,    93,
      99,    99,    15,    98,    91,   100,    74,   104,   104,   104,
      33,   101,    76,    79,    91,   105,    14,    74,   117,   117,
     117,    59,    80,   102,    91,    82,    91,   118,   105,    14,
      75,   123,   123,   123,    91,   103,   101,     6,     8,    10,
      13,    34,    39,    51,    66,    80,    91,   106,   107,   108,
     109,   111,   115,   116,    76,   118,   103,   124,    77,    94,
      48,   125,    21,    27,    43,    63,   126,   127,   128,   129,
     130,   131,    79,    81,   102,    28,     5,   112,   113,   155,
      16,    17,    18,    19,    20,   110,   154,    76,   106,    83,
      29,    33,    49,    52,    58,    62,    68,    70,    72,    76,
      91,    95,   136,   137,   138,   139,   140,   141,   143,   144,
     148,   149,   150,   152,   153,   127,    48,    91,    91,    91,
      91,   127,   104,   135,    91,   106,    28,    28,    79,    30,
      79,    81,    82,   106,    76,   155,     9,    91,   155,    91,
      94,    32,    46,    72,    76,   155,    80,    78,   136,    76,
      94,    82,    84,    87,    76,   127,    80,   132,   132,   132,
     135,   117,   106,   106,   113,   155,   154,    84,   119,   155,
      76,    82,    76,   155,    76,    33,    38,    91,   155,   155,
      35,   142,   155,   155,   142,    47,    76,   103,   133,   134,
      42,   123,    30,   114,    17,    91,   119,   120,   121,   122,
     119,    69,    91,   153,    22,   151,    33,    76,    94,    79,
      81,    76,    85,    83,    76,    81,   106,    94,   155,    42,
      42,    79,    85,    79,    85,    79,    85,    76,    55,   113,
     145,   146,   147,   155,    91,    41,   113,    73,   155,    91,
     106,   134,   119,   119,   119,    17,    91,    76,   146,    42,
      86,    31,    94,    24,    94,    80,    53,    42,    42,    42,
      94,   147,    94,    81,   119,   119,    94
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
#line 23 ".\\moronico.y"
    {printf("\t programa -> def_programa \n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 24 ".\\moronico.y"
    {printf("\t programa -> def_paquete \n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 27 ".\\moronico.y"
    {printf("\t def_programa -> PROGRAMA ';' bloque_programa \n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 31 ".\\moronico.y"
    {printf("\t nombre -> identificador_con_cuatro_ptos_ceroomas IDENTIFICADOR \n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 35 ".\\moronico.y"
    {printf("\t identificador_con_cuatro_ptos_ceroomas -> identificador_con_cuatro_ptos_ceroomas IDENTIFICADOR '::' \n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 36 ".\\moronico.y"
    {printf("\t identificador_con_cuatro_ptos_ceroomas -> IDENTIFICADOR '::' \n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 39 ".\\moronico.y"
    {printf("\t bloque_programa -> declaracion_cargas_op declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones \n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 42 ".\\moronico.y"
    {printf("\t bloque_instrucciones -> '{' instruccion_unoomas '}'  \n");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 45 ".\\moronico.y"
    {printf("\t instruccion_unoomas -> instruccion_unoomas instruccion  \n");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 46 ".\\moronico.y"
    {printf("\t instruccion_unoomas -> instruccion  \n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 50 ".\\moronico.y"
    {printf("\t definicion_paquete -> PAQUETE nombre ';' seccion_cabecera seccion_cuerpo  \n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 53 ".\\moronico.y"
    {printf("\t seccion_cabecera -> CABECERA declaracion_cargas_op declaracion_tipos declaracion_constantes declaracion_variables declaracion_interfaces  \n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 56 ".\\moronico.y"
    {printf("\t seccion_cuerpo -> CUERPO declaracion_tipos declaracion_constantes declaracion_variables declaracion_subprograma  \n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 59 ".\\moronico.y"
    {printf("\t declaracion_cargas_op -> CARGA declaracion_carga_unoomas ';'  \n");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 62 ".\\moronico.y"
    {printf("\t declaracion_carga_unoomas -> declaracion_carga_unoomas ',' nombre en_path_op nombres_op  \n");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 63 ".\\moronico.y"
    {printf("\t declaracion_carga_unoomas -> nombre en_path_op nombres_op  \n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 67 ".\\moronico.y"
    {printf("\t en_path_op -> EN PATH  \n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 71 ".\\moronico.y"
    {printf("\t nombres_op -> '('  nombres_comas ')'  \n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 74 ".\\moronico.y"
    {printf("\t nombres_comas -> nombres_comas ',' nombre  \n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 75 ".\\moronico.y"
    {printf("\t nombres_comas -> nombre  \n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 84 ".\\moronico.y"
    {printf("\t declaracionlaracion_tipos -> declaracionlaracion_tipos TIPO declaracion_tipo  \n");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 85 ".\\moronico.y"
    {printf("\t declaracionlaracion_tipos -> TIPO declaracion_tipo  \n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 89 ".\\moronico.y"
    {printf("\t declaracion_tipo -> nombre '=' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 93 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> nombre  \n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 94 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_escalar  \n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 95 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_fichero  \n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 96 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_enumerado  \n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 97 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_lista  \n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 98 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_lista_asociativa  \n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 99 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_conjunto  \n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 106 ".\\moronico.y"
    {printf("\t tipo_escalar -> ENTERO  \n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 107 ".\\moronico.y"
    {printf("\t tipo_escalar -> REAL  \n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 108 ".\\moronico.y"
    {printf("\t tipo_escalar -> BOOLEANO  \n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 109 ".\\moronico.y"
    {printf("\t tipo_escalar -> CARACTER  \n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 110 ".\\moronico.y"
    {printf("\t tipo_escalar -> CADENA  \n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 113 ".\\moronico.y"
    {printf("\t tipo_fichero -> FICHERO  \n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 116 ".\\moronico.y"
    {printf("\t tipo_enumerado -> '(' expresion_constante_unoomas ')'  \n");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 119 ".\\moronico.y"
    {printf("\t expresion_constante_unoomas -> expresion_constante_unoomas ',' expresion_constante  \n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 120 ".\\moronico.y"
    {printf("\t expresion_constante_unoomas -> expresion_constante  \n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 123 ".\\moronico.y"
    {printf("\t tipo_lista -> LISTA rango_lista DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 126 ".\\moronico.y"
    {printf("\t rango_lista ->  rango_lista ',' rango  \n");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 127 ".\\moronico.y"
    {printf("\t rango_lista -> rango  \n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 130 ".\\moronico.y"
    {printf("\t rango -> expresion DOS_PTOS expresion expresion_rango_op  \n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 134 ".\\moronico.y"
    {printf("\t expresion_rango_op -> DOS_PTOS expresion  \n");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 137 ".\\moronico.y"
    {printf("\t tipo_lista_asociativa -> LISTA ASOCIATIVA DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 140 ".\\moronico.y"
    {printf("\t tipo_conjunto -> CONJUNTO DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;



/* Line 1455 of yacc.c  */
#line 1999 "moronico.tab.c"
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
#line 396 ".\\moronico.y"


int yyerror(char *s) {
  fflush(stdout);
  printf("***************** %s\n",s);
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

