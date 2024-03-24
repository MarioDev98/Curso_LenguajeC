#include <stdio.h>

int main(int argc, char *argv[]) {
	
/*	1. */
/*		Escribe en lenguaje c un código que me permita ingresar dos números enteros, */
/*		el primero número ingresado será el inicio de nuestro ciclo,*/
/*		el segundo número será el fin de nuestro ciclo y vamos a calcular */
/*		la suma y promedio entre ese rango de números, */
/*		puedes hacer uso del ciclo que quieras, */
/*		en consola tienes que imprimir el ciclo completo de números, así como el promedio final.*/

	int numeroincial, numerofinal,suma,contador;
	float promedio;
	numeroincial = 5;
	numerofinal=8;
	contador = 0;
	
	while (numeroincial <= numerofinal){
		printf("%d ",numeroincial);
		suma = suma + numeroincial;
		contador = contador + 1;
		
		numeroincial++ ;
	}
	promedio = suma / contador;
	printf ("la suma es de %f ",promedio);
	
	return 0;
}

