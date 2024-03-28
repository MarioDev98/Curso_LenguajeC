#include <stdio.h>

int main(int argc, char *argv[]) {

/*	3. */
		
/*Con lenguaje c quiero que saquen el promedio de 4 calificaciones, las cuales serán 10,9,7 y 5, */
/*si el alumno tiene promedio entre 10 y 9 imprimir la letra A, si el alumno tiene promedio de 8 sea la letra b, */
/*si obtiene un promedio de 7 la letra c y si obtiene un promedio de 7 hacia abajo imprimir la letra f,  */
/*pero también quiero validar si el promedio es cero imprimir que el valor es nulo */
/*y si el promedio es un numero negativo que imprima que esa no es una calificación no valida*/

	float c1,c2,c3,c4,suma,promedio;
	
	c1 = 8;
	c2 = 8;
	c3 = 8;
	c4 = 8;
	suma = c1 + c2 + c3 + c4;
	promedio = suma / 4;
	
/*	printf ("Suma %.2f",suma);*/
/*	printf ("\npromedio %.2f",promedio);*/
	
	if (promedio >=9 && promedio<10){
		printf ("A");
	}
	else if(promedio>=8 && promedio <9){
		printf ("B");
	}
	else if (promedio>7 && promedio <8){
		printf ("C");
	}
	else if(promedio == 0){
		printf("El valor es nulo");
	}
	else if (promedio < 0){
		printf ("No es una calificación valida");
	}
	
	return 0;
}

