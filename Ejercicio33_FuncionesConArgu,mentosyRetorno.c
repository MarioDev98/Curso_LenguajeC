#include <stdio.h>


int operaciontabla(int n1,int i){
	return n1 * i;
}

int main(int argc, char *argv[]) {
	int numerot;
	numerot = 2; 
	
/*	int fin_ciclo;*/
/*	fin_ciclo=10;*/
	
	for (int i = 1; i<=10; i++){
		int producto = operaciontabla(numerot,i); 
		printf("\n%d x %d = %d",numerot,i,producto);
	}
	
	
	//operaciontabla(numerot);
	//printf("%d",operaciontabla(numerot));
	return 0;
}

