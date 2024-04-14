#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	char contrasena[10];
	char contrasena2[]="grupo3";
	
	printf ("adivina la contraseña \n");
	
	do {
		printf ("ingresa tu contraseña\n");
		scanf ("%s",contrasena);
		
	} while(strcmp(contrasena,contrasena2) != 0);
	
	// compara caracter por caracter
	// son iguales retorna 0 
	// si es menor retorna un negativo
	// si es mayor retorna un positivo 
	// 0 ,-1 , 1 o sus mayores > y menores
	// #include <string.h>
	
	
	
	return 0;
}

