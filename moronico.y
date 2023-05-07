 
%{

  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

  int yyerror(char *);

  int errores = 0;

%}
%union {
  int     val_int;
  double  val_double;
  char*   val_string;
  char    val_char;
  char    val_bool;
}

%token <val_bool>   CTC_BOOLEANA
%token <val_string> CTC_CADENA
%token <val_char>   CTC_CARACTER
%token <val_int>    CTC_ENTERA
%token <val_double> CTC_REAL
%token <val_string> PATH
%token <val_string> IDENTIFICADOR
%token ABSTRACTO AND ASOCIATIVA BOOLEANO CABECERA CADENA CASO CARACTER CARGA CLASE CONJUNTO CONSTANTE CUERPO
%token CONSTRUCTOR CUANDO CUATRO_PTOS DESCENDENTE DESPD DESPI DESTRUCTOR DE DEVOLVER DOS_PTOS EJECUTA ELEMENTO EN ENTERO ENTONCES EQ ESPECIFICO EXCEPTO FICHERO FINAL 
%token FINALMENTE FLECHA_DOBLE FUNCION GEQ GENERICO HASTA INTERFAZ LANZAR LEQ LISTA MIENTRAS MODIFICABLE NEQ OTRO OR PAQUETE PARA POTENCIA PRIVADO 
%token PROBAR PROCEDIMIENTO PROGRAMA PUBLICO REAL REGISTRO REPITE SEA SALIR SEMIPUBLICO SI SINO TIPO VARIABLE

%%

/********************************/
/* programas, paquetes y cargas */
/********************************/

programa : definicion_programa {printf("\t programa -> def_programa \n");}
          | definicion_paquete {printf("\t programa -> def_paquete \n");}
          ;

definicion_programa : PROGRAMA nombre ';' bloque_programa {printf("\t def_programa -> PROGRAMA ';' bloque_programa \n");}
          | error ';' {yyerrok; };
          ;

nombre :  id_op IDENTIFICADOR {printf("\t nombre -> id_op IDENTIFICADOR \n");}
          ;

id_op : 
      | id_op IDENTIFICADOR CUATRO_PTOS {printf("\t id_op -> id_op IDENTIFICADOR CUATRO_PTOS  \n");}
      ;


bloque_programa : declaracion_cargas declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones {printf("\t bloque_programa -> declaracion_cargas declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones\n");}
                | error ';' {yyerrok; };         
          ;

bloque_instrucciones : '{' instruccion_unoomas '}' {printf("\t bloque_instrucciones -> '{' instruccion_unoomas '}'  \n");}
                     | '{' error '}' {yyerrok; };
            ;

instruccion_unoomas : instruccion_unoomas instruccion  {printf("\t instruccion_unoomas -> instruccion_unoomas instruccion   \n");}
                    | instruccion {printf("\t instruccion_unoomas -> instruccion  \n");}
                    ; 

definicion_paquete : PAQUETE nombre ';' seccion_cabecera seccion_cuerpo {printf("\t definicion_paquete -> PAQUETE nombre ';' seccion_cabecera seccion_cuerpo  \n");}
                    ;

seccion_cabecera : CABECERA declaracion_cargas declaracion_tipos declaracion_constantes declaracion_variables declaracion_interfaces {printf("\t seccion_cabecera -> CABECERA declaracion_cargas declaracion_tipos declaracion_constantes declaracion_variables declaracion_interfaces \n");}
                  ;

seccion_cuerpo : CUERPO declaracion_tipos declaracion_constantes declaracion_variables declaracion_subprograma {printf("\t seccion_cuerpo -> CUERPO declaracion_tipos declaracion_constantes declaracion_variables declaracion_subprograma  \n");}

declaracion_cargas : 
                | CARGA declaracion_carga ';' {printf("\t declaracion_cargas -> CARGA declaracion_carga ';'  \n");}
                ;

declaracion_carga : nombre en_path_op nombres_op {printf("\t declaracion_carga -> nombre en_path_op nombres_op  \n");}
                    | declaracion_carga ',' nombre en_path_op nombres_op {printf("\t declaracion_carga -> declaracion_carga_unoomas ',' nombre en_path_op nombres_op  \n");}
                    ;

en_path_op : 
            | EN PATH {printf("\t en_path_op -> EN PATH  \n");}
            ;

nombres_op : 
            | '('  nombres_comas ')' {printf("\t nombres_op -> '('  nombres_comas ')'  \n");}
            | '(' error ')' {yyerrok; };
            ;

nombres_comas : nombres_comas ',' nombre {printf("\t nombres_comas -> nombres_comas ',' nombre  \n");}
              | nombre {printf("\t nombres_comas -> nombre  \n");}
              ;


/************************/
/* tipos (incl. clases) */
/************************/

declaracion_tipos :
                  | TIPO declaracion_tipo_unoomas {printf("\t declaracion_tipos -> TIPO declaracion_tipo_unoomas  \n");}
                  ;

declaracion_tipo_unoomas : declaracion_tipo_unoomas declaracion_tipo {printf("\t declaracion_tipo_unoomas -> declaracion_tipo_unoomas declaracion_tipo   \n");}
                         | declaracion_tipo {printf("\t declaracion_tipo_unoomas -> declaracion_tipo  \n");}
                         ;

declaracion_tipo :  nombre '=' tipo_no_estructurado_o_nombre_tipo ';' {printf("\t declaracion_tipo -> nombre '=' tipo_no_estructurado_o_nombre_tipo ';'  \n");}
                 |  nombre '=' tipo_estructurado {printf("\t declaracion_tipo -> nombre '=' tipo_estructurado  \n");}
                 ;              

tipo_no_estructurado_o_nombre_tipo : nombre {printf("\t tipo_no_estructurado_o_nombre_tipo -> nombre  \n");}
                                    | tipo_escalar {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_escalar  \n");}
                                    | tipo_fichero {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_fichero  \n");}
                                    | tipo_enumerado {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_enumerado  \n");}
                                    | tipo_lista {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_lista  \n");}
                                    | tipo_lista_asociativa {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_lista_asociativa  \n");}
                                    | tipo_conjunto {printf("\t tipo_no_estructurado_o_nombre_tipo -> tipo_conjunto  \n");}
                                    ;

tipo_estructurado : tipo_registro {printf("\t tipo_estructurado -> tipo_registro  \n");}
                  | declaracion_clase {printf("\t tipo_estructurado -> declaracion_clase  \n");}
                  ;

tipo_escalar : ENTERO {printf("\t tipo_escalar -> ENTERO  \n");}
            | REAL {printf("\t tipo_escalar -> REAL  \n");}
            | BOOLEANO {printf("\t tipo_escalar -> BOOLEANO  \n");}
            | CARACTER {printf("\t tipo_escalar -> CARACTER  \n");}
            | CADENA {printf("\t tipo_escalar -> CADENA  \n");}
            ;

tipo_fichero : FICHERO {printf("\t tipo_fichero -> FICHERO  \n");}
             ;

tipo_enumerado : '(' expresion_constante_unoomas ')' {printf("\t tipo_enumerado -> '(' expresion_constante_unoomas ')'  \n");}
               | '(' error ')' {yyerrok; };
                ;

expresion_constante_unoomas : expresion_constante {printf("\t expresion_constante_unoomas -> expresion_constante  \n");}
                            | expresion_constante_unoomas ',' expresion_constante {printf("\t expresion_constante_unoomas -> expresion_constante_unoomas ',' expresion_constante  \n");}
                            ;

tipo_lista : LISTA rango_lista_op DE tipo_no_estructurado_o_nombre_tipo {printf("\t tipo_lista -> LISTA rango_lista_op DE tipo_no_estructurado_o_nombre_tipo  \n");}
            ;

rango_lista_op:
              | '[' rango_lista ']' {printf("\t rango_lista_op -> '[' rango_lista ']'  \n");}
              ;

rango_lista : rango_lista ',' rango {printf("\t rango_lista ->  rango_lista ',' rango  \n");}
            | rango {printf("\t rango_lista -> rango  \n");}
            | error ';' {yyerrok; };
            ;

rango : expresion DOS_PTOS expresion  {printf("\t rango -> expresion DOS_PTOS expresion   \n");}
      | expresion DOS_PTOS expresion DOS_PTOS expresion {printf("\t rango -> expresion DOS_PTOS expresion DOS_PTOS expresion    \n");}
      ;

tipo_lista_asociativa : LISTA ASOCIATIVA DE tipo_no_estructurado_o_nombre_tipo {printf("\t tipo_lista_asociativa -> LISTA ASOCIATIVA DE tipo_no_estructurado_o_nombre_tipo  \n");}
                      ;

tipo_conjunto : CONJUNTO DE tipo_no_estructurado_o_nombre_tipo {printf("\t tipo_conjunto -> CONJUNTO DE tipo_no_estructurado_o_nombre_tipo  \n");}
              ;

tipo_registro : REGISTRO '{' declaracion_campo '}' {printf("\t tipo_registro -> REGISTRO '{' declaracion_campo '}'  \n");}
              | '{' error '}' {yyerrok; };
              ;

declaracion_campo : declaracion_campo nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';' {printf("\t declaracion_campo -> declaracion_campo nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");}                
                  | nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';' {printf("\t declaracion_campo -> nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");}
                  ;


/*************************************/
/* constantes, variables, interfaces */
/*************************************/

declaracion_constantes :| CONSTANTE declaracion_constante_unoomas {printf("\t declaracion_constantes -> CONSTANTE declaracion_constante_unoomas   \n");}
                        ;

declaracion_constante_unoomas : declaracion_constante_unoomas declaracion_constante {printf("\t declaracion_constante_unoomas -> declaracion_constante_unoomas declaracion_constante  \n");}
                              | declaracion_constante {printf("\t declaracion_constante_unoomas -> declaracion_constante  \n");}
                              ;

declaracion_constante : nombre ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';' {printf("\t declaracion_constante ->  nombre ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'  \n");}
                      ;

valor_constante: expresion {printf("\t valor_constante -> expresion  \n");}
                | '[' valor_constante_comas ']' {printf("\t valor_constante -> '[' valor_constante_comas ']'  \n");}
                | '[' clave_valor ']' {printf("\t valor_constante -> '[' clave_valor ']'  \n");}
                | '[' campo_valor ']' {printf("\t valor_constante -> '[' campo_valor ']'  \n");}
                | '[' error ']' {yyerrok; };
                ;

valor_constante_comas : valor_constante_comas ',' valor_constante {printf("\t valor_constante_comas -> valor_constante_comas ',' valor_constante   \n");}
                      | valor_constante {printf("\t valor_constante_comas -> valor_constante  \n");}
                      ;

clave_valor : clave_valor ',' CTC_CADENA FLECHA_DOBLE valor_constante {printf("\t clave_valor -> clave_valor ',' CTC_CADENA FLECHA_DOBLE valor_constante   \n");}
            | CTC_CADENA FLECHA_DOBLE valor_constante {printf("\t clave_valor -> CTC_CADENA FLECHA_DOBLE valor_constante   \n");}
            ;

campo_valor : campo_valor ',' nombre FLECHA_DOBLE valor_constante {printf("\t campo_valor -> campo_valor ',' nombre FLECHA_DOBLE valor_constante  \n");}
            | nombre FLECHA_DOBLE valor_constante {printf("\t campo_valor -> nombre FLECHA_DOBLE valor_constante  \n");}
            ;              

declaracion_variables :  
                      | VARIABLE declaracion_variable {printf("\t declaracion_variables -> VARIABLE declaracion_variable  \n");}
                      ;
 
declaracion_variable :  declaracion_variable nombres_comas ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';' {printf("\t declaracion_variable -> declaracion_variable nombres_comas ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'  \n");}
                      | declaracion_variable nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';' {printf("\t declaracion_variable -> declaracion_variable nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");}
                      | nombres_comas ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';' {printf("\t declaracion_variable -> nombres_comas ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'  \n");}
                      | nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';' {printf("\t declaracion_variable -> nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");}
                      | nombres_comas ':' error '=' valor_constante ';' {yyerrok; }; 
                      | nombres_comas ':' error ';' {yyerrok; }; 
                      ;


declaracion_interfaces : INTERFAZ cabecera_subprograma_unoomas_ptocoma {printf("\t declaracion_interfaces -> INTERFAZ cabecera_subprograma_unoomas_ptocoma  \n");}
                        ;


declaracion_clase : declaracion_clase_mod {printf("\t declaracion_clase -> declaracion_clase_mod  \n");}
                  | declaracion_clase_nomod {printf("\t declaracion_clase -> declaracion_clase_nomod  \n");}
                  ;

declaracion_clase_mod : CLASE FINAL '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}' {printf("\t declaracion_clase_mod -> CLASE FINAL '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'  \n");}
                      | CLASE FINAL '(' nombres_comas ')' '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}' {printf("\t declaracion_clase_mod -> CLASE FINAL '(' nombres_comas ')' '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'  \n");}
                      ;


declaracion_clase_nomod : CLASE '(' nombres_comas ')' '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}' {printf("\t declaracion_clase_nomod ->  CLASE '(' nombres_comas ')' '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'  \n");}
                        | CLASE '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}' {printf("\t declaracion_clase_nomod ->  CLASE '(' nombres_comas ')' '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'  \n");}                
                        ;


declaraciones_publicas : PUBLICO declaracion_componente_unoomas {printf("\t declaraciones_publicas -> PUBLICO declaracion_componente_unoomas  \n");}
                        | declaracion_componente_unoomas {printf("\t rango_ldeclaraciones_publicasista_op -> declaracion_componente_unoomas  \n");}
                        ;  

declaraciones_semi : 
                    | SEMIPUBLICO declaracion_componente_unoomas {printf("\t declaraciones_semi -> SEMIPUBLICO declaracion_componente_unoomas  \n");}
                    ;

declaraciones_privadas : 
                        | PRIVADO declaracion_componente_unoomas {printf("\t declaraciones_privadas -> PRIVADO declaracion_componente_unoomas  \n");}
                        ;

declaracion_componente_unoomas : declaracion_componente {printf("\t declaracion_componente_unoomas -> declaracion_componente  \n");}
                               | declaracion_componente_unoomas declaracion_componente  {printf("\t declaracion_componente_unoomas -> declaracion_componente_unoomas declaracion_componente   \n");}
                               ;

declaracion_componente : declaracion_tipo_anidado {printf("\t declaracion_componente -> declaracion_tipo_anidado  \n");}
                       | declaracion_constante_anidada {printf("\t declaracion_componente -> declaracion_constante_anidada  \n");}
                       | declaracion_atributos {printf("\t declaracion_componente -> declaracion_atributos  \n");}
                       | cabecera_subprograma ';' modificadores ';' {printf("\t declaracion_componente -> cabecera_subprograma ';' modificadores ';'  \n");}
                       | cabecera_subprograma ';' {printf("\t declaracion_componente -> cabecera_subprograma ';'  \n");}
                       ;

declaracion_tipo_anidado : TIPO declaracion_tipo {printf("\t declaracion_tipo_anidado -> TIPO declaracion_tipo   \n");}
                         ;

declaracion_constante_anidada : CONSTANTE declaracion_constante {printf("\t declaracion_constante_anidada -> CONSTANTE declaracion_constante  \n");}
                              ;

declaracion_atributos : nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';' {printf("\t declaracion_atributos -> nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");}
                      ;

modificadores : modificador_comas {printf("\t modificadores -> modificador_comas  \n");}
              ;

modificador_comas : modificador_comas ',' modificador {printf("\t modificador_comas -> modificador_comas ',' modificador  \n");}
                  | modificador {printf("\t modificador_comas -> modificador  \n");}
                  ;

modificador : GENERICO {printf("\t modificador -> GENERICO  \n");}
            | ABSTRACTO {printf("\t modificador -> ABSTRACTO  \n");}
            | ESPECIFICO {printf("\t modificador -> ESPECIFICO  \n");}
            | FINAL {printf("\t modificador -> FINAL  \n");}
            ;


/****************/
/* subprogramas */
/****************/


declaracion_subprograma : declaracion_subprograma cabecera_subprograma bloque_subprograma {printf("\t declaracion_subprograma -> declaracion_subprograma cabecera_subprograma bloque_subprograma  \n");}
                        | cabecera_subprograma bloque_subprograma {printf("\t declaracion_subprograma -> cabecera_subprograma bloque_subprograma  \n");}
                        ;

cabecera_subprograma : cabecera_funcion {printf("\t cabecera_subprograma -> cabecera_funcion  \n");}
                     | cabecera_procedimiento {printf("\t cabecera_subprograma -> cabecera_procedimiento  \n");}
                     | cabecera_constructor {printf("\t cabecera_subprograma -> cabecera_constructor  \n");}
                     | cabecera_destructor {printf("\t cabecera_subprograma -> cabecera_destructor  \n");}
                     ;

cabecera_subprograma_unoomas_ptocoma : cabecera_subprograma_unoomas_ptocoma cabecera_subprograma ';' {printf("\t cabecera_subprograma_unoomas_ptocoma -> cabecera_subprograma_unoomas_ptocoma cabecera_subprograma ';'  \n");}
                                      | cabecera_subprograma ';' {printf("\t cabecera_subprograma_unoomas_ptocoma -> cabecera_subprograma ';'  \n");}
                                      ;

cabecera_funcion : FUNCION nombre declaracion_parametros FLECHA_DOBLE tipo_no_estructurado_o_nombre_tipo {printf("\t cabecera_funcion -> FUNCION nombre declaracion_parametros FLECHA_DOBLE tipo_no_estructurado_o_nombre_tipo  \n");}
                 ;

cabecera_procedimiento : PROCEDIMIENTO nombre declaracion_parametros {printf("\t cabecera_procedimiento -> PROCEDIMIENTO nombre declaracion_parametros  \n");}
                        ;

cabecera_constructor : CONSTRUCTOR nombre declaracion_parametros {printf("\t cabecera_constructor ->  CONSTRUCTOR nombre declaracion_parametros  \n");}
  ;

cabecera_destructor : DESTRUCTOR nombre {printf("\t cabecera_destructor -> DESTRUCTOR nombre  \n");}
                    ;

declaracion_parametros : 
                      | '(' lista_parametros_formales ')' {printf("\t declaracion_parametros -> declarac'(' lista_parametros_formales ')'ion_constante  \n");}
                      ;
  
lista_parametros_formales : parametros_formales {printf("\t lista_parametros_formales -> parametros_formales  \n");}
                           | lista_parametros_formales ';' parametros_formales {printf("\t lista_parametros_formales -> lista_parametros_formales ';' parametros_formales  \n");}
                           ;

parametros_formales : nombres_comas ':' tipo_no_estructurado_o_nombre_tipo MODIFICABLE {printf("\t parametros_formales -> nombres_comas ':' tipo_no_estructurado_o_nombre_tipo MODIFICABLE  \n");}
                    | nombres_comas ':' tipo_no_estructurado_o_nombre_tipo {printf("\t parametros_formales -> nombres_comas ':' tipo_no_estructurado_o_nombre_tipo  \n");}
                    ;

bloque_subprograma : declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones {printf("\t bloque_subprograma -> declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones  \n");}
                    ;



/*****************/
/* instrucciones */
/*****************/


instruccion : ';' {printf("\t instruccion -> ';'  \n");}
            | instruccion_asignacion {printf("\t instruccion -> instruccion_asignacion  \n");}
            | instruccion_salir {printf("\t instruccion -> instruccion_salir  \n");}
            | instruccion_devolver {printf("\t instruccion -> instruccion_devolver  \n");}
            | instruccion_llamada {printf("\t instruccion -> instruccion_llamada  \n");}
            | instruccion_si {printf("\t instruccion -> instruccion_si  \n");}
            | instruccion_casos {printf("\t instruccion -> instruccion_casos  \n");}
            | instruccion_bucle {printf("\t instruccion -> instruccion_bucle  \n");}
            | instruccion_probar_excepto {printf("\t instruccion -> instruccion_probar_excepto  \n");}
            | instruccion_lanzar {printf("\t instruccion -> instruccion_lanzar  \n");}
            ; 

instruccion_asignacion : objeto '=' expresion ';' {printf("\t instruccion_asignacion -> objeto '=' expresion ';'  \n");}

instruccion_salir : SALIR SI expresion ';' {printf("\t instruccion_salir -> SALIR SI expresion ';'  \n");}
                  | SALIR ';' {printf("\t instruccion_salir -> SALIR ';'  \n");}
                  ;

instruccion_devolver : DEVOLVER expresion ';' {printf("\t instruccion_devolver -> DEVOLVER expresion ';'  \n");}
                     | DEVOLVER ';' {printf("\t instruccion_devolver -> DEVOLVER ';'  \n");}
                     ;

instruccion_llamada : llamada_subprograma ';' {printf("\t instruccion_llamada -> llamada_subprograma ';'  \n");}
                    ;

llamada_subprograma : nombre '(' expresion_comas ')' {printf("\t llamada_subprograma -> nombre '(' expresion_comas ')'  \n");}
                      nombre '(' ')' {printf("\t llamada_subprograma -> nombre '(' ')'  \n");}
                    ; 

expresion_comas : expresion_comas ',' expresion {printf("\t expresion_comas -> expresion_comas ',' expresion  \n");}
                | expresion {printf("\t expresion_comas -> expresion  \n");}
                ;

instruccion_si : SI expresion ENTONCES bloque_instrucciones SINO bloque_instrucciones {printf("\t instruccion_si ->  SI expresion ENTONCES bloque_instrucciones SINO bloque_instrucciones  \n");}
               | SI expresion ENTONCES bloque_instrucciones {printf("\t instruccion_si ->  SI expresion ENTONCES bloque_instrucciones SINO bloque_instrucciones  \n");}
               ;

instruccion_casos : EN  CASO expresion SEA caso ';' {printf("\t instruccion_casos ->  EN  CASO expresion SEA caso ';'  \n");}
                  ;

caso : caso entradas FLECHA_DOBLE bloque_instrucciones {printf("\t caso -> caso entradas FLECHA_DOBLE bloque_instrucciones  \n");}
     | entradas FLECHA_DOBLE bloque_instrucciones {printf("\t caso -> entradas FLECHA_DOBLE bloque_instrucciones  \n");}
     ;



entradas: entrada_op entrada {printf("\t entradas -> entrada_op entrada  \n");}
        ;

entrada_op :  
            | entrada_op entrada '|'  {printf("\t entrada_op -> entrada_op entrada '|'  \n");}
            ;

entrada : expresion {printf("\t entrada -> expresion  \n");}
        | rango {printf("\t entrada -> rango  \n");}
        | OTRO {printf("\t entrada -> OTRO  \n");}
        ;

instruccion_bucle : clausula_iteracion bloque_instrucciones {printf("\t instruccion_bucle -> clausula_iteracion bloque_instrucciones  \n");}
                  ;

clausula_iteracion : PARA nombre EN objeto {printf("\t clausula_iteracion -> PARA nombre EN objeto   \n");}
                   | REPITE ELEMENTO nombre EN rango DESCENDENTE {printf("\t clausula_iteracion -> REPITE ELEMENTO nombre EN rango DESCENDENTE  \n");}
                   | REPITE ELEMENTO nombre EN rango {printf("\t clausula_iteracion -> REPITE ELEMENTO nombre EN rango  \n");}
                   | MIENTRAS expresion {printf("\t clausula_iteracion -> MIENTRAS expresion  \n");}
                   | REPITE HASTA expresion  {printf("\t clausula_iteracion -> REPITE HASTA expresion  \n");}
                   ;

instruccion_probar_excepto : PROBAR bloque_instrucciones EXCEPTO clausula_excepcion FINALMENTE bloque_instrucciones {printf("\t instruccion_probar_excepto -> PROBAR bloque_instrucciones EXCEPTO clausula_excepcion FINALMENTE bloque_instrucciones  \n");}
                           | PROBAR bloque_instrucciones EXCEPTO clausula_excepcion {printf("\t instruccion_probar_excepto -> PROBAR bloque_instrucciones EXCEPTO clausula_excepcion  \n");}
                           ;

clausula_excepcion :  clausula_excepcion CUANDO nombre EJECUTA bloque_instrucciones {printf("\t clausula_excepcion -> clausula_excepcion CUANDO nombre EJECUTA bloque_instrucciones  \n");}
                    | CUANDO nombre EJECUTA bloque_instrucciones  {printf("\t clausula_excepcion -> clausula_excepcion CUANDO nombre EJECUTA bloque_instrucciones  \n");}
                   ;

instruccion_lanzar : LANZAR nombre ';' {printf("\t instruccion_lanzar -> LANZAR nombre ';'  \n");}
                   ;


/***************/
/* expresiones */
/***************/

objeto : nombre {printf("\t objeto -> nombre  \n");}
       | objeto '[' expresion_comas ']' {printf("\t objeto -> objeto '[' expresion_comas ']'  \n");}
       | objeto '.' IDENTIFICADOR {printf("\t objeto -> objeto '.' IDENTIFICADOR  \n");}
       ;

expresion_constante : CTC_ENTERA {printf("\t expresion_constante -> CTC_ENTERA  \n");}
                    | CTC_REAL {printf("\t expresion_constante -> CTC_REAL  \n");}
                    | CTC_CADENA {printf("\t expresion_constante -> CTC_CADENA  \n");}
                    | CTC_CARACTER {printf("\t expresion_constante -> CTC_CARACTER  \n");}
                    | CTC_BOOLEANA {printf("\t expresion_constante -> CTC_BOOLEANA  \n");}
                    ;

expresion_primaria : expresion_constante {printf("\t expresion_primaria -> expresion_constante  \n");}
                   | objeto {printf("\t expresion_primaria -> objeto  \n");}
                   | llamada_subprograma {printf("\t expresion_primaria -> llamada_subprograma  \n");}
                   | '(' expresion ')' {printf("\t expresion_primaria -> '(' expresion ')'  \n");}
                   ;

expresion_unitaria : '-' expresion_primaria {printf("\t expresion_unitaria -> '-' expresion_primaria   \n");}
                   | expresion_primaria {printf("\t expresion_unitaria -> expresion_primaria  \n");}
                   ;

expresion_potencia : expresion_unitaria POTENCIA expresion_potencia {printf("\t expresion_potencia -> expresion_unitaria POTENCIA expresion_potencia  \n");}
                   | expresion_unitaria {printf("\t expresion_potencia -> expresion_unitaria  \n");}
                   ;

expresion_prod : expresion_prod '*' expresion_potencia {printf("\t expresion_prod -> expresion_prod '*' expresion_potencia  \n");}
               | expresion_prod '/' expresion_potencia {printf("\t expresion_prod -> expresion_prod '/' expresion_potencia  \n");}
               | expresion_prod '%' expresion_potencia {printf("\t expresion_prod -> expresion_prod '%' expresion_potencia  \n");}
               | expresion_potencia {printf("\t expresion_prod -> expresion_potencia  \n");}
               ;

expresion_sum : expresion_sum '+' expresion_prod {printf("\t expresion_sum -> expresion_sum '+' expresion_prod  \n");}
              | expresion_sum '-' expresion_prod {printf("\t expresion_sum -> expresion_sum '-' expresion_prod  \n");}
              | expresion_prod {printf("\t expresion_sum -> expresion_prod  \n");}
              ;

expresion_desplz : expresion_desplz DESPI expresion_sum {printf("\t expresion_desplz -> expresion_desplz DESPI expresion_sum  \n");}
                 | expresion_desplz DESPD expresion_sum {printf("\t expresion_desplz -> expresion_desplz DESPD expresion_sum  \n");}
                 |expresion_sum {printf("\t expresion_desplz -> expresion_sum  \n");}
                 ;


expresion_and_bin : expresion_and_bin '&' expresion_desplz {printf("\t expresion_and_bin -> expresion_and_bin '&' expresion_desplz   \n");}
                  | expresion_desplz {printf("\t expresion_and_bin -> expresion_desplz  \n");}
                  ;

expresion_or_bin : expresion_or_bin '^' expresion_and_bin {printf("\t expresion_or_bin -> expresion_or_bin '^' expresion_and_bin  \n");}
                  | expresion_and_bin {printf("\t expresion_or_bin -> expresion_and_bin  \n");}
                  ;

expresion_xor_bin : expresion_xor_bin '@' expresion_or_bin {printf("\t expresion_xor_bin -> expresion_xor_bin '@' expresion_or_bin  \n");}
                  | expresion_or_bin {printf("\t expresion_xor_bin -> expresion_or_bin  \n");}
                  ;

expresion_comparar : expresion_comparar '<' expresion_xor_bin {printf("\t expresion_comparar -> expresion_comparar '<' expresion_xor_bin  \n");}
                   | expresion_comparar '>' expresion_xor_bin {printf("\t expresion_comparar -> expresion_comparar '>' expresion_xor_bin  \n");}
                   | expresion_comparar LEQ expresion_xor_bin {printf("\t expresion_comparar -> expresion_comparar LEQ expresion_xor_bin  \n");}
                   | expresion_comparar GEQ expresion_xor_bin {printf("\t expresion_comparar -> expresion_comparar GEQ expresion_xor_bin  \n");}
                   | expresion_comparar EQ expresion_xor_bin {printf("\t expresion_comparar -> expresion_comparar EQ expresion_xor_bin  \n");}
                   | expresion_comparar NEQ expresion_xor_bin {printf("\t expresion_comparar -> expresion_comparar NEQ expresion_xor_bin  \n");}
                   | expresion_xor_bin {printf("\t expresion_comparar -> expresion_xor_bin  \n");}
                   ;

expresion_negacion : '!' expresion_negacion {printf("\t expresion_negacion -> '!' expresion_negacion  \n");}
                   | expresion_comparar {printf("\t expresion_negacion -> expresion_comparar  \n");}
                   ;

expresion_and_logico : expresion_negacion AND expresion_and_logico {printf("\t expresion_and_logico -> expresion_negacion AND expresion_and_logico  \n");}
                    | expresion_negacion {printf("\t expresion_and_logico -> expresion_negacion  \n");}
                    ;


expresion_or_logico : expresion_and_logico OR expresion_or_logico {printf("\t expresion_or_logico -> expresion_and_logico OR expresion_or_logico  \n");}
                    | expresion_and_logico {printf("\t expresion_or_logico -> expresion_and_logico  \n");}
                    ;
                    

expresion : expresion_or_logico {printf("\t expresion -> expresion_or_logico  \n");}
          ;
%%

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
