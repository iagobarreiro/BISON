 
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

nombre : identificador_con_cuatro_ptos_ceroomas IDENTIFICADOR {printf("\t nombre -> identificador_con_cuatro_ptos_ceroomas IDENTIFICADOR \n");}
          ;

identificador_con_cuatro_ptos_ceroomas : %empty
                                        | identificador_con_cuatro_ptos_ceroomas IDENTIFICADOR CUATRO_PTOS {printf("\t identificador_con_cuatro_ptos_ceroomas -> identificador_con_cuatro_ptos_ceroomas IDENTIFICADOR '::' \n");}
                                        | IDENTIFICADOR CUATRO_PTOS {printf("\t identificador_con_cuatro_ptos_ceroomas -> IDENTIFICADOR '::' \n");}
                                        ;

bloque_programa : declaracion_cargas_op declaracion_tipos_op declaracion_constantes_op declaracion_variables_op bloque_instrucciones {printf("\t bloque_programa -> declaracion_cargas_op declaracion_tipos_op declaracion_constantes_op declaracion_variables_op bloque_instrucciones \n");}
          ;

bloque_instrucciones : '{' instruccion_unoomas '}' {printf("\t bloque_instrucciones -> '{' instruccion_unoomas '}'  \n");}
            ;

instruccion_unoomas : instruccion_unoomas instruccion {printf("\t instruccion_unoomas -> instruccion_unoomas instruccion  \n");}
                      | instruccion {printf("\t instruccion_unoomas -> instruccion  \n");}
                      | %empty
                      ; 

definicion_paquete : PAQUETE nombre ';' seccion_cabecera seccion_cuerpo {printf("\t definicion_paquete -> PAQUETE nombre ';' seccion_cabecera seccion_cuerpo  \n");}
                    ;

seccion_cabecera : CABECERA declaracion_cargas_op declaracion_tipos_op declaracion_constantes_op declaracion_variables_op declaracion_interfaces_op {printf("\t seccion_cabecera -> CABECERA declaracion_cargas_op declaracion_tipos_op declaracion_constantes_op declaracion_variables_op declaracion_interfaces_op  \n");}
                  ;

seccion_cuerpo : CUERPO declaracion_tipos_op declaracion_constantes_op declaracion_variables_op declaracion_subpograma_unoomas {printf("\t seccion_cuerpo -> CUERPO declaracion_tipos_op declaracion_constantes_op declaracion_variables_op declaracion_subpograma_unoomas  \n");}

declaracion_cargas_op : %empty
                | CARGA declaracion_carga_unoomas ';' {printf("\t declaracion_cargas_op -> CARGA declaracion_carga_unoomas ';'  \n");}
                ;

declaracion_carga_unoomas : declaracion_carga_unoomas ',' nombre en_path_op nombres_op {printf("\t declaracion_carga_unoomas -> declaracion_carga_unoomas ',' nombre en_path_op nombres_op  \n");}
                    | nombre en_path_op nombres_op {printf("\t declaracion_carga_unoomas -> nombre en_path_op nombres_op  \n");}

en_path_op : %empty
            | EN PATH {printf("\t en_path_op -> EN PATH  \n");}
            ;

nombres_op : %empty
            | '('  nombres_comas ')' {printf("\t nombres_op -> '('  nombres_comas ')'  \n");}
            ;

nombres_comas : nombres_comas ',' nombre {printf("\t nombres_comas -> nombres_comas ',' nombre  \n");}
              | nombre {printf("\t nombres_comas -> nombre  \n");}
              ;


/************************/
/* tipos (incl. clases) */
/************************/

declaracionlaracion_tipos : TIPO declaracion_tipo_unoomas {printf("\t declaracionlaracion_tipos -> TIPO declaracion_tipo_unoomas  \n");}
          ;
        
declaracion_tipo_unoomas : declaracion_carga_unoomas nombre '=' tipo_no_estructurado_o_nombre_tipo ';' {printf("\t declaracion_tipo_unoomas -> declaracion_carga_unoomas nombre '=' tipo_no_estructurado_o_nombre_tipo ';'  \n");}
                 | declaracion_carga_unoomas nombre '=' tipo_estructurado {printf("\t declaracion_tipo_unoomas -> declaracion_carga_unoomas nombre '=' tipo_estructurado  \n");}
                 |  nombre '=' tipo_no_estructurado_o_nombre_tipo ';' {printf("\t declaracion_tipo_unoomas -> nombre '=' tipo_no_estructurado_o_nombre_tipo ';'  \n");}
                 |  nombre '=' tipo_estructurado {printf("\t declaracion_tipo_unoomas -> nombre '=' tipo_estructurado  \n");}
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

expresion_constante_unoomas : expresion_constante_unoomas ',' expresion_constante {printf("\t expresion_constante_unoomas -> expresion_constante_unoomas ',' expresion_constante  \n");}
                              | expresion_constante {printf("\t expresion_constante_unoomas -> expresion_constante  \n");}
                              ;

tipo_lista : LISTA rango_lista DE tipo_no_estructurado_o_nombre_tipo {printf("\t tipo_lista -> LISTA rango_lista DE tipo_no_estructurado_o_nombre_tipo  \n");}
            ;

rango_lista : rango_lista ',' rango {printf("\t rango_lista ->  rango_lista ',' rango  \n");}
            | rango {printf("\t rango_lista -> rango  \n");}
            ;

rango : expresion DOS_PTOS expresion expresion_rango_op {printf("\t rango -> expresion DOS_PTOS expresion expresion_rango_op  \n");}
      ;

expresion_rango_op : %empty
                    | DOS_PTOS expresion  {printf("\t expresion_rango_op -> DOS_PTOS expresion  \n");}
                    ;

tipo_lista_asociativa : LISTA ASOCIATIVA DE tipo_no_estructurado_o_nombre_tipo {printf("\t tipo_lista_asociativa -> LISTA ASOCIATIVA DE tipo_no_estructurado_o_nombre_tipo  \n");}
                      ;

tipo_conjunto : CONJUNTO DE tipo_no_estructurado_o_nombre_tipo {printf("\t tipo_conjunto -> CONJUNTO DE tipo_no_estructurado_o_nombre_tipo  \n");}
              ;

tipo_registro : REGISTRO '{' declaracion_campo '}' {printf("\t tipo_registro -> REGISTRO '{' declaracion_campo '}'  \n");}
              ;

declaracion_campo : declaracion_campo nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';' {printf("\t declaracion_campo -> declaracion_campo nombres_comas ':' tipo_no_estructurado_o_nombre_tipo ';'  \n");}                
                  ;


/*************************************/
/* constantes, variables, interfaces */
/*************************************/

//2.3. Declaraci´on de constantes, variables e interfaces


/****************/
/* subprogramas */
/****************/

/*****************/
/* instrucciones */
/*****************/

/***************/
/* expresiones */
/***************/

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
