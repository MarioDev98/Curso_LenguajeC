#include <stdio.h>

int main(int argc, char *argv[]) {
	
	// el usuario introduce 2 numeros ( 8 - 12) 
	// el primer numero es el inicio de mi ciclo y el segundo el final
	//impriman el orden de los numeros en ese ciclo
	
	int numero1, numero2, i;
	// primero doy el valor a numero 1
	numero1 = 5;
	// se define despues de tener el valor numero1
	i = numero1;
	numero2 = 9;
	     
	while (i <= numero2){
		printf ("%d ",i);
		i++;
	}
	
	//Otra forma de hacerlo
	while (numero1 <= numero2){
		printf ("%d ",numero1);
		numero1++;
	}
	
	numero = numero  + 2;
	
	
	
	return 0;
}

