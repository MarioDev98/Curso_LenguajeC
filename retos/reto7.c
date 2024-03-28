#include <stdio.h>

int main(int argc, char *argv[]) {
/*	3.	*/
/*		Con el ciclo do while quiero ingresar números negativos */
/*		y sumarlos y */
/*		que el ciclo termine cuando yo ponga un numero positivo cual sea*/
		
	int numero,suma;
	suma =0;
	
	
	do {
			printf("Ingresa numeros negativos para salir ingresa uno positivo\n ");
			scanf("%d",&numero);
			
			if (numero < 0){
				suma = suma + numero;
			}
			else {
				printf("\n estas saliendo del programa");
			}
			
	} while(numero < 0);
			
	printf ("\nLa suma de los numeros negativos es : %d ",suma);
			
	return 0;
}

