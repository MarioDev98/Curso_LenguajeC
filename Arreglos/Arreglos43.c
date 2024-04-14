#include <stdio.h>

int main(int argc, char *argv[]) {
	int arreglo[5];
	
/*	arreglo[0]=1;*/
/*	arreglo[1]=2;*/
/*	arreglo[2]=2;*/
	
	/*printf("elemento del arreglo en posicion inicial %d",arreglo[1]);*/
	
	
	for (int i=0;i < 5; i++ ){
		/*printf("%d ",i);*/
		printf("\nIngresa un numero en la posicion %d\n",i);
		scanf("%d",&arreglo[i]);
	}
	
/*	printf("\n%d",arreglo[0]);*/
/*	printf("\n%d",arreglo[1]);*/
/*	printf("\n%d",arreglo[2]);*/
/*	printf("\n%d",arreglo[3]);*/
/*	printf("\n%d",arreglo[4]);*/
	printf("\n");
	for(int j=0; j<5; j++){
		printf("%d ",arreglo[j]);
	}
	
	return 0;
}

