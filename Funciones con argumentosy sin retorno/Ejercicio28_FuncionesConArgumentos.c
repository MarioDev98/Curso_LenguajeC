#include <stdio.h>

/*	usando funciones con argumentos y sin retorno */
/*	quiero que en la funcion principal definan el numero de filas*/
/*	y columnas para definir una matriz, y con la funcion secundaria imprimir lo siguiente.*/
/*   5 -  3*/
/*	   - - -*/
/*	   - - -*/
/*	   - - -*/
/*	   - - - */
/*	   - - -*/
void mimatriz (int n1, int n2) {
/*	printf ("%d  - %d ",n1,n2);*/

	int i,j;
	
	for (i = 0; i < n1; i++){
		for (j = 0; j < n2; j++){
		printf (" 0 ");	
		}
		printf ("\n");
	}
	
	
	
}
    
int main(int argc, char *argv[]) {
    
	int filas, columnas;
	
	filas = 3;
	columnas = 3;
	
	mimatriz (filas,columnas);
	
	   
	return 0;
}

