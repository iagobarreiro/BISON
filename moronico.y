 
%{

  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

%}

%token ABSTRACTO AND ASOCIATIVA BOOLEANO CABECERA CADENA CASO CARACTER CARGA CLASE CONJUNTO CONSTANTE CUERPO CTC_BOOLEANA CTC_CADENA CTC_CARACTER CTC_ENTERA CTC_REAL 
%token CONSTRUCTOR CUANDO CUATRO_PTOS DESCENDENTE DESPD DESPI DESTRUCTOR DE DEVOLVER DOS_PTOS EJECUTA ELEMENTO EN ENTERO ENTONCES EQ ESPECIFICO EXCEPTO FICHERO FINAL 
%token FINALMENTE FLECHA_DOBLE FUNCION GEQ GENERICO HASTA IDENTIFICADOR INTERFAZ LANZAR LEQ LISTA MIENTRAS MODIFICABLE NEQ OTRO OR PAQUETE PARA PATH POTENCIA PRIVADO 
%token PROBAR PROCEDIMIENTO PROGRAMA PUBLICO REAL REGISTRO REPITE SEA SALIR SEMIPUBLICO SI SINO TIPO VARIABLE

%%

/********************************/
/* programas, paquetes y cargas */
/********************************/

programa : definicion_programa {printf("\t programa -> def_programa \n");}
          | definicion_paquete {printf("\t programa -> def_paquete \n");}
          ;

definicion_programa : PROGRAMA nombre ';' bloque_programa {printf("\t def_programa -> PROGRAMA ';' bloque_programa \n");}
          ;

nombre :  id_op IDENTIFICADOR {printf("\t nombre -> identificador_con_cuatro_ptos_ceroomas IDENTIFICADOR \n");}
          ;

id_op : 
      | id_op IDENTIFICADOR CUATRO_PTOS
      ;


bloque_programa : declaracion_cargas declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones {printf("\t bloque_programa -> declaracion_cargas_op declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones \n");}
          ;

bloque_instrucciones : '{' instruccion_unoomas '}' {printf("\t bloque_instrucciones -> '{' instruccion_unoomas '}'  \n");}
            ;

instruccion_unoomas :  instruccion_unoomas instruccion  {printf("\t instruccion_unoomas -> instruccion  \n");}
                    | instruccion {printf("\t instruccion_unoomas -> instruccion_unoomas instruccion  \n");}
                    ; 

definicion_paquete : PAQUETE nombre ';' seccion_cabecera seccion_cuerpo {printf("\t definicion_paquete -> PAQUETE nombre ';' seccion_cabecera seccion_cuerpo  \n");}
                    ;

seccion_cabecera : CABECERA declaracion_cargas declaracion_tipos declaracion_constantes declaracion_variables declaracion_interfaces {printf("\t seccion_cabecera -> CABECERA declaracion_cargas_op declaracion_tipos declaracion_constantes declaracion_variables declaracion_interfaces  \n");}
                  ;

seccion_cuerpo : CUERPO declaracion_tipos declaracion_constantes declaracion_variables declaracion_subprograma {printf("\t seccion_cuerpo -> CUERPO declaracion_tipos declaracion_constantes declaracion_variables declaracion_subprograma  \n");}

declaracion_cargas : 
                | CARGA declaracion_carga_unoomas ';' {printf("\t declaracion_cargas_op -> CARGA declaracion_carga_unoomas ';'  \n");}
                ;

declaracion_carga_unoomas : nombre en_path_op nombres_op {printf("\t declaracion_carga_unoomas -> nombre en_path_op nombres_op  \n");}
                          | declaracion_carga_unoomas ',' nombre en_path_op nombres_op {printf("\t declaracion_carga_unoomas -> declaracion_carga_unoomas ',' nombre en_path_op nombres_op  \n");}
                    ;

en_path_op : 
            | EN PATH {printf("\t en_path_op -> EN PATH  \n");}
            ;

nombres_op : 
            | '('  nombres_comas ')' {printf("\t nombres_op -> '('  nombres_comas ')'  \n");}
            ;

nombres_comas : nombres_comas ',' nombre {printf("\t nombres_comas -> nombres_comas ',' nombre  \n");}
              | nombre {printf("\t nombres_comas -> nombre  \n");}
              ;


/************************/
/* tipos (incl. clases) */
/************************/

declaracion_tipos :
                  | TIPO declaracion_tipo {printf("\t declaracionlaracion_tipos -> TIPO declaracion_tipo  \n");}
                  ;


declaracion_tipo :  declaracion_tipo nombre '=' tipo_no_estructurado_o_nombre_tipo ';'
                 |  declaracion_tipo nombre '=' tipo_estructurado
                 |  nombre '=' tipo_no_estructurado_o_nombre_tipo ';' {printf("\t declaracion_tipo -> nombre '=' tipo_no_estructurado_o_nombre_tipo ';'  \n");}
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
                ;

expresion_constante_unoomas : expresion_constante {printf("\t expresion_constante_unoomas -> expresion_constante  \n");}
                            | expresion_constante_unoomas ',' expresion_constante {printf("\t expresion_constante_unoomas -> expresion_constante_unoomas ',' expresion_constante  \n");}
                            ;

tipo_lista : LISTA rango_lista DE tipo_no_estructurado_o_nombre_tipo {printf("\t tipo_lista -> LISTA rango_lista DE tipo_no_estructurado_o_nombre_tipo  \n");}
            ;

rango_lista : rango_lista ',' rango {printf("\t rango_lista ->  rango_lista ',' rango  \n");}
            | rango {printf("\t rango_lista -> rango  \n");}
            ;

rango : expresion DOS_PTOS expresion expresion_rango_op {printf("\t rango -> expresion DOS_PTOS expresion expresion_rango_op  \n");}
      ;

expresion_rango_op : 
                    | DOS_PTOS expresion  {printf("\t expresion_rango_op -> DOS_PTOS expresion  \n");}
                    ;

tipo_lista_asociativa : LISTA ASOCIATIVA DE tipo_no_estructurado_o_nombre_tipo {printf("\t tipo_lista_asociativa -> LISTA ASOCIATIVA DE tipo_no_estructurado_o_nombre_tipo  \n");}
                      ;

tipo_conjunto : CONJUNTO DE tipo_no_estructurado_o_nombre_tipo {printf("\t tipo_conjunto -> CONJUNTO DE tipo_no_estructurado_o_nombre_tipo  \n");}
              ;

tipo_registro : REGISTRO '{' declaracion_campo '}' {printf("\t tipo_registro -> REGISTRO '{' declaracion_campo '}'  \n");}
              ;

declaracion_campo : declaracion_campo nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';' {printf("\t declaracion_campo -> declaracion_campo nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");}                
                  | nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'
                  ;


/*************************************/
/* constantes, variables, interfaces */
/*************************************/

declaracion_constantes :| CONSTANTE declaracion_constante_unoomas
                        ;

declaracion_constante_unoomas : declaracion_constante_unoomas declaracion_constante
                              | declaracion_constante
                              ;

declaracion_constante : nombre ';' tipo_no_estructurado_o_nombre_tipo '=' valor_constante
                      ;

valor_constante: expresion
                | '[' valor_constante_comas ']'
                | '[' clave_valor ']'
                | '[' campo_valor ']'
                ;

valor_constante_comas : valor_constante_comas ',' valor_constante
                      | valor_constante
                      ;

clave_valor : clave_valor ',' CTC_CADENA FLECHA_DOBLE valor_constante
            | CTC_CADENA FLECHA_DOBLE valor_constante
            ;

campo_valor : campo_valor ',' nombre FLECHA_DOBLE valor_constante
            | nombre FLECHA_DOBLE valor_constante
            ;              

declaracion_variables : 
                      | VARIABLE declaracion_variable
                      ;

declaracion_variable : nombres_comas ':' tipo_no_estructurado_o_nombre_tipo '=' valor_constante ';'
                      | nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'
                      ;


declaracion_interfaces : INTERFAZ cabecera_subprograma_unoomas
                        ;


declaracion_clase : declaracion_clase_mod
                  | declaracion_clase_nomod 
                  ;

declaracion_clase_mod : CLASE FINAL '(' ')'  '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'
                      | CLASE FINAL '(' nombres_comas ')' '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'
                      ;


declaracion_clase_nomod : CLASE '(' nombres_comas ')' '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}' 
                        | CLASE '(' ')' '{' declaraciones_publicas declaraciones_semi declaraciones_privadas '}'                 
                        ;


declaraciones_publicas : PUBLICO declaracion_componente_unoomas
                        | declaracion_componente_unoomas
                        ;  

declaraciones_semi : 
                    | SEMIPUBLICO declaracion_componente_unoomas
                    ;

declaraciones_privadas : 
                        | PRIVADO declaracion_componente_unoomas
                        ;

declaracion_componente_unoomas : declaracion_componente
                               | declaracion_componente_unoomas declaracion_componente 
                               ;

declaracion_componente : declaracion_tipo_anidado
                       | declaracion_constante_anidada
                       | declaracion_atributos
                       | cabecera_subprograma ';' modificadores ';'
                       | cabecera_subprograma ';'
                       ;

declaracion_tipo_anidado : TIPO declaracion_tipo 
                         ;

declaracion_constante_anidada : CONSTANTE declaracion_constante
                              ;

declaracion_atributos : nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'
                      ;

modificadores : modificador_comas
              ;

modificador_comas : modificador_comas ',' modificador
                  | modificador 
                  ;

modificador : GENERICO
            | ABSTRACTO
            | ESPECIFICO
            | FINAL
            ;


/****************/
/* subprogramas */
/****************/


declaracion_subprograma : declaracion_subprograma cabecera_subprograma bloque_subprograma
                        | cabecera_subprograma bloque_subprograma
                        ;

cabecera_subprograma : cabecera_funcion
                     | cabecera_procedimiento
                     | cabecera_constructor
                     | cabecera_destructor
                     ;

cabecera_subprograma_unoomas : cabecera_subprograma_unoomas cabecera_subprograma ;
                             | cabecera_subprograma ;

cabecera_funcion : FUNCION nombre declaracion_parametros FLECHA_DOBLE tipo_no_estructurado_o_nombre_tipo
                 ;

cabecera_procedimiento : PROCEDIMIENTO nombre declaracion_parametros
                        ;

cabecera_constructor : CONSTRUCTOR nombre declaracion_parametros
  ;

cabecera_destructor : DESTRUCTOR nombre
                    ;

declaracion_parametros : 
                      | '(' lista_parametros_formales ')'
                      ;
  
lista_parametros_formales : parametros_formales
                           | lista_parametros_formales ';' parametros_formales
                           ;

parametros_formales : nombres_comas ':' tipo_no_estructurado_o_nombre_tipo MODIFICABLE
                    | nombres_comas ':' tipo_no_estructurado_o_nombre_tipo
                    ;

bloque_subprograma : declaracion_tipos declaracion_constantes declaracion_variables bloque_instrucciones
                    ;



/*****************/
/* instrucciones */
/*****************/


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
            ;

instruccion_asignacion : objeto '=' expresion ';'

instruccion_salir : SALIR SI expresion ';'
                  | SALIR ';'
                  ;

instruccion_devolver : DEVOLVER expresion ';'
                     | DEVOLVER ';'
                     ;

instruccion_llamada : llamada_subprograma ';'
                    ;

llamada_subprograma : nombre '(' expresion_comas ')'
                      nombre '(' ')'
                    ; 

expresion_comas : expresion_comas ',' expresion
                | expresion
                ;

instruccion_si : SI expresion ENTONCES bloque_instrucciones SINO bloque_instrucciones
               | SI expresion ENTONCES bloque_instrucciones
               ;

instruccion_casos : EN  CASO expresion SEA caso ';'
                  ;

caso : caso entradas FLECHA_DOBLE bloque_instrucciones
     | entradas FLECHA_DOBLE bloque_instrucciones
     ;

entradas: entradas_op entrada 
        ;
entradas_op : 
            | entradas_op entrada '|'
            ;

entrada : expresion 
        | rango
        | OTRO
        ;

instruccion_bucle : clausula_iteracion bloque_instrucciones
                  ;

clausula_iteracion : PARA nombre EN objeto
                   | REPITE ELEMENTO nombre EN rango DESCENDENTE
                   | REPITE ELEMENTO nombre EN rango
                   | MIENTRAS expresion
                   | REPITE HASTA expresion 
                   ;

instruccion_probar_excepto : PROBAR bloque_instrucciones EXCEPTO clausula_excepcion FINALMENTE bloque_instrucciones
                           | PROBAR bloque_instrucciones EXCEPTO clausula_excepcion
                           ;

clausula_excepcion : CUANDO nombre EJECUTA bloque_instrucciones
                   ;

instruccion_lanzar : LANZAR nombre ';'
                   ;


/***************/
/* expresiones */
/***************/

objeto : nombre
       | objeto '[' expresion_comas ']'
       | objeto '.' IDENTIFICADOR
       ;

expresion_constante : CTC_ENTERA
                    | CTC_REAL
                    | CTC_CADENA
                    | CTC_CARACTER
                    | CTC_BOOLEANA
                    ;

expresion_primaria : expresion_constante
                   | objeto
                   | llamada_subprograma
                   | '(' expresion ')'
                   ;



expresion : expresion_primaria
          ;
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
