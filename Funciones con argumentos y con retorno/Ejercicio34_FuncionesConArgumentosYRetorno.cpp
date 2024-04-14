#include <stdio.h>



int operaciontabla(int numerot3,int i){
	return numerot3 * i;
}

void ciclodetabla(int numerot2){
	
	for(int i = 1; i<=10; i++){
		int producto = operaciontabla(numerot2,i); 
		printf("\n%d x %d = %d",numerot2,i,producto);
	}
}

int main(int argc, char *argv[]) {
	
	int numerot;
	numerot = 10;

	ciclodetabla(numerot);
	
	return 0;
}

