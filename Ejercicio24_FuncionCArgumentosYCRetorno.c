#include <stdio.h>

int resta(int n1,int n2){
	return n1 - n2;
}


int main(int argc, char *argv[]) {
	
	int numero1,numero2,resultadoresta;
	
	numero1=10;
	numero2=6;
	
	resultadoresta = resta(numero1,numero2);
	
	printf ("La resta es %d",resultadoresta);
	return 0;
}

