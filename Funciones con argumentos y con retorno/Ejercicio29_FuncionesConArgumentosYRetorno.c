#include <stdio.h>

char* mensaje (char hola[]){
	return hola;
}

int main(int argc, char *argv[]) {
		
	char hola[]="hola";
	
	printf ("%s",mensaje(hola));
	
	return 0;
}

