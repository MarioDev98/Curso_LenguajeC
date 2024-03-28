#include <stdio.h>

int main(int argc, char *argv[]) {
		
/*	1. */
/*	Con el ciclo while quiero que se ingresen 5 numeros, */
/*	de los cuales voy multiplicar los números pares */
/*	y sumar los números impares, */
/*	al final quiero que se muestren los dos resultados.*/
	
	int i,numero,multipares,sumaimpares;
	i =1;
	sumaimpares =0;
	multipares = 1;
	
	while (i<=5){
		printf("Ingresa un numero\n");
		scanf("%d",&numero);
		if(numero % 2 == 0){
			multipares = multipares * numero;
		}
		else {
			sumaimpares = sumaimpares + numero;
		}
		i++;
	}
	
	printf("\nLa mutiplicación de los numeros pares es %d ",multipares);
	printf("\nLa suma de los numeros impares es %d ",sumaimpares);
	
	return 0;
}

