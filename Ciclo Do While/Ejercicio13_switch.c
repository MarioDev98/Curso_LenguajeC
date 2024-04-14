#include <stdio.h>

int main(int argc, char *argv[]) {

	int opcion;
	
	printf ("******** MENU PRINCIPAL *********\n\n");
	printf (" 1 Imprimir hola mundo\n");
	printf (" 2 Saludo \n");
	printf ("***********************\n");
	scanf ("%d",&opcion);
	
	switch (opcion) {
	case 1:
		printf ("Hola mundo\n");
		break;
	case 2:
		printf ("\nHolaaa");
		break;
	default:
		printf ("La opcion no es valida");
	}
	
	
	return 0;
}

