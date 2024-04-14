#include <stdio.h>

void suma_numeros (int numero1, int numero2) {

/*	printf("%d",numero1);*/
/*	printf("\n%d",numero2);*/
	int suma;
	suma = numero1 + numero2;
	printf ("La suma es: %d",suma);
	
}

int main(int argc, char *argv[]) {
	
	
	int tabla = 2;
	int numero1,numero2;
	printf ("Ingresa un numero entero\n");
	scanf ("%d",&numero1);
	printf ("Ingresa un numero entero\n");
	scanf ("%d",&numero2);
	
	suma_numeros(numero1,numero2);
	
	//resta_numeros(3,2);
	return 0;
}

