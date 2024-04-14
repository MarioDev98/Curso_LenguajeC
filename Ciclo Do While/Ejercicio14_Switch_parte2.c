#include <stdio.h>

int main(int argc, char *argv[]) {

	int opcion;
	
	
	do {
		
		printf ("******** MENU PRINCIPAL *********\n\n");
		printf (" 1 Imprimir hola mundo\n");
		printf (" 2 Saludo \n");
		printf (" 3 Salir \n");
		printf ("***********************\n");
		scanf ("%d",&opcion);
		
		switch (opcion) {
		case 1:
			printf ("Hola mundo\n");
			break;
		case 2:
			printf ("Holaaa\n");
			break;
		case 3:
			printf ("Estas saliendo del programa...\n");
			break;
		default:
			printf ("La opcion no es valida\n");
		}
		
	} while(opcion != 3);
	
	
	
	return 0;
}

