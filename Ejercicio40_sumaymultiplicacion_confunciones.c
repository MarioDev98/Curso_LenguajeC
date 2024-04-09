#include <stdio.h>

/*	Usando funciones con argumentos y con retorno */
/*	quiero que la primer función me regrese el valor de una suma*/
/*	de dos numeros enteros, y la segunda funcion tomara el valor*/
/*	de la primera funcion y lo multiplicara por 2 al final */
/*	mostrar solamente el resultado de la multiplicacion*/

int sumanumeros(int n1, int n2){
	int resultadosum = n1 + n2;
	return resultadosum;
}

int multiplicacion(int n3){
	int resultadomult = n3 * 2;
	return resultadomult;
}
	
int main(int argc, char *argv[]) {
	
	int numero1,numero2;
	numero1 = 1;
	numero2 = 1;
	
	/*sumanumeros(numero1,numero2);*/
/*	printf("La suma es %d\n",sumanumeros(numero1,numero2));*/
	
/*	multiplicacion(sumanumeros(numero1,numero2));*/
	
/*	printf("La multiplicacion es %d",multiplicacion(sumanumeros(numero1,numero2)));*/
	
	int resultadosuma = sumanumeros(numero1,numero2);
	
	int resultadomultipli = multiplicacion(resultadosuma);
	
	printf("El resultado de la suma es %d",resultadosuma);
	printf("\nEl resultado de la multiplicacion es %d",resultadomultipli);
	return 0;
}

