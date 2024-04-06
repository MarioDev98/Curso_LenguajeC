#include <stdio.h>

int main(int argc, char *argv[]) {
	int arreglo[4]={10,15,23,40};
	int arregloresultados[2];
	// quiero sumar la posicion 0 y 3 y multiplicar las posiciones 1 y 2 
	/*int sumar,multir; */
	
	arregloresultados[0]= arreglo[0] + arreglo[3];
	arregloresultados[1]= arreglo[1] * arreglo[2];
	
	printf("La suma es %d",arregloresultados[0]);
	printf("\nLa multiplicación es %d",arregloresultados[2]);
	return 0;
}

