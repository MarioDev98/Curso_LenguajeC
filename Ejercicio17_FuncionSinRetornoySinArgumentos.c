#include <stdio.h>


/*		En dos funciones sin retorno y sin argumentos, quiero que una funcion */
/*		me de la multiplicacion de dos numeros */
/*		y otra funcion me de el mayor de 3 numeros, si los numeros son 3,5,7;*/


void mutiplicacion(){
	int numero1, numero2, resultado;
	numero1=1;
	numero2=3;
	resultado = numero1 * numero2;
	printf ("El resultado de la multplicacion es %d \n",resultado);
}

void numeromayor(){
	int numero1, numero2,numero3;
	numero1=3;
	numero2=5;
	numero3=7;
	
	if (numero1 > numero2 && numero1 > numero3){
		printf ("El numero 1 es el mayor");
	}
	else if (numero2 > numero1 && numero2 > numero3){
		printf ("El numero 2 es el mayor");
	}
	else if (numero3 > numero1 && numero3 > numero2){
		printf ("El numero 3 es el mayor");
	}
}

int main(int argc, char *argv[]) {
	mutiplicacion();
	numeromayor();

	
	return 0;
}

