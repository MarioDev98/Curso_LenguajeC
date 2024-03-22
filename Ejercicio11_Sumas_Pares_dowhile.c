#include <stdio.h>

int main(int argc, char *argv[]) {

/*	2. */
/*		Con ciclo do while recorrer del 1 al 20 y mostrar los numeros pares*/
/*			y sumar los numeros impares, al final mostrar la suma*/
/*			total de los numeros impares y mostrar los numeros pares*/

	int i, sumaimpares;
	i = 1;
	sumaimpares =0;
	do {
	
		/*printf (" %d ",i);*/
		// 1
		if (i % 2 == 0){
			printf ("\n numero par %d", i);
		}
		else if (i % 2 != 0){
			sumaimpares = sumaimpares + i; 
		}
		
/*		else {*/
/*			sumaimpares = sumaimpares + i;*/
/*		}*/
		
		i++;
	} while(i<=20);
	
	printf ("\nla suma de los impares es: %d ",sumaimpares);
	
	return 0;
}

