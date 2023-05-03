%{
#include <stdio.h>
#include "moronico.h"
#include "y.tab.h"

%}

/*Macros de apoyo */
DECIMAL_DIGIT [0-9]

DECIMAL_DIGITS {DECIMAL_DIGIT}{DECIMAL_DIGIT}*
OCTAL_DIGITS \\[0-7]+
HEX_DIGIT [0-9a-fA-F]
HEX_DIGITS \\("x"|"X"){HEX_DIGIT}{HEX_DIGIT}*

REAL_DEC ([0-9]+)?(\'[0-9]+)
REAL_EXP ([0-9]+)?(\'[0-9]+)?([\^][\+\-]?[0-9]+)

UNICO_CARACTER ([^\n'\"\?\\])
CARACTERES_ESCAPADOS (\\[\\'"\?abfnrtv])
DECIMAL_CARACTER ([0-2]?[0-5]?[0-5])
OCTAL_CARACTER (\\[0-3]?[0-7]{1,2})
HEX_CARACTER (\\x{HEX_DIGIT}{1,2})


/*Macros usadas en las reglas*/
IDENTIFICADOR  [A-Za-z_][A-Za-z_0-9]*

CTC_ENTERA {DECIMAL_DIGITS}|{OCTAL_DIGITS}|{HEX_DIGITS}
CTC_REAL {REAL_DEC}|{REAL_EXP}
CTC_CARACTER {UNICO_CARACTER}|{CARACTERES_ESCAPADOS}|{DECIMAL_CARACTER}|{OCTAL_CARACTER}|{HEX_CARACTER}
CTC_CADENA \"({CTC_CARACTER}|\\\n)*\"
PATH \"(([/]|[./]|[/..])([^\n])+)\"

DELIMITADORES [{}():;,|]
CUATRO_PTOS "::"
DOS_PTOS ".."
FLECHA_DOBLE "=>"

OPERADORES ("="|"+"|"-"|"*"|"/"|"%"|"."|"["|"]"|"@"|"~"|"&"|">"|"<"|"!")
POTENCIA "**"
DESPI "<-"
DESPD "->"
EQ ":="
GEQ ">="
LEQ "=<"
NEQ "!="
OR "\\/"
AND "/\\"

COMENTARIO \/\/.*[\n]*
COMENTARIO_MULTI "/*"([^*]|"*"+[^*/])*"*/"

NOP [ \t\n]

/*Opcion para no ser sensible a minusculas y mayusulas. ?i:reg-ex no funciona en mi version*/
%option case-insensitive
%option yylineno

%%

  /*Palabras reservadas*/
abstracto { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return ABSTRACTO; }
asociativa { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return ASOCIATIVA; }
booleano { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return BOOLEANO; }
cabecera { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return CABECERA; }
cadena { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return CADENA; }
caso { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return CASO; }
caracter { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return CARACTER; }
clase { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return CLASE; }
conjunto { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return CONJUNTO; }
constante { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return CONSTANTE; }
cuerpo { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return CUERPO; }
constructor { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return CONSTRUCTOR; }
cuando { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return CUANDO; }
descendente { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return DESCENDENTE; }
destructor { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return DESTRUCTOR; }
de { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return DE; }
devolver { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return DEVOLVER; }
carga { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return CARGA; }
elemento { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return ELEMENTO; }
ejecuta { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return EJECUTA; }
en { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return EN; }
entero { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return ENTERO; }
entonces { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return ENTONCES; }
especifico { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return ESPECIFICO; }
excepto { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return EXCEPTO; }
fichero { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return FICHERO; }
final { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return FINAL; }
finalmente { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return FINALMENTE; }
funcion { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return FUNCION; }
generico { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return GENERICO; }
hasta { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return HASTA; }
interfaz { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return INTERFAZ; }
lanzar { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return LANZAR; }
lista { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return LISTA; }
mientras { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return MIENTRAS; }
modificable { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return MODIFICABLE; }
otro { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return OTRO; }
paquete { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return PAQUETE; }
para { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return PARA; }
privado { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return PRIVADO; }
probar { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return PROBAR; }
procedimiento { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return PROCEDIMIENTO; }
programa { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return PROGRAMA; }
publico { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return PUBLICO; }
real { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return REAL; }
registro { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return REGISTRO; }
repite { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return REPITE; }
salir { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return SALIR; }
sea { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return SEA; }
semipublico { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return SEMIPUBLICO; }
si { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return SI; }
sino { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return SINO; }
tipo { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return TIPO; }
variable { printf("linea %d, palabra reservada: %s\n", yylineno, yytext); return VARIABLE; }

  /*Identificadores*/
{IDENTIFICADOR} { printf("linea %d, identificador: %s\n", yylineno, yytext); return IDENTIFICADOR; }


{PATH}  { printf("linea %d, PATH: %s\n", yylineno, yytext); return PATH; }
{CTC_ENTERA} { printf("linea %d, constante entera: %s\n", yylineno, yytext); return CTC_ENTERA; }
{CTC_REAL}  { printf("linea %d, constante real: %s\n", yylineno, yytext); return CTC_REAL; }
'{CTC_CARACTER}'  { printf("linea %d, caracter: %s\n", yylineno, yytext); return CTC_CARACTER; }
{CTC_CADENA}  { printf("linea %d, cadena: %s\n", yylineno, yytext); return CTC_CADENA; }

  /*En el caso de los delimitadores de un unico caracter se devuelve el mismo caracter*/
{DELIMITADORES}  { printf("linea %d, delimitador: %s\n", yylineno, yytext); return yytext[0]; }
{CUATRO_PTOS}  { printf("linea %d, delimitador: %s\n", yylineno, yytext); return CUATRO_PTOS; }
{DOS_PTOS}  { printf("linea %d, delimitador: %s\n", yylineno, yytext); return DOS_PTOS; }
{FLECHA_DOBLE}  { printf("linea %d, delimitador: %s\n", yylineno, yytext); return FLECHA_DOBLE; }


{OPERADORES}  { printf("linea %d, operador: %s\n", yylineno, yytext); return yytext[0]; }
{POTENCIA}  { printf("linea %d, operador: %s\n", yylineno, yytext); return POTENCIA; }
{DESPI}  { printf("linea %d, operador: %s\n", yylineno, yytext); return DESPI; }
{DESPD}  { printf("linea %d, operador: %s\n", yylineno, yytext); return DESPD; }
{EQ}  { printf("linea %d, operador: %s\n", yylineno, yytext); return EQ; }
{GEQ}  { printf("linea %d, operador: %s\n", yylineno, yytext); return GEQ; }
{LEQ}  { printf("linea %d, operador: %s\n", yylineno, yytext); return LEQ; }
{NEQ}  { printf("linea %d, operador: %s\n", yylineno, yytext); return NEQ; }
{OR}  { printf("linea %d, operador: %s\n", yylineno, yytext); return OR; }
{AND}  { printf("linea %d, operador: %s\n", yylineno, yytext); return AND; }


{COMENTARIO}  {}
{COMENTARIO_MULTI}  {}


{NOP} {}
. { printf("Error en la linea %d, caracter no reconocido %s\n", yylineno, yytext); }



%%

int yywrap()
{
  return(1);
}

int main(int argc, char *argv[]) {

  if (argc < 2) {
    printf("Uso: ./moronico NombreArchivo\n");
    exit(1);
    }

  yyin = fopen(argv[1],"r");

  while (yylex());
  }