/*************************************************************************
 * hello.c  (; primera programa en cualquier lengua. ;)
 * 
 * Departamento : Ciencias de la computación
 * Sección      : Los lenguajes programación
 * Ala          : El lenguaje programación C
 *
 * Fuente/      : libro "El lenguaje programación C" ed.2
 *      Source          Brain W. Kernighan, Dennis M. Ritchie
 *
 *                      Capitulo 1. Introducción general
 *                               1.1 Comencemos       
 *
 * Descripción: Primero ejemplo de libro "El lenguaje programacion C" ed.2
 *              Pograma clasica "Hello World!".
 * 
 * Creado : 2024-10-26 10:52 
 * Editado:
 * Autor  : Gaviota Loca ;)
 * 
 * TODO_LIST:
 * QUE ES:
 *          La biblioteca estandar ?
 *          Funcion                ?
 *          Nueva linea en Linux vs Windows ?
 *          Cadena de escape     ?
 *          La proposición se termina con punto y coma!!!!
 *          Que es funcion main  ?
 *          Constantes ?
 **************************************************************************/
// La primera linea indica al compilador que debe incluir información acerca
// de la biblioteka estándar de entrada-salida
#include <stdio.h>

// Define una función main que no espera (no recibe valores de...) argumentos.
// NOTA: main es una funcion especial - apartir de este punto programa 
//       empieza su ejecucion y aqui está el algoritmo de ejecución principal 
//       (¿podemos considerar otras partes del programa como auxiliares?) 
int main()
{    // Las propociones de una función están encerradas entre llaves {}
     
	// main solo contiene una proporción
	printf("Hola mundo!\n");

    // "Hola mundo" se le llama cadena de caracteres o constante de cadena
	// printf  nunca proporciona una nueva linea automaticomente,
	// 
	// por eso motivo se usan una secuencia de escape "\n"
	// notese que "/n" representa un solo carácter.
	//
	// DESCOMENTAR LINEAS ABAJO
	//     printf("Hola ");
	//     printf(" mundo");
	//
	// NOTA IMPORTANTE: Pone ojo POR FAVOR!!!!!
	//  En lenguaje C punto
	//
	//      printf(
	//      "Hello ");
	//            printf
	//            ("MUUUUUndo"
	//            );
	
	// finaliza la ejecución del programa y devuelve 0 al sistema,
	// lo que significa que el programa se completó exitosamente
	return 0; 
	
} // fin de la función main significa fin de programa
