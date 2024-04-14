#include <stdio.h>

char* regresanombre (char nombre[]){
	return nombre;
}

int main(int argc, char *argv[]) {
	char nombre[] ="Mario";
	
	printf("%s",regresanombre(nombre));
	
	return 0;
}

