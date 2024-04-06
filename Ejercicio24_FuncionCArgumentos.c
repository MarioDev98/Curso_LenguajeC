#include <stdio.h>

void operaciones (int numero, int numero2, char nombre[]){
	int suma =numero + numero2;
	float promedio= suma /2;
	printf("el promedio es %f",promedio);
	
	printf("el promedio es %s",nombre);
}

int main(int argc, char *argv[]) {
	
	int numero,numero2;
	char nombre[10];
	
	
	printf ("Ingresa los numeros\n");
	scanf ("%d",&numero);
	scanf ("%d",&numero2);
	printf ("\nIngresa nombre\n");
	scanf ("%s",nombre);
	
	operaciones(numero,numero2,nombre);
	
	
	return 0;
}

