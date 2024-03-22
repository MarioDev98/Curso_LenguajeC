#include <stdio.h>

int main(int argc, char *argv[]) {
	
/*	1.*/
/*		Con ciclo do while imprimir del 1 al 10 y sumar todos los numeros*/
/*			al final pues imprimir la suma total*/
	
	int i, sumatotal;
	
	sumatotal=0;
	i=1;
	
	do {
		printf ("%d ",i);
		sumatotal = sumatotal + i;
		i++;
	} while(i<=10);
	
	printf ("\nLa suma total es: %d",sumatotal);
	
	return 0;
}

