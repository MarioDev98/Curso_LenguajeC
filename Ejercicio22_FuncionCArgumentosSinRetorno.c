#include <stdio.h>

 //sacar el resultado de un numero elevado a una potencia con argumentos pero sin retorno

void Potencia (int numero, int potencia){
	int resultadopotencia = 1 ;

	for (int i=1; i <= potencia; i++){
		resultadopotencia *= numero;
	}
	printf ("El resultado es %d ",resultadopotencia);
}

int main(int argc, char *argv[]) {
	int numero,potencia;
	
	numero = 2;
	potencia = 3;
	
	Potencia (numero,potencia);
	
	return 0;
}


