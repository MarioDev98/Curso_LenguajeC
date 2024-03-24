#include <stdio.h>

int main(int argc, char *argv[]) {
		
/*	2.	Calcula con lenguaje c cuando me gaste de gasolina por litro por cada metro recorrido, */
/*		si mi automóvil recorrido 1.5 kilómetros y me gaste de gasolina 40 litros, */
/*		una vez sacado el consumo de gasolina por metro */
/*		quiero saber cuando me llevare de gasolina al recorrer 2000 metros, */
/*		imprime en pantalla el valor de gasolina por metro */
/*		y luego el total de gasolina que me llevare al recorrer 2000 metros.*/
		
/*		operaciones  --- ciclos, ni condiciones*/

	float recorrido,litros, nuevorecorrido, gast; 
	recorrido = 1500; 
	litros = recorrido / 40; 
	nuevorecorrido = 2000 * litros;  
	
	printf("litro %.2f ", litros);
	printf ("el total de gasolina por 2000 metos es de %.2f ", nuevorecorrido);
		
		
		
	return 0;
}

