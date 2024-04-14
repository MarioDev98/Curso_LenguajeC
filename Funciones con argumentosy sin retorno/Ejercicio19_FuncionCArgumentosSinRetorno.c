#include <stdio.h>

// saber el numero mayor usando una funcion con argumentos pero sin retorno.

void NumeroMayor (int n1,int n2, int n3){
	if (n1 > n2 && n1 > n3){
		printf ("El numero 1 es mayor");
	}
	else if (n2 > n1 && n2 > n3){
		printf ("El numero 2 es mayor");
	}
	else if (n3 > n1 && n3 > n2){
		printf ("El numero 3 es mayor");
	}
}

int main(int argc, char *argv[]) {
	int numero1,numero2,numero3;

	numero1= 7;
	numero2= 10;
	numero3= 1;
	
	NumeroMayor (numero1,numero2,numero3);
	
	return 0;
}

