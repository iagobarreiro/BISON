
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 15 ".\\moronico.y"

  int     val_int;
  double  val_double;
  char*   val_string;
  char    val_char;
  char    val_bool;



/* Line 1676 of yacc.c  */
#line 137 "moronico.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


