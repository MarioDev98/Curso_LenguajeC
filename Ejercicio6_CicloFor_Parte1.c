#include <stdio.h>

int main(int argc, char *argv[]) {

/*	for (inicio; condicion; incremento-decremento) {*/
/*		secuencias de acciones*/
/*	}*/
	
	//i -- iteración 
	
/*	int i, numeroincial,numerofinal;*/
	
/*	numeroincial = 5;*/
/*	numerofinal  = 15;*/
	
/*	for (i= numeroincial; i<=numerofinal; i++){*/
/*		printf (" %d ",i);*/
	//}
	
/*	1.*/
/*		con un ciclo for sin definir valores quiero que me muestren del -1 al -10*/
	
	int i;
	printf ("Primer ciclo del -1 al -10\n");
	for (i = -1; i >= -10; i--){
		printf ("%d ", i);
	}
 

/*	2. */
/*		con un ciclo for definiendo valores de inicio y final quiero que*/
/*		mostremos del 1 al 10 pero de 2 en 2*/
	
	int j,numeroinicial,numerofinal;
	
	numeroinicial = 5;
	numerofinal= 10;
	
	printf ("Ciclo de 2 en 2 hasta el 10\n");
	
	//1 + 2 = 3 + 2 = 5 + 2 = 7 + 2 = 9
	
	
	for (j = numeroinicial; numeroinicial <=numerofinal; numeroinicial+=2){
		printf (" %d ", numeroinicial);
	}
	
	
	return 0;
}

