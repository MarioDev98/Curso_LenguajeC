#include <stdio.h>

/*  Haciendo uso de funciones quiero pedirle al usuario un numero y una vez*/
/*	introducido el numero quiero que ese numero sea el fin de mi ciclo, es decir*/
/*	si el usuario ingresa un 4 mi ciclo va a ir del 1 al 4, pero si el usuario pone un*/
/*	10, voy a recorrer un ciclo del 1 al 10, una vez teniendo sumare los números*/
/*	que son impares.*/
/*	Al finalizar, en consola tengo que mostrar los números del ciclo que recorrí así*/
/*	como la suma de los números impares.*/

int sumaimpares(int numero) {
	int i, suma_impares;
	suma_impares = 0;
	for (i = 1; i <= numero; i++) {
		if (i % 2 == 1) {
			suma_impares += i;
		}
	}
/*	printf("La suma de los numeros impares hasta  %d\n",suma_impares);*/
	return suma_impares;
}

int main(int argc, char *argv[]) {
	int fin_ciclo;
	
	int resultadometodo;
	
	fin_ciclo = 5;
	
	resultadometodo = sumaimpares(fin_ciclo);
	
	printf("la suma es %d",resultadometodo);
	
/*	printf("La suma de los numeros impares hasta %d es %d\n",);*/
	
	return 0;
}
