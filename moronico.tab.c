
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
#define YYLAST   429

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNRULES -- Number of states.  */
#define YYNSTATES  371

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
      70,    73,    74,    78,    82,    84,    85,    89,    92,    97,
     101,   103,   105,   107,   109,   111,   113,   115,   117,   119,
     121,   123,   125,   127,   129,   131,   135,   137,   141,   146,
     150,   152,   157,   158,   161,   166,   170,   175,   181,   186,
     187,   191,   194,   200,   202,   206,   210,   214,   218,   220,
     226,   230,   236,   240,   241,   244,   251,   256,   257,   262,
     266,   268,   270,   280,   291,   301,   310,   313,   315,   316,
     319,   320,   323,   325,   328,   330,   332,   334,   339,   342,
     345,   348,   353,   355,   359,   361,   363,   365,   367,   369,
     373,   376,   378,   380,   382,   384,   390,   394,   398,   401,
     402,   406,   408,   412,   417,   421,   426,   428,   430,   432,
     434,   436,   438,   440,   442,   444,   446,   451,   456,   459,
     463,   466,   469,   477,   481,   483,   490,   495,   502,   507,
     511,   514,   515,   519,   521,   523,   525,   528,   533,   540,
     546,   549,   553,   560,   565,   570,   574,   576,   581,   585,
     587,   589,   591,   593,   595,   597,   599,   601,   605
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      89,     0,    -1,    90,    -1,    96,    -1,    64,    91,    76,
      93,    -1,    92,    47,    -1,    -1,    92,    47,    23,    -1,
      99,   104,   120,   126,    94,    -1,    77,    95,    78,    -1,
      95,   153,    -1,   153,    -1,    57,    91,    76,    97,    98,
      -1,     7,    99,   104,   120,   126,   128,    -1,    15,   104,
     120,   126,   143,    -1,    -1,    11,   100,    76,    -1,    91,
     101,   102,    -1,   100,    79,    91,   101,   102,    -1,    -1,
      33,    59,    -1,    -1,    80,   103,    81,    -1,   103,    79,
      91,    -1,    91,    -1,    -1,   104,    74,   105,    -1,    74,
     105,    -1,    91,    82,   106,    76,    -1,    91,    82,   107,
      -1,    91,    -1,   108,    -1,   109,    -1,   110,    -1,   112,
      -1,   116,    -1,   117,    -1,   118,    -1,   129,    -1,    34,
      -1,    66,    -1,     6,    -1,    10,    -1,     8,    -1,    39,
      -1,    80,   111,    81,    -1,   172,    -1,   111,    79,   172,
      -1,    51,   113,    28,   106,    -1,   113,    79,   114,    -1,
     114,    -1,   174,    30,   174,   115,    -1,    -1,    30,   174,
      -1,    51,     5,    28,   106,    -1,    13,    28,   106,    -1,
      67,    77,   119,    78,    -1,   119,   103,    83,   106,    76,
      -1,   103,    83,   106,    76,    -1,    -1,   120,    14,   121,
      -1,    14,   121,    -1,    91,    76,   106,    82,   122,    -1,
     174,    -1,    84,   123,    85,    -1,    84,   124,    85,    -1,
      84,   125,    85,    -1,   123,    79,   122,    -1,   122,    -1,
     124,    79,    17,    42,   122,    -1,    17,    42,   122,    -1,
     125,    79,    91,    42,   122,    -1,    91,    42,   122,    -1,
      -1,    75,   127,    -1,   103,    83,   106,    82,   122,    76,
      -1,   103,    83,   106,    76,    -1,    -1,   128,    48,   144,
      76,    -1,    48,   144,    76,    -1,   130,    -1,   131,    -1,
      12,    40,    80,    81,    77,   132,   133,   134,    78,    -1,
      12,    40,    80,   103,    81,    77,   132,   133,   134,    78,
      -1,    12,    80,   103,    81,    77,   132,   133,   134,    78,
      -1,    12,    80,    81,    77,   132,   133,   134,    78,    -1,
      65,   135,    -1,   135,    -1,    -1,    71,   135,    -1,    -1,
      61,   135,    -1,   136,    -1,   135,   136,    -1,   137,    -1,
     138,    -1,   139,    -1,   144,    76,   140,    76,    -1,   144,
      76,    -1,    74,   105,    -1,    14,   121,    -1,   103,    83,
     106,    76,    -1,   141,    -1,   141,    79,   142,    -1,   142,
      -1,    45,    -1,     3,    -1,    37,    -1,    40,    -1,   143,
     144,   152,    -1,   144,   152,    -1,   145,    -1,   146,    -1,
     147,    -1,   148,    -1,    43,    91,   149,    42,   106,    -1,
      63,    91,   149,    -1,    21,    91,   149,    -1,    27,    91,
      -1,    -1,    80,   150,    81,    -1,   151,    -1,   150,    76,
     151,    -1,   103,    83,   106,    53,    -1,   103,    83,   106,
      -1,   104,   120,   126,    94,    -1,    76,    -1,   154,    -1,
     155,    -1,   156,    -1,   157,    -1,   160,    -1,   161,    -1,
     166,    -1,   168,    -1,   170,    -1,   171,    82,   174,    76,
      -1,    70,    72,   174,    76,    -1,    70,    76,    -1,    29,
     174,    76,    -1,    29,    76,    -1,   158,    76,    -1,    91,
      80,   159,    81,    91,    80,    81,    -1,   159,    79,   174,
      -1,   174,    -1,    72,   174,    35,    94,    73,    94,    -1,
      72,   174,    35,    94,    -1,    33,     9,   174,    69,   162,
      76,    -1,   162,   163,    42,    94,    -1,   163,    42,    94,
      -1,   164,   165,    -1,    -1,   164,   165,    86,    -1,   174,
      -1,   114,    -1,    55,    -1,   167,    94,    -1,    58,    91,
      33,   171,    -1,    68,    32,    91,    33,   114,    24,    -1,
      68,    32,    91,    33,   114,    -1,    52,   174,    -1,    68,
      46,   174,    -1,    62,    94,    38,   169,    41,    94,    -1,
      62,    94,    38,   169,    -1,    22,    91,    31,    94,    -1,
      49,    91,    76,    -1,    91,    -1,   171,    84,   159,    85,
      -1,   171,    87,    47,    -1,    19,    -1,    20,    -1,    17,
      -1,    18,    -1,    16,    -1,   172,    -1,   171,    -1,   158,
      -1,    80,   174,    81,    -1,   173,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    23,    23,    24,    27,    30,    33,    34,    38,    41,
      44,    45,    48,    51,    54,    56,    57,    60,    61,    64,
      65,    68,    69,    72,    73,    81,    82,    83,    87,    88,
      91,    92,    93,    94,    95,    96,    97,   100,   101,   104,
     105,   106,   107,   108,   111,   114,   117,   118,   121,   124,
     125,   128,   131,   132,   135,   138,   141,   144,   145,   153,
     154,   155,   158,   160,   161,   162,   163,   166,   167,   170,
     171,   174,   175,   178,   179,   182,   183,   187,   188,   189,
     193,   194,   197,   198,   202,   203,   207,   208,   211,   212,
     215,   216,   219,   220,   223,   224,   225,   226,   227,   230,
     233,   236,   239,   242,   243,   246,   247,   248,   249,   258,
     259,   262,   263,   264,   265,   268,   271,   274,   277,   280,
     281,   284,   285,   288,   289,   292,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   314,   316,   317,   320,
     321,   324,   327,   331,   332,   335,   336,   339,   342,   343,
     346,   348,   349,   352,   353,   354,   357,   360,   361,   362,
     363,   364,   367,   368,   371,   374,   382,   383,   384,   387,
     388,   389,   390,   391,   394,   395,   396,   397,   402
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
  "declaracion_constante", "valor_constante", "valor_constante_comas",
  "clave_valor", "campo_valor", "declaracion_variables",
  "declaracion_variable", "declaracion_interfaces", "declaracion_clase",
  "declaracion_clase_mod", "declaracion_clase_nomod",
  "declaraciones_publicas", "declaraciones_semi", "declaraciones_privadas",
  "declaracion_componente_unoomas", "declaracion_componente",
  "declaracion_tipo_anidado", "declaracion_constante_anidada",
  "declaracion_atributos", "modificadores", "modificador_comas",
  "modificador", "declaracion_subprograma", "cabecera_subprograma",
  "cabecera_funcion", "cabecera_procedimiento", "cabecera_constructor",
  "cabecera_destructor", "declaracion_parametros",
  "lista_parametros_formales", "parametros_formales", "bloque_subprograma",
  "instruccion", "instruccion_asignacion", "instruccion_salir",
  "instruccion_devolver", "instruccion_llamada", "llamada_subprograma",
  "expresion_comas", "instruccion_si", "instruccion_casos", "caso",
  "entradas", "entradas_op", "entrada", "instruccion_bucle",
  "clausula_iteracion", "instruccion_probar_excepto", "clausula_excepcion",
  "instruccion_lanzar", "objeto", "expresion_constante",
  "expresion_primaria", "expresion", 0
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
     101,   102,   102,   103,   103,   104,   104,   104,   105,   105,
     106,   106,   106,   106,   106,   106,   106,   107,   107,   108,
     108,   108,   108,   108,   109,   110,   111,   111,   112,   113,
     113,   114,   115,   115,   116,   117,   118,   119,   119,   120,
     120,   120,   121,   122,   122,   122,   122,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   128,   128,   128,
     129,   129,   130,   130,   131,   131,   132,   132,   133,   133,
     134,   134,   135,   135,   136,   136,   136,   136,   136,   137,
     138,   139,   140,   141,   141,   142,   142,   142,   142,   143,
     143,   144,   144,   144,   144,   145,   146,   147,   148,   149,
     149,   150,   150,   151,   151,   152,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   154,   155,   155,   156,
     156,   157,   158,   159,   159,   160,   160,   161,   162,   162,
     163,   164,   164,   165,   165,   165,   166,   167,   167,   167,
     167,   167,   168,   168,   169,   170,   171,   171,   171,   172,
     172,   172,   172,   172,   173,   173,   173,   173,   174
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     2,     0,     3,     5,     3,
       2,     1,     5,     6,     5,     0,     3,     3,     5,     0,
       2,     0,     3,     3,     1,     0,     3,     2,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     4,     3,
       1,     4,     0,     2,     4,     3,     4,     5,     4,     0,
       3,     2,     5,     1,     3,     3,     3,     3,     1,     5,
       3,     5,     3,     0,     2,     6,     4,     0,     4,     3,
       1,     1,     9,    10,     9,     8,     2,     1,     0,     2,
       0,     2,     1,     2,     1,     1,     1,     4,     2,     2,
       2,     4,     1,     3,     1,     1,     1,     1,     1,     3,
       2,     1,     1,     1,     1,     5,     3,     3,     2,     0,
       3,     1,     3,     4,     3,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     2,     3,
       2,     2,     7,     3,     1,     6,     4,     6,     4,     3,
       2,     0,     3,     1,     1,     1,     2,     4,     6,     5,
       2,     3,     6,     4,     4,     3,     1,     4,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     6,     6,     0,     2,     3,     0,     0,     0,     1,
       0,     5,    15,    15,     0,     7,     6,     4,    25,    25,
      25,    12,    19,     0,     6,    59,    59,    59,     0,    21,
      16,     6,     0,    27,     6,     6,    73,    73,    73,    20,
       6,    17,    19,     6,     0,    61,    26,     6,     6,     0,
      77,     0,    24,     0,    21,    41,    43,    42,     0,     0,
      39,    44,     6,    40,     0,     0,    30,     0,    29,    31,
      32,    33,    34,    35,    36,    37,    38,    80,    81,     6,
      60,     0,    74,     6,     8,     0,    13,     6,     6,     6,
       6,    14,    25,   111,   112,   113,   114,     6,    22,    18,
       0,     6,     6,     0,   173,   171,   172,   169,   170,     6,
     166,     0,    50,   176,   175,   174,   178,     0,     6,     0,
      46,    28,     0,     6,     6,     0,     6,     6,     6,     0,
       0,     0,     6,   126,     6,    11,   127,   128,   129,   130,
       0,   131,   132,   133,     0,   134,   135,     0,     0,     0,
     119,   118,   119,   119,    25,    59,   110,    23,     6,     0,
       0,    55,     6,     0,     6,     6,     6,     6,     0,     6,
       0,     6,     0,    45,     6,     0,   140,     0,     6,     0,
     160,     0,     0,     6,     6,     6,   138,     0,     9,    10,
     141,   156,     6,    79,     0,     6,   117,     0,   116,   109,
      73,     0,     0,     6,     0,    54,   177,     0,   144,    48,
      49,     0,   168,    52,     6,    56,     0,    47,     6,    62,
      63,    76,     6,   139,     0,   165,     6,     0,     0,   161,
       0,     0,     0,    78,     0,     0,   121,     6,     0,     6,
       0,     6,     6,     6,     0,    88,    87,    92,    94,    95,
      96,     0,     6,     6,     6,   167,     6,    51,     0,     6,
     171,   166,    68,     0,     0,     0,     0,   151,   166,   157,
       6,   163,     6,   137,   146,   136,     6,     6,   120,   115,
     125,    88,     6,   100,    86,    99,     6,     6,    90,    93,
      98,    88,   143,     0,    53,    58,     0,     6,     6,     6,
      64,     0,    65,     6,    66,    75,   151,     0,     6,     0,
       0,   159,     0,   124,   122,    90,    88,     0,    89,     6,
       0,   106,   107,   108,   105,     0,   102,   104,    90,     0,
      57,    70,    72,    67,     0,     0,   147,     0,     0,   155,
     154,   150,   153,     0,   162,   158,   145,   123,     0,    90,
     101,     6,    85,    97,     0,     0,   142,     6,     6,     0,
     149,   152,   164,    82,     0,   103,    84,    69,    71,   148,
      83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,   110,     7,    17,    84,   134,     5,    14,
      21,    18,    23,    29,    41,   244,   155,    33,    67,    68,
      69,    70,    71,   119,    72,   111,   112,   257,    73,    74,
      75,   171,    36,    45,   219,   263,   264,   265,    49,    82,
      86,    76,    77,    78,   245,   288,   320,   246,   247,   248,
     249,   250,   325,   326,   327,    91,   251,    93,    94,    95,
      96,   196,   235,   236,   156,   135,   136,   137,   138,   139,
     113,   207,   141,   142,   306,   307,   308,   341,   143,   144,
     145,   271,   146,   114,   115,   116,   220
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -223
static const yytype_int16 yypact[] =
{
     -21,  -223,  -223,    13,  -223,  -223,     6,    -3,    14,  -223,
      53,    69,    92,    92,    97,  -223,  -223,  -223,    57,    57,
      57,  -223,    87,   -55,  -223,    21,    21,    21,    81,    98,
    -223,  -223,    67,  -223,  -223,  -223,    -5,    -5,    -5,  -223,
    -223,  -223,    87,   253,   111,  -223,  -223,  -223,  -223,   121,
     145,    70,  -223,    -8,    98,  -223,  -223,  -223,   -28,   175,
    -223,  -223,    46,  -223,   132,   335,  -223,   128,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,   135,
    -223,   116,  -223,   353,  -223,    70,   166,  -223,  -223,  -223,
    -223,    70,    57,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
     148,   153,   135,   205,  -223,  -223,  -223,  -223,  -223,   202,
     163,    -2,  -223,  -223,   -39,  -223,  -223,   214,  -223,    84,
    -223,  -223,   173,   135,   172,   241,  -223,   202,  -223,   121,
       9,   124,   202,  -223,   342,  -223,  -223,  -223,  -223,  -223,
     178,  -223,  -223,  -223,   121,  -223,  -223,    89,   186,    70,
     184,  -223,   184,   184,    57,    21,  -223,  -223,   187,   190,
     100,  -223,   135,   199,   202,   135,   202,   202,   237,   202,
     127,   210,   335,  -223,   254,    47,  -223,   213,   202,   215,
    -223,   257,   260,  -223,   202,   202,  -223,   264,  -223,  -223,
    -223,  -223,   202,  -223,   224,  -223,  -223,   261,  -223,  -223,
      -5,   233,   158,   302,   234,  -223,  -223,   168,  -223,  -223,
    -223,    49,  -223,   271,   135,  -223,   144,  -223,   277,  -223,
    -223,  -223,   254,  -223,   243,  -223,  -223,   291,   282,  -223,
     246,   121,   248,  -223,   147,    96,  -223,   135,   121,   302,
     249,  -223,    11,  -223,   152,   265,   321,  -223,  -223,  -223,
    -223,   252,   302,   202,  -223,  -223,   202,  -223,   255,   135,
     283,   -23,  -223,    68,    73,    77,   256,  -223,  -223,   -39,
    -223,   296,   202,  -223,   266,  -223,   135,  -223,  -223,  -223,
    -223,   265,   302,  -223,   321,  -223,   135,    11,   269,  -223,
      65,   265,  -223,   267,  -223,  -223,   270,   254,   254,   254,
    -223,   323,  -223,  -223,  -223,  -223,   273,   299,   289,   325,
     121,   334,   121,   306,  -223,   269,   265,   284,   321,    11,
     288,  -223,  -223,  -223,  -223,   286,   293,  -223,   269,   292,
    -223,  -223,  -223,  -223,   328,   337,  -223,   338,   121,  -223,
    -223,   295,   214,   121,  -223,  -223,  -223,  -223,   305,   269,
    -223,   300,  -223,  -223,    65,   307,  -223,   254,   254,   121,
    -223,  -223,  -223,  -223,   309,  -223,  -223,  -223,  -223,  -223,
    -223
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -223,  -223,  -223,    -1,  -223,  -223,  -127,  -223,  -223,  -223,
    -223,   364,  -223,   346,   336,   -20,   259,   -31,   -30,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -148,  -223,  -223,  -223,
    -223,  -223,   -16,   -44,  -191,  -223,  -223,  -223,   -32,  -223,
    -223,  -223,  -223,  -223,  -199,  -222,  -169,  -220,  -209,  -223,
    -223,  -223,  -223,  -223,    35,  -223,   -35,  -223,  -223,  -223,
    -223,     2,  -223,   115,   239,   262,  -223,  -223,  -223,  -223,
     -54,   230,  -223,  -223,  -223,    93,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,   -76,   -57,  -223,   -48
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -92
static const yytype_int16 yytable[] =
{
       6,     8,   182,    80,    46,    50,    51,   147,   120,    47,
      37,    38,   100,     9,   117,    22,    92,   191,   210,   298,
      53,    30,   284,    32,    31,   241,   165,   262,    81,   140,
      42,   266,    87,    44,    32,    34,     1,   289,    88,    52,
     281,   183,    66,     2,    11,   167,    44,    52,   168,   122,
     148,   103,   101,   291,    89,   184,   154,   164,   147,   315,
      13,   163,   104,   105,   106,   107,   108,   318,   321,   328,
      48,    97,   161,    98,    90,   289,   177,   166,    66,   180,
     140,   160,    10,   316,   187,   243,   150,   151,   152,   153,
      12,    87,    15,   175,   349,    35,   157,    88,   170,   351,
      52,    66,   322,    16,   274,   323,   331,   332,   333,   289,
     324,   280,    20,    89,   194,   217,   208,    52,   117,   208,
      28,   213,    66,   221,   311,   179,   109,   181,   253,   222,
     224,    24,   205,    90,   255,   209,   229,   230,   202,   200,
      39,    55,   289,    56,   232,    57,   348,   299,    59,    43,
     269,   216,   301,   300,   197,   198,   303,    52,   302,   355,
     340,    66,   304,   172,    66,   173,   367,   368,   238,    60,
      52,   192,   277,   167,    61,   234,   168,   278,    40,    97,
     364,   204,   228,   344,   258,   346,    62,    79,   104,   105,
     106,   107,   108,    85,    52,    97,   185,   283,    83,   123,
     186,    63,    52,   102,   121,   292,    97,   279,   294,   118,
     214,   360,   285,    66,   149,    65,   362,   261,   104,   105,
     106,   107,   108,    97,   117,   268,    97,   259,   158,   296,
     276,    97,   369,   162,   159,   286,    66,    97,    52,   240,
      44,    52,    32,   164,   169,    52,   313,   253,   176,   254,
     178,    52,   109,   293,   190,   174,   317,   234,    66,    55,
     342,    56,   193,    57,   195,    58,    59,   203,   201,   309,
     104,   105,   106,   107,   108,    66,    52,    25,    26,    27,
     206,    52,   109,    52,   212,    66,    52,    60,   215,   223,
     226,   225,    61,   104,   260,   106,   107,   108,   227,   231,
     233,   256,   335,   237,    62,   104,   105,   106,   107,   108,
     239,   252,   267,   270,   241,   272,   241,    52,    52,    63,
      64,    87,   273,    87,   275,   297,   282,    88,   290,    88,
     319,   295,   305,    65,   109,   241,   287,   310,   218,   312,
     334,   338,    87,    89,   339,    89,   330,   329,    88,   336,
      52,   104,   105,   106,   107,   108,   343,   109,   345,   347,
     350,   218,   353,    90,    89,    90,   352,   242,    -6,   109,
     357,   124,   354,   356,   243,   125,   243,    19,   -91,   358,
     359,   361,   124,   363,    90,   366,   125,   370,    54,   365,
      99,   126,   314,   199,   127,   243,   189,   211,     0,   337,
     128,     0,   126,     0,   129,   127,     0,     0,     0,     0,
     130,   128,   131,     0,   132,   129,     0,     0,   133,     0,
     188,   130,     0,   131,     0,   132,     0,     0,     0,   133
};

static const yytype_int16 yycheck[] =
{
       1,     2,   129,    47,    35,    37,    38,    83,    65,    14,
      26,    27,    40,     0,    62,    16,    51,   144,   166,    42,
      40,    76,   242,    24,    79,    14,    28,   218,    48,    83,
      31,   222,    21,    34,    35,    14,    57,   246,    27,    40,
     239,    32,    43,    64,    47,    84,    47,    48,    87,    79,
      85,     5,    80,   252,    43,    46,    91,    80,   134,   281,
       7,   109,    16,    17,    18,    19,    20,   287,     3,   291,
      75,    79,   102,    81,    63,   284,   124,    79,    79,   127,
     134,   101,    76,   282,   132,    74,    87,    88,    89,    90,
      76,    21,    23,   123,   316,    74,    97,    27,   118,   319,
     101,   102,    37,    11,   231,    40,   297,   298,   299,   318,
      45,   238,    15,    43,   149,   172,   164,   118,   166,   167,
      33,   169,   123,    76,   272,   126,    80,   128,    79,    82,
     178,    74,   162,    63,    85,   165,   184,   185,   158,   155,
      59,     6,   351,     8,   192,    10,   315,    79,    13,    82,
     226,   171,    79,    85,   152,   153,    79,   158,    85,   328,
     308,   162,    85,    79,   165,    81,   357,   358,   200,    34,
     171,    82,    76,    84,    39,   195,    87,    81,    80,    79,
     349,    81,   183,   310,   214,   312,    51,    76,    16,    17,
      18,    19,    20,    48,   195,    79,    72,   241,    77,    83,
      76,    66,   203,    28,    76,   253,    79,   237,   256,    77,
      83,   338,   243,   214,    48,    80,   343,   218,    16,    17,
      18,    19,    20,    79,   272,   226,    79,    83,    80,   259,
      83,    79,   359,    28,    81,    83,   237,    79,   239,    81,
     241,   242,   243,    80,    30,   246,   276,    79,    76,    81,
       9,   252,    80,   254,    76,    82,   286,   277,   259,     6,
     308,     8,    76,    10,    80,    12,    13,    77,    81,   270,
      16,    17,    18,    19,    20,   276,   277,    18,    19,    20,
      81,   282,    80,   284,    47,   286,   287,    34,    78,    76,
      33,    76,    39,    16,    17,    18,    19,    20,    38,    35,
      76,    30,   303,    42,    51,    16,    17,    18,    19,    20,
      77,    77,    69,    22,    14,    33,    14,   318,   319,    66,
      67,    21,    76,    21,    76,    42,    77,    27,    76,    27,
      61,    76,    76,    80,    80,    14,    71,    41,    84,    73,
      17,    42,    21,    43,    55,    43,    76,    80,    27,    76,
     351,    16,    17,    18,    19,    20,    31,    80,    24,    53,
      76,    84,    76,    63,    43,    63,    78,    65,    47,    80,
      42,    29,    79,    81,    74,    33,    74,    13,    78,    42,
      42,    86,    29,    78,    63,    78,    33,    78,    42,   354,
      54,    49,   277,   154,    52,    74,   134,   167,    -1,   306,
      58,    -1,    49,    -1,    62,    52,    -1,    -1,    -1,    -1,
      68,    58,    70,    -1,    72,    62,    -1,    -1,    76,    -1,
      78,    68,    -1,    70,    -1,    72,    -1,    -1,    -1,    76
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    64,    89,    90,    96,    91,    92,    91,     0,
      76,    47,    76,     7,    97,    23,    11,    93,    99,    99,
      15,    98,    91,   100,    74,   104,   104,   104,    33,   101,
      76,    79,    91,   105,    14,    74,   120,   120,   120,    59,
      80,   102,    91,    82,    91,   121,   105,    14,    75,   126,
     126,   126,    91,   103,   101,     6,     8,    10,    12,    13,
      34,    39,    51,    66,    67,    80,    91,   106,   107,   108,
     109,   110,   112,   116,   117,   118,   129,   130,   131,    76,
     121,   103,   127,    77,    94,    48,   128,    21,    27,    43,
      63,   143,   144,   145,   146,   147,   148,    79,    81,   102,
      40,    80,    28,     5,    16,    17,    18,    19,    20,    80,
      91,   113,   114,   158,   171,   172,   173,   174,    77,   111,
     172,    76,   106,    83,    29,    33,    49,    52,    58,    62,
      68,    70,    72,    76,    95,   153,   154,   155,   156,   157,
     158,   160,   161,   166,   167,   168,   170,   171,   144,    48,
      91,    91,    91,    91,   144,   104,   152,    91,    80,    81,
     103,   106,    28,   174,    80,    28,    79,    84,    87,    30,
     103,   119,    79,    81,    82,   106,    76,   174,     9,    91,
     174,    91,    94,    32,    46,    72,    76,   174,    78,   153,
      76,    94,    82,    76,   144,    80,   149,   149,   149,   152,
     120,    81,   103,    77,    81,   106,    81,   159,   174,   106,
     114,   159,    47,   174,    83,    78,   103,   172,    84,   122,
     174,    76,    82,    76,   174,    76,    33,    38,    91,   174,
     174,    35,   174,    76,   103,   150,   151,    42,   126,    77,
      81,    14,    65,    74,   103,   132,   135,   136,   137,   138,
     139,   144,    77,    79,    81,    85,    30,   115,   106,    83,
      17,    91,   122,   123,   124,   125,   122,    69,    91,   171,
      22,   169,    33,    76,    94,    76,    83,    76,    81,   106,
      94,   132,    77,   121,   135,   105,    83,    71,   133,   136,
      76,   132,   174,    91,   174,    76,   106,    42,    42,    79,
      85,    79,    85,    79,    85,    76,   162,   163,   164,    91,
      41,   114,    73,   106,   151,   133,   132,   106,   135,    61,
     134,     3,    37,    40,    45,   140,   141,   142,   133,    80,
      76,   122,   122,   122,    17,    91,    76,   163,    42,    55,
     114,   165,   174,    31,    94,    24,    94,    53,   134,   133,
      76,   135,    78,    76,    79,   134,    81,    42,    42,    42,
      94,    86,    94,    78,   134,   142,    78,   122,   122,    94,
      78
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
    {printf("\t declaracionlaracion_tipos -> declaracionlaracion_tipos TIPO declaracion_tipo  \n");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 83 ".\\moronico.y"
    {printf("\t declaracionlaracion_tipos -> TIPO declaracion_tipo  \n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 87 ".\\moronico.y"
    {printf("\t declaracion_tipo -> nombre '=' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 88 ".\\moronico.y"
    {printf("\t declaracion_tipo -> nombre '=' tipo_estructurado  \n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 91 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> nombre  \n");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 92 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_escalar  \n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 93 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_fichero  \n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 94 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_enumerado  \n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 95 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_lista  \n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 96 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_lista_asociativa  \n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 97 ".\\moronico.y"
    {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_conjunto  \n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 100 ".\\moronico.y"
    {printf("\t tipo_estructurado -> tipo_registro  \n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 101 ".\\moronico.y"
    {printf("\t tipo_estructurado -> declaracion_clase  \n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 104 ".\\moronico.y"
    {printf("\t tipo_escalar -> ENTERO  \n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 105 ".\\moronico.y"
    {printf("\t tipo_escalar -> REAL  \n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 106 ".\\moronico.y"
    {printf("\t tipo_escalar -> BOOLEANO  \n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 107 ".\\moronico.y"
    {printf("\t tipo_escalar -> CARACTER  \n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 108 ".\\moronico.y"
    {printf("\t tipo_escalar -> CADENA  \n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 111 ".\\moronico.y"
    {printf("\t tipo_fichero -> FICHERO  \n");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 114 ".\\moronico.y"
    {printf("\t tipo_enumerado -> '(' expresion_constante_unoomas ')'  \n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 117 ".\\moronico.y"
    {printf("\t expresion_constante_unoomas -> expresion_constante  \n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 118 ".\\moronico.y"
    {printf("\t expresion_constante_unoomas -> expresion_constante_unoomas ',' expresion_constante  \n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 121 ".\\moronico.y"
    {printf("\t tipo_lista -> LISTA rango_lista DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 124 ".\\moronico.y"
    {printf("\t rango_lista ->  rango_lista ',' rango  \n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 125 ".\\moronico.y"
    {printf("\t rango_lista -> rango  \n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 128 ".\\moronico.y"
    {printf("\t rango -> expresion DOS_PTOS expresion expresion_rango_op  \n");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 132 ".\\moronico.y"
    {printf("\t expresion_rango_op -> DOS_PTOS expresion  \n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 135 ".\\moronico.y"
    {printf("\t tipo_lista_asociativa -> LISTA ASOCIATIVA DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 138 ".\\moronico.y"
    {printf("\t tipo_conjunto -> CONJUNTO DE tipo_no_estructurado_o_nombre_tipo  \n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 141 ".\\moronico.y"
    {printf("\t tipo_registro -> REGISTRO '{' declaracion_campo '}'  \n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 144 ".\\moronico.y"
    {printf("\t declaracion_campo -> declaracion_campo nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");;}
    break;



/* Line 1455 of yacc.c  */
#line 2117 "moronico.tab.c"
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
#line 404 ".\\moronico.y"


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

