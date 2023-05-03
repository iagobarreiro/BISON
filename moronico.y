 
%{

  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  void yyerror(char *s)

  #define YYDEBUG 1

%}

%token ABSTRACTO AND ASOCIATIVA BOOLEANO CABECERA CADENA CASO CARACTER CARGA CLASE CONJUNTO CONSTANTE CUERPO CTC_BOOLEANA CTC_CADENA CTC_CARACTER CTC_ENTERA CTC_REAL CONSTRUCTOR CUANDO CUATRO_PTOS DESCENDENTE DESPD DESPI DESTRUCTOR DE DEVOLVER DOS_PTOS EJECUTA ELEMENTO EN ENTERO ENTONCES EQ ESPECIFICO EXCEPTO FICHERO FINAL FINALMENTE FLECHA_DOBLE FUNCION GEQ GENERICO HASTA IDENTIFICADOR INTERFAZ LANZAR LEQ LISTA MIENTRAS MODIFICABLE NEQ OTRO OR PAQUETE PARA PATH POTENCIA PRIVADO PROBAR PROCEDIMIENTO PROGRAMA PUBLICO REAL REGISTRO REPITE SEA SALIR SEMIPUBLICO SI SINO TIPO VARIABLE

%%

/*****************************************PROGRAMA****************************************/
programa : definicion_programa
          | definicion_paquete

definicion_programa : PROGRAMA nombre ';' bloque_programa

nombre : [ IDENTIFICADOR '::' ]* IDENTIFICADOR

bloque_programa : [ declaracion_cargas ]?
                    [ declaracion_tipos ]?
                    [ declaracion_constantes ]?
                    [ declaracion_variables ]?
                    bloque_instrucciones

bloque_instrucciones : '{' [ instruccion ]+ '}'

definicion_paquete : PAQUETE nombre ';' seccion_cabecera seccion_cuerpo

seccion_cabecera : CABECERA
                    [ declaracion_cargas ]?
                    [ declaracion_tipos ]?
                    [ declaracion_constantes ]?
                    [ declaracion_variables ]?
                    [ declaracion_interfaces ]?

seccion_cuerpo : CUERPO
                    [ declaracion_tipos ]?
                    [ declaracion_constantes ]?
                    [ declaracion_variables ]?
                    [ declaracion_subprograma ]+

declaracion_cargas : CARGA ( declaracion_carga )+ ';'

declaracion_carga : nombre [ EN PATH ]? [ '(' ( nombre )+ ')' ]?


/*****************************************TIPOS*******************************************/
declaracion_tipos : TIPO [ declaracion_tipo ]+

declaracion_tipo : nombre '=' tipo_no_estructurado_o_nombre_tipo ';'
                    | nombre '=' tipo_estructurado

tipo_no_estructurado_o_nombre_tipo : nombre
                                    | tipo_escalar
                                    | tipo_fichero
                                    | tipo_enumerado
                                    | tipo_lista
                                    | tipo_lista_asociativa
                                    | tipo_conjunto
tipo_estructurado : tipo_registro | declaracion_clase

tipo_escalar : ENTERO | REAL | BOOLEANO | CARACTER | CADENA

tipo_fichero : FICHERO

tipo_enumerado : '(' ( expresion_constante )+ ')'

tipo_lista : LISTA [ '[' ( rango )+ ']' ]? DE tipo_no_estructurado_o_nombre_tipo

rango : expresion '..' expresion [ '..' expresion ]?

tipo_lista_asociativa : LISTA ASOCIATIVA DE tipo_no_estructurado_o_nombre_tipo

tipo_conjunto = CONJUNTO DE tipo_no_estructurado_o_nombre_tipo

tipo_registro : REGISTRO '{' [ declaracion_campo ]+ '}'

declaracion_campo : ( nombre )+ ':' tipo_no_estructurado_o_nombre_tipo ';'



/***************************************CONSTANTES****************************************/

declaracion_constantes : CONSTANTE [ declaracion_constante ]+

declaracion_constante : nombre ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'

valor_constante : expresion
                  | '[' ( valor_constante )+ ']'
                  | '[' ( clave_valor )+ ']'
                  | '[' ( campo_valor )+ ']'

clave_valor : CTC_CADENA '=>' valor_constante

campo_valor : nombre '=>' valor_constante



/***************************************VARIABLES****************************************/

declaracion_variables : VARIABLE [ declaracion_variable ]+

declaracion_variable : ( nombre )+
                      ':'
                      tipo_no_estructurado_o_nombre_tipo
                      [ '=' valor_constante ]?
                      ';'


/**************************************INTERFACES****************************************/

declaracion_interfaces : INTERFAZ [ cabecera_subprograma ';' ]+


/****************************************CLASES******************************************/

declaracion_clase : CLASE
                      [ FINAL ]?
                      [ '(' ( nombre )+ ')' ]?
                      '{'
                      declaraciones_publicas
                      [ declaraciones_semi ]?
                      [ declaraciones_privadas ]?
                      '}'

declaraciones_publicas : [ PUBLICO ]? [ declaracion_componente ]+

declaraciones_semi : SEMIPUBLICO [ declaracion_componente ]+

declaraciones_privadas : PRIVADO [ declaracion_componente ]+

declaracion_componente : declaracion_tipo_anidado
                        | declaracion_constante_anidada
                        | declaracion_atributos
                        | cabecera_subprograma ';' [ modificadores ';' ]?

declaracion_tipo_anidado : TIPO declaracion_tipo

declaracion_constante_anidada : CONSTANTE declaracion_constante

declaracion_atributos : ( nombre )+ ':' tipo_no_estructurado_o_nombre_tipo ';'

modificadores : ( modificador )+

modificador : GENERICO | ABSTRACTO | ESPECIFICO | FINAL


/*************************************SUBPROGRAMAS****************************************/

declaracion_subprograma : cabecera_subprograma bloque_subprograma

cabecera_subprograma : cabecera_funcion
                      | cabecera_procedimiento
                      | cabecera_constructor
                      | cabecera_destructor

cabecera_funcion : FUNCION
                    nombre
                    [ declaracion_parametros ]?
                    '=>'
                    tipo_no_estructurado_o_nombre_tipo

cabecera_procedimiento : PROCEDIMIENTO nombre [ declaracion_parametros ]?

cabecera_constructor : CONSTRUCTOR nombre [ declaracion_parametros ]?

cabecera_destructor : DESTRUCTOR nombre

declaracion_parametros : '(' lista_parametros_formales ')'

lista_parametros_formales : parametros_formales
                            | lista_parametros_formales ';' parametros_formales


parametros_formales : ( nombre )+ ':' tipo_no_estructurado_o_nombre_tipo [ MODIFICABLE ]?

bloque_subprograma : [ declaracion_tipos ]?
                       [ declaracion_constantes ]?
                       [ declaracion_variables ]?
                       bloque_instrucciones


/*************************************INSTRUCCIONES***************************************/
instruccion : ';'
              | instruccion_asignacion
              | instruccion_salir
              | instruccion_devolver
              | instruccion_llamada
              | instruccion_si
              | instruccion_casos
              | instruccion_bucle
              | instruccion_probar_excepto
              | instruccion_lanzar

instruccion_asignacion : objeto '=' expresion ';'

instruccion_salir : SALIR [ SI expresion ]? ';'

instruccion_devolver : DEVOLVER [ expresion ]? ';'

instruccion_llamada : llamada_subprograma ';'

llamada_subprograma : nombre '(' ( expresion )* ')'

instruccion_si : SI expresion
                   ENTONCES bloque_instrucciones
                   [ SINO bloque_instrucciones ]?

instruccion_casos : EN CASO expresion 'es' [ caso ]+ ';'

caso : CUANDO entradas '=>' bloque_instrucciones

entradas : [ entrada '|' ]* entrada

entrada : expresion | rango | OTRO

instruccion_bucle : clausula_iteracion bloque_instrucciones

clausula_iteracion : PARA nombre EN objeto
                      | REPITE ELEMENTO nombre EN rango [ DESCENDENTE ]?
                      | MIENTRAS expresion
                      | REPITE HASTA expresion

instruccion_probar_excepto : PROBAR bloque_instrucciones
                              EXCEPTO [ clausula_excepcion ]+
                              [ FINALMENTE bloque_instrucciones ]?

clausula_excepcion : CUANDO nombre EJECUTA bloque_instrucciones

instruccion_lanzar : LANZAR nombre ';'


/******************************EXPRESIONES (SOLO OPERANDOS)*******************************/

expresion_primaria : expresion_constante | objeto | llamada_subprograma | '(' expresion ')'

objeto : nombre
          | objeto '[' ( expresion )+ ']'
          | objeto '.' IDENTIFICADOR
          
expresion_constante : CTC_ENTERA | CTC_REAL | CTC_CADENA | CTC_CARACTER | CTC_BOOLEANA


%%

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
