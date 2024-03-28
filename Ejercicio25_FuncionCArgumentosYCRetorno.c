#include <stdio.h>

int DescubreParImpar(int n1){
	return (n1 % 2 == 0);
}


int main(int argc, char *argv[]) {

	int numero;
	
	numero = 20;
	
	if (DescubreParImpar(numero)){
		printf("El numero si es par");
	}
	else {
		printf("El numero es impar");
	}
	
	return 0;
}



