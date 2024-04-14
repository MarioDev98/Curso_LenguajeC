#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int arreglo[4]={10,15,23,40};// 0 1 2 3 ---  1 2 3 4
	int numeroe = 10;
	
	for(int i = 0; i <=3; i++){

		if(arreglo[i] == numeroe){
			printf("El numero si existe en el arreglo en la posición %d",i);
			
		} 
		
	}
	
		
	return 0;
}

