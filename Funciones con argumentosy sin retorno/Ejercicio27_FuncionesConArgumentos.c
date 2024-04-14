#include <stdio.h>

/*	usando funciones con argumentos y sin retorno */
/*	quiero que en la funcion princial definan la tabla de multiplicar*/
/*	y en una funcion secundaria hagan la tabla de multiplicar y muestren el resultado*/


void tablamul (int numero){
	/*printf("%d",numero);*/
	int i;
	
	for (i = 1; i<=10; i++){
/*		printf ("%d ",i);*/
		printf ("%d x %d = %d\n",numero,i,numero  * i);
	}
}


int main(int argc, char *argv[]) {
	
	int tablamultiplicar;
	tablamultiplicar = 3;
	
	tablamul(tablamultiplicar);
	
	return 0;
}

