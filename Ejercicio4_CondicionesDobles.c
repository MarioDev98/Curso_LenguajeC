#include <stdio.h>

int main(int argc, char *argv[]) {

	int num1, num2, num3;
	
	num1 = -5;
	num2 = 5;
	num3 = 5;

	if (num1 > num2 && num1 > num3) {
		printf ("El numero 1 es mayor %d",num1);
	}
	else if (num2 > num1 && num2 > num3) {
		printf ("El numero 2 es mayor %d",num2);
	}

	else if (num3 > num1 && num3 > num2){
		printf ("el numero 3 es mayor %d",num3);
	}
	
/*	else {*/
/*		printf ("los tres numeros son iguales");*/
/*	}*/
	
	else if (num1 == num2 && num1 == num3){
		printf ("los tres numeros son iguales");
	}
	
	return 0;
}

