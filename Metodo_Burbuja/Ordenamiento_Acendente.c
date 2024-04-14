#include <stdio.h>

int main(int argc, char *argv[]) {
	int arreglo[3]={3,1,2};
	
	int i,j,aux;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			
			//      3     >   1
			if(arreglo[j] > arreglo[j+1]){
				//    3 = 3
				aux = arreglo[j];
				//  1      =      1
				arreglo[j] = arreglo[j+1];
				//	3        = 3
				arreglo[j+1] = aux;
			}
		}
	}
	
	printf("ARREGLO ASCENDENTE --- MENOR A MAYOR");
	for(i = 0; i<3; i++){
		printf("%d ",arreglo[i]);
	}
	
	return 0;
}

