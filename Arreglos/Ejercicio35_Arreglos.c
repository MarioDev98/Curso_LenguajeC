#include <stdio.h>

int main(int argc, char *argv[]) {
	int arreglonumeros[3]; //0 1 2 3
	
	//Asignacion
/*	arreglonumeros[0]=10;*/
/*	arreglonumeros[1]=20;*/
/*	arreglonumeros[2]=30;*/
	
	
	
	printf("Ingresa un valor entero\n");
	scanf("%d",&arreglonumeros[0]);
	
	arreglonumeros[0]= 10;
	
	printf("\nElemento inicial = %d",arreglonumeros[0]);
/*	printf("\nElemento dos = %d",arreglonumeros[1]);*/
/*	printf("\nElemento tres = %d",arreglonumeros[2]);*/
	
	return 0;
}

