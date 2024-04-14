#include <stdio.h>

int main(int argc, char *argv[]) {
	
	
	int numero;
	
	printf ("INGRESA UN NUMERO ENTERO \n");
	scanf ("%d",&numero);
	    
/*	if (numero >= 0 ){*/
/*		printf ("El numero es positivo");*/
/*	} */
/*	else {*/
/*			printf ("El numero es negativo");*/
/*	}*/
	
	
	if (numero > 0) {
		printf ("el numero es positivo");
	} 
	else if (numero < 0 ) {
		printf ("el numero es negativo");
	} 
	else {
		printf ("el numero es cero");
	}
	
	
	
	
	return 0;
}

