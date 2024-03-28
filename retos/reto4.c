#include <stdio.h>

int main(int argc, char *argv[]) {
	
/*	5.*/
/*		Con el ciclo de tu preferencia, quiero que pidas 10 numeros pueden */
/*		positivos o negativos, que sume los pares positivos y le reste la*/
/*		suma de los negativos, al final mostrar la suma de positivos*/
/*		la suma de negativos y la resta final.*/
	
	int i,numero,sumapositivospares,sumanegativos,restafinal;
	i = 1;
	sumanegativos = 0;
	sumapositivospares =0;
	
	while (i <=10){
		//printf("%d ",i);
		printf("\nIngresa un numero positivo o negativo que sea entero ");
		scanf("%d",&numero);
		//printf ("\n\n%d",numero);
		
		if (numero > 0){
			//printf ("Numero positivo %d",numero);
			if (numero % 2 == 0) {
				sumapositivospares = sumapositivospares + numero;
			}
		}
		else  {
			sumanegativos = sumanegativos + numero;
		}
		i ++;
	}
		
        printf ("\nLa suma de negativos es %d",sumanegativos);
		printf ("\nLa suma de los positivos es %d", sumapositivospares);
		restafinal = sumapositivospares - sumanegativos;
		printf ("\nLa resta final es %d - (%d) = %d",sumapositivospares,sumanegativos,restafinal);
	return 0;
}

