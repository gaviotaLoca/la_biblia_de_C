/*************************************************************************
 * fahr2cels_float.c Programa imprime la tabla Fahrenheit - Celsius
 *             para fahr = [0..300] usando aritmética de punto flotante
 *             en lugar de entera para obtener soluciónes más precisas.
 *             Y cambia ciclo while al ciclo for.
 * 
 * Departamento : Ciencias de la computación
 * Sección      : Los lenguajes programación
 * Ala          : El lenguaje programación C
 *
 * Fuente/      : libro "El lenguaje programación C" ed.2
 *      Source          Brain W. Kernighan, Dennis M. Ritchie
 *
 *                      Capitulo 1. Introducción general
 *                               1.3 La proposicion for.       
 *
 * Descripción: Programa utiliza la formula cels = (5.0/9.0)(fahr-32.0) para imprimir
 *          la tabla de temperaturas Fahrenheut y sus equivalentes centrígrados
 *          o Celsius para fahr = [0.0 .. 300.0] con paso 20.0:
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
 *           Aritmetica de punto flotante   ?
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
	double fahr, celsius;
	int lower, upper, step;

	/* Los calculos principian con las proposiciónes de asignación */
	lower = 0;    /* límite inferior de la tabla de temperaturas */
	upper = 300;  /* límite superior */
	step = 20;    /* tamaño del incremento */

	/* Cada linea de la tabla se calcula de la misma manera por lo que
	 *  se utiliza una iteración que se repite una vez por cada línea 
	 *  de salida; esto es propósito del ciclo while.
	 * Pero aqui cambio ciclo while al ciclo for                 */  
    /*   
	// El int se convierte a float antes de efectuarse la operación
	fahr = lower;                          // En esto caso hay que inicializar la variable
                                               // que es la prueba                      
        while (fahr <= upper) {                // Prueba la condición, de ser verdadera
	    celsius = (5.0 / 9.0) * (fahr - 32.00) ;     // el cuerpo del ciclo se ejecuta. Cuando
            printf("%3.0f\t%6.1f\n", fahr, celsius); // la prueba resulta falsa la iteracion termina 
            // Si un operador aritmético tiene operandos enteros, se ejecuta una operación
	    // entera. Si un operador numeríco tiene un operando de punto flotante y otro
	    // entero, este último será convertido a punto flotante antes de hacer la operación 
	    fahr = fahr + step;                // Hay que cambiar la variable para que el ciclo
	                                       // haya caducado en algún momento              
	} */

	/* Ciclo while se puede implementar de otra manera (; AZUCAR ;)
	 * con ciclo for
	 */
    for (fahr = lower; fahr <= upper; fahr = fahr + step) {
	    celsius = (5.0 / 9.0) * (fahr - 32.00);
	    printf("%3.0f\t%6.1f\n", fahr, celsius);
	} 

	/* NOTA: Aritmética de enteros. La división.
	 * La división de enteros trunca el resultado: cualquier parte fraccionaria
	 * se descarta.                                                             */
	printf("Aritmética de punto flotante. La división\n");
	printf("printf(\"%%3.0f\\t\%%6.1f\\n\", (5.0 / 9.0)*(fahr - 32.0), (5.0 * (fahr - 32) / 9.0));\n");
	printf("%3.0f\t%6.1f\n", (5.0 / 9.0) * (fahr - 32.0), (5.0 * (fahr - 32.0) / 9.0));

	return 0; 
} 
