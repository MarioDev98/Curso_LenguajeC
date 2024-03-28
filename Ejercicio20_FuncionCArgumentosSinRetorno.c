#include <stdio.h>

void arearectangulo(int base,int altura){
	int area;
	area = base * altura;
	printf("Area del rectangulo %d",area);
}

int main(int argc, char *argv[]) {
	int base;
	int altura;
	
	base = 5;
	altura = 2;
	
	arearectangulo (base,altura);
	
	return 0;
}

