#include <stdio.h>

int main(int argc, char *argv[]) {
	
/*	2. */
		
/*	Con el ciclo for quiero que mi inicio empiece en 10 y mi ciclo acabe en 15,*/
/*	de los números que se encuentren en ese rango que me diga cuantos pares e impares existen, */
/*	así como también sumar todos los números que estén dentro del ciclo de mi inicio y fin.*/
	
	int inicio,fin,i,contadorpares,contadorimpares,suma;
	contadorimpares =0;
	contadorpares =0;
	inicio = 1;
	fin = 3;
	suma = 0;
	
	for (i=inicio; i<=fin; i++){
		//printf("%d ",i);
		if(i % 2 == 0){
			contadorpares = contadorpares + 1;
		}
		else {
			contadorimpares = contadorimpares +1;
		}
		
		suma = suma + i;
		
	}
	
	printf ("\nEl total de impares es: %d ",contadorimpares);
	printf ("\nEl total de pares es: %d",contadorpares);
	printf ("\nLa suma total de los numeros es: %d ",suma);
	
	return 0;
}

