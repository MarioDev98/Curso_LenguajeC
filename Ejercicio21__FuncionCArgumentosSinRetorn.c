#include <stdio.h>

// Con una funcion sin retorno pero con argumentos imprimir un mensaje que se repita 10 veces


void MensajeRepetitivo (char nombre[], int finciclo) {
	int i;
	for (i = 1; i <= finciclo; i++){
		printf("%s \n",nombre);
	}
	
}

int main(int argc, char *argv[]) {
	
	char nombre[]="Mario";
	int finciclo;
	finciclo = 10;
	
	MensajeRepetitivo(nombre,finciclo);
	
	return 0;
}

