#include <stdio.h>

/*con funciones con argumentos pero sin retorno, hacer que una funcion*/
/*me pida los valores para un arreglo de 3 posiciones*/
/*y otra funcion libre quiero que sume los elementos del arreglo anterior*/
/*al final solo mostrar la suma del arreglo*/

void ingresararreglo(int arreglo1[], int tamano){
/*	arreglo1[tamano]=1;*/
/*	arreglo1[tamano]=2;*/
/*	arreglo1[tamano]=3;*/
	
/*	printf("%d",arreglo1[0]);*/
/*	printf("\n%d",arreglo1[1]);*/
/*	printf("\n%d",arreglo1[2]);*/
	
	for (int i=0; i < tamano; i++){
		printf("Ingresa un valor entero en la posicion %d\n",i);
		scanf("%d",&arreglo1[i]);
	}
	

}

int sumaarreglo(int arreglo2[],int tamano2){
	int suma=0;
	for (int i = 0; i < tamano2; i++){
		suma = suma + arreglo2[i];
	}
	/*printf("la suma es %d",suma);*/
	return suma;
}

int main(int argc, char *argv[]) {
	
	int arreglo[3];
	
/*	printf("\n%d",arreglo[0]);*/
/*	printf("\n%d",arreglo[1]);*/
/*	printf("\n%d\n",arreglo[2]);*/
	
	ingresararreglo(arreglo,3);
	
/*	printf("\n%d",arreglo[0]);*/
/*	printf("\n%d",arreglo[1]);*/
/*	printf("\n%d",arreglo[2]);*/
	
/*	for(int j=0; j < 3; j++){*/
/*		printf("%d",arreglo[j]);*/
/*	}*/
	
/*	sumaarreglo(arreglo,3);*/ //---- void 
	
/*	printf("La suma es %d",sumaarreglo(arreglo,3));*///-- return funcion
	
	int resultadosuma = sumaarreglo(arreglo,3);
	
	printf("La suma es %d",resultadosuma);
	
	return 0;
}




1 3 2 -- inicial
	
1 2 3 -- ordenamiento ascendente
3 2 1 -- ordenamiento descendente
