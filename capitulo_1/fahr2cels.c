/*************************************************************************
 * fahr2cels.c Programa imprime la tabla Fahrenheit - Celsius
 *             para fahr = [0..300]
 * 
 * Departamento : Ciencias de la computación
 * Sección      : Los lenguajes programación
 * Ala          : El lenguaje programación C
 *
 * Fuente/      : libro "El lenguaje programación C" ed.2
 *      Source          Brain W. Kernighan, Dennis M. Ritchie
 *
 *                      Capitulo 1. Introducción general
 *                               1.2 Variables y expreciones aretméticas       
 *
 * Descripción: Programa utiliza la formula cels = (5/9)(fahr-32) para imprimir
 *          la tabla de temperaturas Fahrenheut y sus equivalentes centrígrados
 *          o Celsius para fahr = [0..300] con paso 20:
 *             0 -17
 *             20 -6
 *             40 4
 *
 * Creado : 2024-10-26 13:07 
 * Editado:  
 * Autor  : Gaviota Loca ;)
 * 
 * TODO_LIST:
 * QUE ES:
 *           Ciclos while, for, do..until ?
 *           Aritmetica de enteros            ?
 *           Overload                     ?
 *           Imprimir las cadenas formatas ?
 *           expresion tiene el resulto siempre ?
 * 
 **************************************************************************/
#include <stdio.h>

int main()
{    
	/* En C, se deben declarar todas las variables antes de su uso,
	 * generalmente al principio de la funcion y antes de cualquier
	 * proporsición ejecutable.
	 * Una declaracion notifica las propiedades de una variable;
	 * consta de un nomnre de tipo y una lista de variables
	 *     nombre_de_tipo nombre_de_vartiable[,lista_de_variables];
	 *     nombre_de_tipo variable = <valor>,[,lista_de_variables];  */
	int fahr, celsius;
	int lower, upper, step;

	/* Los calculos principian con las proposiciónes de asignación */
	lower = 0;    /* límite inferior de la tabla de temperaturas */
	upper = 300;  /* límite superior */
	step = 20;    /* tamaño del incremento */

	/* Cada linea de la tabla se calcula de la misma manera por lo que
	 *  se utiliza una iteración que se repite una vez por cada línea 
	 *  de salida; esto es propósito del ciclo while                 */  
        
	fahr = lower;                          // En esto caso hay que inicializar la variable
                                               // que es la prueba                      
        while (fahr <= upper) {                // Prueba la condición, de ser verdadera
	    celsius = 5 * (fahr - 32) / 9;     // el cuerpo del ciclo se ejecuta. Cuando
            printf("%d\t%d\n", fahr, celsius); // la prueba resulta falsa la iteracion termina 
            fahr = fahr + step;                // Hay que cambiar la variable para que el ciclo
	                                       // haya caducado en algún momento              
	}

	/* Este ciclo se puede implementar de otra manera (; AZUCAR ;)
	 *
	 * for (fahr = lower; fahr <= upper; fahr = fahr + step) {
	 *     celsius = 5 * (fahr - 32) / 9;
	 *     printf("%d\t%d\n", fahr, celsius);
	 * }
	 */ 

	/* NOTA: Aritmética de enteros. La división.
	 * La división de enteros trunca el resultado: cualquier parte fraccionaria
	 * se descarta.                                                             */
	printf("Aritmética de enteros. La división\n");
	printf("printf(\"%%d\\t\%%d\\n\", (5 * (fahr - 32) / 9), (5 / 9 * (fahr - 32)));\n");
	printf("%d\t%d\n", (5 * (fahr - 32) / 9), (5 / 9 * (fahr - 32)));

	return 0; 
} 
