#include <stdio.h>


int arearectangulo (int base, int altura){
	return base * altura;
}


int main(int argc, char *argv[]) {
	int base;
	int altura;
	int resultadoarea;
	
	base = 4;
	altura = 2;
	
	resultadoarea = arearectangulo (base,altura);
	
	printf ("El resultado es %d",resultadoarea);
	
	return 0;
}

