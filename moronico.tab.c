
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   434

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  89
/* YYNRULES -- Number of rules.  */
#define YYNRULES  180
/* YYNRULES -- Number of states.  */
#define YYNSTATES  372

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
       0,     0,     3,     5,     7,    12,    15,    16,    20,    26,
      30,    33,    35,    41,    48,    54,    55,    59,    63,    69,
      70,    73,    74,    78,    82,    84,    85,    88,    94,    99,
     104,   108,   110,   112,   114,   116,   118,   120,   122,   124,
     126,   128,   130,   132,   134,   136,   138,   142,   144,   148,
     153,   157,   159,   164,   165,   168,   173,   177,   182,   188,
     193,   194,   197,   200,   202,   208,   210,   214,   218,   222,
     226,   228,   234,   238,   244,   248,   249,   252,   259,   264,
     267,   269,   271,   281,   292,   302,   311,   314,   316,   317,
     320,   321,   324,   326,   329,   331,   333,   335,   340,   343,
     346,   349,   354,   356,   360,   362,   364,   366,   368,   370,
     374,   377,   379,   381,   383,   385,   388,   390,   396,   400,
     404,   407,   408,   412,   414,   418,   423,   427,   432,   434,
     436,   438,   440,   442,   444,   446,   448,   450,   452,   457,
     462,   465,   469,   472,   475,   483,   487,   489,   496,   501,
     508,   513,   517,   520,   521,   525,   527,   529,   531,   534,
     539,   546,   552,   555,   559,   566,   571,   576,   580,   582,
     587,   591,   593,   595,   597,   599,   601,   603,   605,   607,
     611
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      89,     0,    -1,    90,    -1,    96,    -1,    64,    91,    76,
      93,    -1,    92,    47,    -1,    -1,    92,    47,    23,    -1,
      99,   104,   120,   127,    94,    -1,    77,    95,    78,    -1,
      95,   155,    -1,   155,    -1,    57,    91,    76,    97,    98,
      -1,     7,    99,   104,   120,   127,   129,    -1,    15,   104,
     120,   127,   144,    -1,    -1,    11,   100,    76,    -1,    91,
     101,   102,    -1,   100,    79,    91,   101,   102,    -1,    -1,
      33,    59,    -1,    -1,    80,   103,    81,    -1,   103,    79,
      91,    -1,    91,    -1,    -1,    74,   105,    -1,   105,    91,
      82,   106,    76,    -1,   105,    91,    82,   107,    -1,    91,
      82,   106,    76,    -1,    91,    82,   107,    -1,    91,    -1,
     108,    -1,   109,    -1,   110,    -1,   112,    -1,   116,    -1,
     117,    -1,   118,    -1,   130,    -1,    34,    -1,    66,    -1,
       6,    -1,    10,    -1,     8,    -1,    39,    -1,    80,   111,
      81,    -1,   174,    -1,   111,    79,   174,    -1,    51,   113,
      28,   106,    -1,   113,    79,   114,    -1,   114,    -1,   176,
      30,   176,   115,    -1,    -1,    30,   176,    -1,    51,     5,
      28,   106,    -1,    13,    28,   106,    -1,    67,    77,   119,
      78,    -1,   119,   103,    83,   106,    76,    -1,   103,    83,
     106,    76,    -1,    -1,    14,   121,    -1,   121,   122,    -1,
     122,    -1,    91,    76,   106,    82,   123,    -1,   176,    -1,
      84,   124,    85,    -1,    84,   125,    85,    -1,    84,   126,
      85,    -1,   124,    79,   123,    -1,   123,    -1,   125,    79,
      17,    42,   123,    -1,    17,    42,   123,    -1,   126,    79,
      91,    42,   123,    -1,    91,    42,   123,    -1,    -1,    75,
     128,    -1,   103,    83,   106,    82,   123,    76,    -1,   103,
      83,   106,    76,    -1,    48,   146,    -1,   131,    -1,   132,
      -1,    12,    40,    80,    81,    77,   133,   134,   135,    78,
      -1,    12,    40,    80,   103,    81,    77,   133,   134,   135,
      78,    -1,    12,    80,   103,    81,    77,   133,   134,   135,
      78,    -1,    12,    80,    81,    77,   133,   134,   135,    78,
      -1,    65,   136,    -1,   136,    -1,    -1,    71,   136,    -1,
      -1,    61,   136,    -1,   137,    -1,   136,   137,    -1,   138,
      -1,   139,    -1,   140,    -1,   145,    76,   141,    76,    -1,
     145,    76,    -1,    74,   105,    -1,    14,   122,    -1,   103,
      83,   106,    76,    -1,   142,    -1,   142,    79,   143,    -1,
     143,    -1,    45,    -1,     3,    -1,    37,    -1,    40,    -1,
     144,   145,   154,    -1,   145,   154,    -1,   147,    -1,   148,
      -1,   149,    -1,   150,    -1,   146,   145,    -1,   145,    -1,
      43,    91,   151,    42,   106,    -1,    63,    91,   151,    -1,
      21,    91,   151,    -1,    27,    91,    -1,    -1,    80,   152,
      81,    -1,   153,    -1,   152,    76,   153,    -1,   103,    83,
     106,    53,    -1,   103,    83,   106,    -1,   104,   120,   127,
      94,    -1,    76,    -1,   156,    -1,   157,    -1,   158,    -1,
     159,    -1,   162,    -1,   163,    -1,   168,    -1,   170,    -1,
     172,    -1,   173,    82,   176,    76,    -1,    70,    72,   176,
      76,    -1,    70,    76,    -1,    29,   176,    76,    -1,    29,
      76,    -1,   160,    76,    -1,    91,    80,   161,    81,    91,
      80,    81,    -1,   161,    79,   176,    -1,   176,    -1,    72,
     176,    35,    94,    73,    94,    -1,    72,   176,    35,    94,
      -1,    33,     9,   176,    69,   164,    76,    -1,   164,   165,
      42,    94,    -1,   165,    42,    94,    -1,   166,   167,    -1,
      -1,   166,   167,    86,    -1,   176,    -1,   114,    -1,    55,
      -1,   169,    94,    -1,    58,    91,    33,   173,    -1,    68,
      32,    91,    33,   114,    24,    -1,    68,    32,    91,    33,
     114,    -1,    52,   176,    -1,    68,    46,   176,    -1,    62,
      94,    38,   171,    41,    94,    -1,    62,    94,    38,   171,
      -1,    22,    91,    31,    94,    -1,    49,    91,    76,    -1,
      91,    -1,   173,    84,   161,    85,    -1,   173,    87,    47,
      -1,    19,    -1,    20,    -1,    17,    -1,    18,    -1,    16,
      -1,   174,    -1,   173,    -1,   160,    -1,    80,   176,    81,
      -1,   175,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    23,    23,    24,    27,    30,    33,    34,    38,    41,
      44,    45,    48,    51,    54,    56,    57,    60,    61,    64,
      65,    68,    69,    72,    73,    81,    82,    86,    87,    88,
      89,    92,    93,    94,    95,    96,    97,    98,   101,   102,
     105,   106,   107,   108,   109,   112,   115,   118,   119,   122,
     125,   126,   129,   132,   133,   136,   139,   142,   145,   146,
     154,   154,   157,   158,   161,   164,   165,   166,   167,   170,
     171,   174,   175,   178,   179,   182,   183,   186,   187,   191,
     195,   196,   199,   200,   204,   205,   209,   210,   213,   214,
     217,   218,   221,   222,   225,   226,   227,   228,   229,   232,
     235,   238,   241,   244,   245,   248,   249,   250,   251,   260,
     261,   264,   265,   266,   267,   270,   271,   273,   276,   279,
     282,   285,   286,   289,   290,   293,   294,   297,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   319,   321,
     322,   325,   326,   329,   332,   336,   337,   340,   341,   344,
     347,   348,   351,   353,   354,   357,   358,   359,   362,   365,
     366,   367,   368,   369,   372,   373,   376,   379,   387,   388,
     389,   392,   393,   394,   395,   396,   399,   400,   401,   402,
     407
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
  "definicion_programa", "nombre", "id_op", "bloque_programa",
  "bloque_instrucciones", "instruccion_unoomas", "definicion_paquete",
  "seccion_cabecera", "seccion_cuerpo", "declaracion_cargas",
  "declaracion_carga_unoomas", "en_path_op", "nombres_op", "nombres_comas",
  "declaracion_tipos", "declaracion_tipo",
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
  "objeto", "expresion_constante", "expresion_primaria", "expresion", 0
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
       0,    88,    89,    89,    90,    91,    92,    92,    93,    94,
      95,    95,    96,    97,    98,    99,    99,   100,   100,   101,
     101,   102,   102,   103,   103,   104,   104,   105,   105,   105,
     105,   106,   106,   106,   106,   106,   106,   106,   107,   107,
     108,   108,   108,   108,   108,   109,   110,   111,   111,   112,
     113,   113,   114,   115,   115,   116,   117,   118,   119,   119,
     120,   120,   121,   121,   122,   123,   123,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   128,   128,   129,
     130,   130,   131,   131,   132,   132,   133,   133,   134,   134,
     135,   135,   136,   136,   137,   137,   137,   137,   137,   138,
     139,   140,   141,   142,   142,   143,   143,   143,   143,   144,
     144,   145,   145,   145,   145,   146,   146,   147,   148,   149,
     150,   151,   151,   152,   152,   153,   153,   154,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   156,   157,
     157,   158,   158,   159,   160,   161,   161,   162,   162,   163,
     164,   164,   165,   166,   166,   167,   167,   167,   168,   169,
     169,   169,   169,   169,   170,   170,   171,   172,   173,   173,
     173,   174,   174,   174,   174,   174,   175,   175,   175,   175,
     176
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     0,     3,     5,     3,
       2,     1,     5,     6,     5,     0,     3,     3,     5,     0,
       2,     0,     3,     3,     1,     0,     2,     5,     4,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     4,
       3,     1,     4,     0,     2,     4,     3,     4,     5,     4,
       0,     2,     2,     1,     5,     1,     3,     3,     3,     3,
       1,     5,     3,     5,     3,     0,     2,     6,     4,     2,
       1,     1,     9,    10,     9,     8,     2,     1,     0,     2,
       0,     2,     1,     2,     1,     1,     1,     4,     2,     2,
       2,     4,     1,     3,     1,     1,     1,     1,     1,     3,
       2,     1,     1,     1,     1,     2,     1,     5,     3,     3,
       2,     0,     3,     1,     3,     4,     3,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       2,     3,     2,     2,     7,     3,     1,     6,     4,     6,
       4,     3,     2,     0,     3,     1,     1,     1,     2,     4,
       6,     5,     2,     3,     6,     4,     4,     3,     1,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     6,     6,     0,     2,     3,     0,     0,     0,     1,
       0,     5,    15,    15,     0,     7,     6,     4,    25,    25,
      25,    12,    19,     0,     6,    60,    60,    60,     0,    21,
      16,     6,     0,    26,     6,    75,    75,    75,    20,     6,
      17,    19,     6,     0,     0,    61,    63,     6,     0,     0,
       0,    24,     0,    21,    42,    44,    43,     0,     0,    40,
      45,     6,    41,     0,     0,    31,     0,    30,    32,    33,
      34,    35,    36,    37,    38,    39,    80,    81,     6,     6,
      62,     0,    76,     6,     8,     0,    13,     6,     6,     6,
       6,    14,    25,   111,   112,   113,   114,     6,    22,    18,
       0,     6,     6,     0,   175,   173,   174,   171,   172,     6,
     168,     0,    51,   178,   177,   176,   180,     0,     6,     0,
      47,    29,     0,    28,     0,     6,     6,     0,     6,     6,
       6,     0,     0,     0,     6,   128,     6,    11,   129,   130,
     131,   132,     0,   133,   134,   135,     0,   136,   137,     0,
     116,    79,   121,   120,   121,   121,    25,    60,   110,    23,
       6,     0,     0,    56,     6,     0,     6,     6,     6,     6,
       0,     6,     0,     6,     0,    46,    27,     6,     0,   142,
       0,     6,     0,   162,     0,     0,     6,     6,     6,   140,
       0,     9,    10,   143,   158,     6,   115,     6,   119,     0,
     118,   109,    75,     0,     0,     6,     0,    55,   179,     0,
     146,    49,    50,     0,   170,    53,     6,    57,     0,    48,
       6,    64,    65,    78,     6,   141,     0,   167,     6,     0,
       0,   163,     0,     0,     0,     0,     0,   123,     6,     0,
       6,     0,     6,     6,     6,     0,    88,    87,    92,    94,
      95,    96,     0,     6,     6,     6,   169,     6,    52,     0,
       6,   173,   168,    70,     0,     0,     0,     0,   153,   168,
     159,     6,   165,     6,   139,   148,   138,     6,     6,   122,
     117,   127,    88,     6,   100,    86,    99,     6,     6,    90,
      93,    98,    88,   145,     0,    54,    59,     0,     6,     6,
       6,    66,     0,    67,     6,    68,    77,   153,     0,     6,
       0,     0,   161,     0,   126,   124,    90,    88,     0,    89,
       6,     0,   106,   107,   108,   105,     0,   102,   104,    90,
       0,    58,    72,    74,    69,     0,     0,   149,     0,     0,
     157,   156,   152,   155,     0,   164,   160,   147,   125,     0,
      90,   101,     6,    85,    97,     0,     0,   144,     6,     6,
       0,   151,   154,   166,    82,     0,   103,    84,    71,    73,
     150,    83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,   110,     7,    17,    84,   136,     5,    14,
      21,    18,    23,    29,    40,   245,   157,    33,    66,    67,
      68,    69,    70,   119,    71,   111,   112,   258,    72,    73,
      74,   173,    35,    45,    46,   221,   264,   265,   266,    48,
      82,    86,    75,    76,    77,   246,   289,   321,   247,   248,
     249,   250,   251,   326,   327,   328,    91,   252,   151,    93,
      94,    95,    96,   198,   236,   237,   158,   137,   138,   139,
     140,   141,   113,   209,   143,   144,   307,   308,   309,   342,
     145,   146,   147,   272,   148,   114,   115,   116,   222
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -264
static const yytype_int16 yypact[] =
{
     -15,  -264,  -264,    50,  -264,  -264,    19,    28,    30,  -264,
     106,   105,   112,   112,   120,  -264,  -264,  -264,    62,    62,
      62,  -264,   115,   100,  -264,   146,   146,   146,   122,    81,
    -264,  -264,    86,   135,  -264,   123,   123,   123,  -264,  -264,
    -264,   115,   222,   121,   126,   135,  -264,  -264,   143,   149,
      71,  -264,   109,    81,  -264,  -264,  -264,     0,   186,  -264,
    -264,    51,  -264,   147,   395,  -264,   150,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,   222,   258,
    -264,   -55,  -264,   358,  -264,    71,  -264,  -264,  -264,  -264,
    -264,    71,    62,  -264,  -264,  -264,  -264,  -264,  -264,  -264,
     153,   155,   258,   210,  -264,  -264,  -264,  -264,  -264,   314,
     165,    -7,  -264,  -264,   102,  -264,  -264,   217,  -264,   113,
    -264,  -264,   172,  -264,   173,   258,   294,   248,  -264,   314,
    -264,   143,     2,    18,   314,  -264,   330,  -264,  -264,  -264,
    -264,  -264,   182,  -264,  -264,  -264,   143,  -264,  -264,    34,
    -264,    71,   180,  -264,   180,   180,    62,   146,  -264,  -264,
     181,   190,   129,  -264,   258,   191,   314,   258,   314,   314,
     216,   314,   -40,   196,   395,  -264,  -264,    65,   -51,  -264,
     199,   314,   202,  -264,   246,   242,  -264,   314,   314,  -264,
     255,  -264,  -264,  -264,  -264,   314,  -264,  -264,  -264,   239,
    -264,  -264,   123,   206,   132,   166,   214,  -264,  -264,   144,
    -264,  -264,  -264,    24,  -264,   264,   258,  -264,    25,  -264,
     137,  -264,  -264,  -264,    65,  -264,   226,  -264,  -264,   274,
     265,  -264,   223,   143,   225,    92,   -29,  -264,   258,   143,
     166,   227,  -264,   323,  -264,    95,   236,   322,  -264,  -264,
    -264,  -264,   232,   166,   314,  -264,  -264,   314,  -264,   240,
     258,   273,   -25,  -264,    47,    58,    73,   241,  -264,  -264,
     102,  -264,   280,   314,  -264,   247,  -264,   258,  -264,  -264,
    -264,  -264,   236,   166,  -264,   322,   135,   258,   323,   262,
    -264,    70,   236,  -264,   259,  -264,  -264,   269,    65,    65,
      65,  -264,   318,  -264,  -264,  -264,  -264,   270,   298,   309,
     310,   143,   324,   143,   299,  -264,   262,   236,   271,   322,
     323,   276,  -264,  -264,  -264,  -264,   282,   277,  -264,   262,
     281,  -264,  -264,  -264,  -264,   313,   319,  -264,   325,   143,
    -264,  -264,   285,   217,   143,  -264,  -264,  -264,  -264,   290,
     262,  -264,   279,  -264,  -264,    70,   295,  -264,    65,    65,
     143,  -264,  -264,  -264,  -264,   297,  -264,  -264,  -264,  -264,
    -264,  -264
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -264,  -264,  -264,    -1,  -264,  -264,   -95,  -264,  -264,  -264,
    -264,   347,  -264,   331,   327,   -27,   187,   133,   -65,   300,
    -264,  -264,  -264,  -264,  -264,  -264,  -162,  -264,  -264,  -264,
    -264,  -264,   -18,  -264,   -43,  -158,  -264,  -264,  -264,   -33,
    -264,  -264,  -264,  -264,  -264,  -218,  -263,  -253,  -227,  -240,
    -264,  -264,  -264,  -264,  -264,    21,  -264,   -32,  -264,  -264,
    -264,  -264,  -264,  -128,  -264,   103,   228,   254,  -264,  -264,
    -264,  -264,   -72,   224,  -264,  -264,  -264,    76,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,   -78,   -54,  -264,    -4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -92
static const yytype_int16 yytable[] =
{
       6,     8,    80,    49,    50,   149,   212,   290,    36,    37,
     120,   142,    52,   122,   124,    22,   285,   299,    92,   316,
      81,   167,   282,    32,    97,   223,   199,   200,   125,   329,
      41,   224,    43,    44,   186,   292,   185,   163,    51,    97,
     100,    65,     1,   216,    44,   290,    51,   278,   187,     2,
       9,   194,   279,   150,   350,   166,   103,   117,   149,   156,
     178,   319,   263,   349,   142,   317,   267,   104,   105,   106,
     107,   108,   168,   322,   162,    11,   356,    65,    65,   290,
     101,   104,   105,   106,   107,   108,   152,   153,   154,   155,
     188,   172,    87,   352,   189,    10,   159,   365,    88,   207,
      51,    65,   211,   254,    97,   165,    12,   323,   260,   256,
     324,   312,   290,    13,    89,   325,   195,    51,   169,   196,
     219,   170,   180,    16,    65,   183,   300,   182,    15,   184,
     190,   109,   301,   204,    90,    20,    24,   302,   275,   202,
     332,   333,   334,   303,   281,   109,   218,   341,    28,   220,
     270,   259,   304,   104,   261,   106,   107,   108,   305,    51,
      34,    39,   210,    65,   117,   210,    65,   215,    42,   239,
     235,    97,    51,   280,    97,   277,    30,   226,   287,    31,
     242,    38,    -6,   231,   232,   230,   169,    87,    97,   170,
      98,   234,   174,    88,   175,   297,    51,    85,    47,   284,
     368,   369,    79,    78,    51,    25,    26,    27,    97,    89,
     206,    97,   314,   241,   102,    65,   345,   109,   347,   262,
      83,   220,   318,   254,   118,   255,   121,   269,    54,    90,
      55,   243,    56,   160,    57,    58,   161,    65,   164,    51,
     244,    44,    51,    32,   361,   166,    51,   171,   176,   363,
     293,   235,    51,   295,   294,   177,    59,   181,   193,    65,
     197,    60,   203,   214,    54,   370,    55,   205,    56,   117,
     310,    58,   208,    61,   217,   225,    65,    51,   227,   228,
     229,   238,    51,   240,    51,    43,    65,    51,    62,    63,
     233,   253,    59,   242,   257,   268,   271,    60,   273,   274,
      87,   276,    64,   336,   283,   343,    88,   288,   291,    61,
     104,   105,   106,   107,   108,   298,   296,   306,    51,    51,
     313,   311,    89,   320,    62,   104,   105,   106,   107,   108,
     104,   105,   106,   107,   108,   335,   242,   242,    64,   330,
     339,   344,    90,    87,    87,   331,   337,   351,   346,    88,
      88,    51,   348,   244,   353,   358,   355,   -91,   354,   126,
      19,   359,   357,   127,   340,    89,    89,   360,   364,    -6,
     179,   362,    53,   367,   109,   371,   366,   286,   123,   128,
      99,   315,   129,   338,   201,    90,    90,   126,   130,   109,
     192,   127,   131,   213,   109,     0,   244,   244,   132,     0,
     133,     0,   134,     0,     0,     0,   135,   128,   191,     0,
     129,   104,   105,   106,   107,   108,   130,     0,     0,     0,
     131,     0,     0,     0,     0,     0,   132,     0,   133,     0,
     134,     0,     0,     0,   135
};

static const yytype_int16 yycheck[] =
{
       1,     2,    45,    36,    37,    83,   168,   247,    26,    27,
      64,    83,    39,    78,    79,    16,   243,    42,    50,   282,
      47,    28,   240,    24,    79,    76,   154,   155,    83,   292,
      31,    82,    33,    34,    32,   253,   131,   102,    39,    79,
      40,    42,    57,    83,    45,   285,    47,    76,    46,    64,
       0,   146,    81,    85,   317,    80,     5,    61,   136,    91,
     125,   288,   220,   316,   136,   283,   224,    16,    17,    18,
      19,    20,    79,     3,   101,    47,   329,    78,    79,   319,
      80,    16,    17,    18,    19,    20,    87,    88,    89,    90,
      72,   118,    21,   320,    76,    76,    97,   350,    27,   164,
     101,   102,   167,    79,    79,   109,    76,    37,    83,    85,
      40,   273,   352,     7,    43,    45,    82,   118,    84,   151,
     174,    87,   126,    11,   125,   129,    79,   128,    23,   130,
     134,    80,    85,   160,    63,    15,    74,    79,   233,   157,
     298,   299,   300,    85,   239,    80,   173,   309,    33,    84,
     228,   216,    79,    16,    17,    18,    19,    20,    85,   160,
      14,    80,   166,   164,   168,   169,   167,   171,    82,   202,
     197,    79,   173,   238,    79,    83,    76,   181,    83,    79,
      14,    59,    47,   187,   188,   186,    84,    21,    79,    87,
      81,   195,    79,    27,    81,   260,   197,    48,    75,   242,
     358,   359,    76,    82,   205,    18,    19,    20,    79,    43,
      81,    79,   277,    81,    28,   216,   311,    80,   313,   220,
      77,    84,   287,    79,    77,    81,    76,   228,     6,    63,
       8,    65,    10,    80,    12,    13,    81,   238,    28,   240,
      74,   242,   243,   244,   339,    80,   247,    30,    76,   344,
     254,   278,   253,   257,   255,    82,    34,     9,    76,   260,
      80,    39,    81,    47,     6,   360,     8,    77,    10,   273,
     271,    13,    81,    51,    78,    76,   277,   278,    76,    33,
      38,    42,   283,    77,   285,   286,   287,   288,    66,    67,
      35,    77,    34,    14,    30,    69,    22,    39,    33,    76,
      21,    76,    80,   304,    77,   309,    27,    71,    76,    51,
      16,    17,    18,    19,    20,    42,    76,    76,   319,   320,
      73,    41,    43,    61,    66,    16,    17,    18,    19,    20,
      16,    17,    18,    19,    20,    17,    14,    14,    80,    80,
      42,    31,    63,    21,    21,    76,    76,    76,    24,    27,
      27,   352,    53,    74,    78,    42,    79,    78,    76,    29,
      13,    42,    81,    33,    55,    43,    43,    42,    78,    47,
      76,    86,    41,    78,    80,    78,   355,   244,    78,    49,
      53,   278,    52,   307,   156,    63,    63,    29,    58,    80,
     136,    33,    62,   169,    80,    -1,    74,    74,    68,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    49,    78,    -1,
      52,    16,    17,    18,    19,    20,    58,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    64,    89,    90,    96,    91,    92,    91,     0,
      76,    47,    76,     7,    97,    23,    11,    93,    99,    99,
      15,    98,    91,   100,    74,   104,   104,   104,    33,   101,
      76,    79,    91,   105,    14,   120,   120,   120,    59,    80,
     102,    91,    82,    91,    91,   121,   122,    75,   127,   127,
     127,    91,   103,   101,     6,     8,    10,    12,    13,    34,
      39,    51,    66,    67,    80,    91,   106,   107,   108,   109,
     110,   112,   116,   117,   118,   130,   131,   132,    82,    76,
     122,   103,   128,    77,    94,    48,   129,    21,    27,    43,
      63,   144,   145,   147,   148,   149,   150,    79,    81,   102,
      40,    80,    28,     5,    16,    17,    18,    19,    20,    80,
      91,   113,   114,   160,   173,   174,   175,   176,    77,   111,
     174,    76,   106,   107,   106,    83,    29,    33,    49,    52,
      58,    62,    68,    70,    72,    76,    95,   155,   156,   157,
     158,   159,   160,   162,   163,   168,   169,   170,   172,   173,
     145,   146,    91,    91,    91,    91,   145,   104,   154,    91,
      80,    81,   103,   106,    28,   176,    80,    28,    79,    84,
      87,    30,   103,   119,    79,    81,    76,    82,   106,    76,
     176,     9,    91,   176,    91,    94,    32,    46,    72,    76,
     176,    78,   155,    76,    94,    82,   145,    80,   151,   151,
     151,   154,   120,    81,   103,    77,    81,   106,    81,   161,
     176,   106,   114,   161,    47,   176,    83,    78,   103,   174,
      84,   123,   176,    76,    82,    76,   176,    76,    33,    38,
      91,   176,   176,    35,   176,   103,   152,   153,    42,   127,
      77,    81,    14,    65,    74,   103,   133,   136,   137,   138,
     139,   140,   145,    77,    79,    81,    85,    30,   115,   106,
      83,    17,    91,   123,   124,   125,   126,   123,    69,    91,
     173,    22,   171,    33,    76,    94,    76,    83,    76,    81,
     106,    94,   133,    77,   122,   136,   105,    83,    71,   134,
     137,    76,   133,   176,    91,   176,    76,   106,    42,    42,
      79,    85,    79,    85,    79,    85,    76,   164,   165,   166,
      91,    41,   114,    73,   106,   153,   134,   133,   106,   136,
      61,   135,     3,    37,    40,    45,   141,   142,   143,   134,
      80,    76,   123,   123,   123,    17,    91,    76,   165,    42,
      55,   114,   167,   176,    31,    94,    24,    94,    53,   135,
     134,    76,   136,    78,    76,    79,   135,    81,    42,    42,
      42,    94,    86,    94,    78,   135,   143,    78,   123,   123,
      94,    78
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
#line 30 ".\\moronico.y"
    {printf("\t nombre -> identificador_con_cuatro_ptos_ceroomas IDENTIFICADOR \n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 38 ".\\moronico.y"
    {printf("\t bloque_programa -> declaracion_cargas_op declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones \n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 41 ".\\moronico.y"
    {printf("\t bloque_instrucciones -> '{' instruccion_unoomas '}'  \n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 44 ".\\moronico.y"
    {printf("\t instruccion_unoomas -> instruccion  \n");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 45 ".\\moronico.y"
    {printf("\t instruccion_unoomas -> instruccion_unoomas instruccion  \n");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 48 ".\\moronico.y"
    {printf("\t definicion_paquete -> PAQUETE nombre ';' seccion_cabecera seccion_cuerpo  \n");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 51 ".\\moronico.y"
    {printf("\t seccion_cabecera -> CABECERA declaracion_cargas_op declaracion_tipos declaracion_constantes declaracion_variables declaracion_interfaces  \n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 54 ".\\moronico.y"
    {printf("\t seccion_cuerpo -> CUERPO declaracion_tipos declaracion_constantes declaracion_variables declaracion_subprograma  \n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 57 ".\\moronico.y"
    {printf("\t declaracion_cargas_op -> CARGA declaracion_carga_unoomas ';'  \n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 60 ".\\moronico.y"
    {printf("\t declaracion_carga_unoomas -> nombre en_path_op nombres_op  \n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 61 ".\\moronico.y"
    {printf("\t declaracion_carga_unoomas -> declaracion_carga_unoomas ',' nombre en_path_op nombres_op  \n");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 65 ".\\moronico.y"
    {printf("\t en_path_op -> EN PATH  \n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 69 ".\\moronico.y"
    {printf("\t nombres_op -> '('  nombres_comas ')'  \n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 72 ".\\moronico.y"
    {printf("\t nombres_comas -> nombres_comas ',' nombre  \n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 73 ".\\moronico.y"
    {printf("\t nombres_comas -> nombre  \n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 82 ".\\moronico.y"
    {printf("\t declaracionlaracion_tipos -> TIPO declaracion_tipo  \n");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 88 ".\\moronico.y"
    {printf("\t declaracion_tipo -> nombre '=' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 89 ".\\moronico.y"
    {printf("\t declaracion_tipo -> nombre '=' tipo_estructurado  \n");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 92 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> nombre  \n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 93 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_escalar  \n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 94 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_fichero  \n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 95 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_enumerado  \n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 96 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_lista  \n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 97 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_lista_asociativa  \n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 98 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_conjunto  \n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 101 ".\\moronico.y"
    {printf("\t tipo_estructurado -> tipo_registro  \n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 102 ".\\moronico.y"
    {printf("\t tipo_estructurado -> declaracion_clase  \n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 105 ".\\moronico.y"
    {printf("\t tipo_escalar -> ENTERO  \n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 106 ".\\moronico.y"
    {printf("\t tipo_escalar -> REAL  \n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 107 ".\\moronico.y"
    {printf("\t tipo_escalar -> BOOLEANO  \n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 108 ".\\moronico.y"
    {printf("\t tipo_escalar -> CARACTER  \n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 109 ".\\moronico.y"
    {printf("\t tipo_escalar -> CADENA  \n");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 112 ".\\moronico.y"
    {printf("\t tipo_fichero -> FICHERO  \n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 115 ".\\moronico.y"
    {printf("\t tipo_enumerado -> '(' expresion_constante_unoomas ')'  \n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 118 ".\\moronico.y"
    {printf("\t expresion_constante_unoomas -> expresion_constante  \n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 119 ".\\moronico.y"
    {printf("\t expresion_constante_unoomas -> expresion_constante_unoomas ',' expresion_constante  \n");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 122 ".\\moronico.y"
    {printf("\t tipo_lista -> LISTA rango_lista DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 125 ".\\moronico.y"
    {printf("\t rango_lista ->  rango_lista ',' rango  \n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 126 ".\\moronico.y"
    {printf("\t rango_lista -> rango  \n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 129 ".\\moronico.y"
    {printf("\t rango -> expresion DOS_PTOS expresion expresion_rango_op  \n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 133 ".\\moronico.y"
    {printf("\t expresion_rango_op -> DOS_PTOS expresion  \n");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 136 ".\\moronico.y"
    {printf("\t tipo_lista_asociativa -> LISTA ASOCIATIVA DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 139 ".\\moronico.y"
    {printf("\t tipo_conjunto -> CONJUNTO DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 142 ".\\moronico.y"
    {printf("\t tipo_registro -> REGISTRO '{' declaracion_campo '}'  \n");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 145 ".\\moronico.y"
    {printf("\t declaracion_campo -> declaracion_campo nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;



/* Line 1455 of yacc.c  */
#line 2118 "moronico.tab.c"
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
#line 409 ".\\moronico.y"


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

