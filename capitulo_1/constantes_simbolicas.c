/*************************************************************************
 * fahr2cels_float.c Programa imprime la tabla Fahrenheit - Celsius
 *             para fahr = [0..300] usando aritmética de punto flotante
 *             en lugar de entera para obtener soluciónes más precisas.
 *             
 *             Es una mala práctica poner "números mágicos" como 300 y 20
 *             en un programa. Una manera de tratar a esos números es darle
 *             nombres significativos.
 * 
 *             Una línea #define define un nombre simbólico o constante
 *             simbólica como caracteres especial :
 *                 #define nombre  texto_de_reemplazo
 *             El texto_de_reemplazo puede ser cualquier secuencia de
 *             caracteres; no esta limitado a numeros.
 * 
 * Departamento : Ciencias de la computación
 * Sección      : Los lenguajes programación
 * Ala          : El lenguaje programación C
 *
 * Fuente/      : libro "El lenguaje programación C" ed.2
 *      Source          Brain W. Kernighan, Dennis M. Ritchie
 *
 *                      Capitulo 1. Introducción general
 *                               1.4 Constantes simbólicas.       
 *
 * Descripción: Programa utiliza la formula cels = (5.0/9.0)(fahr-32.0) para imprimir
 *          la tabla de temperaturas Fahrenheut y sus equivalentes centrígrados
 *          o Celsius para fahr = [0.0 .. 300.0] con paso 20.0:
 *             0 -17
 *             20 -6
 *             40 4
 *
 * Creado : 2024-10-26 18:10 
 * Editado:  
 * Autor  : Gaviota Loca ;)
 * 
 * TODO_LIST:
 * QUE ES:
 *           Ciclos while, for, do..until ?
 *           Aritmetica de enteros            ?
 *           Aritmetica de punto flotante   ?
 *           Overload
 *           Constantes simbolicas                     ?
 *           Imprimir las cadenas formatas ?
 *           expresion tiene el resulto siempre ?
 * 
 **************************************************************************/
#include <stdio.h>

// constantes simbolicas 
#define LOWER 0    /* límite inferior de la tabla de temperaturas */
#define UPPER 300  /* límite superior */
#define STEP  20   /* tamaño del incremento */

int main()
{   
 
	double fahr, celsius;

    // Hay que cambiar "numeros magicos" al constantes simbolicas 
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
	    celsius = (5.0 / 9.0) * (fahr - 32.00);
	    printf("%3.0f\t%6.1f\n", fahr, celsius);
	} 

	
	return 0; 
} 
