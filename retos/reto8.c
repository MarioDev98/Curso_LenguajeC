#include <stdio.h>

int main(int argc, char *argv[]) {
	
/*	Un alumno tiene 3 materias por lo cual tendrá 3 calificaciones finales que son 10 para matemáticas, */
/*	8 para biología, y 5 para historia, si el promedio es entre 10 y 9 que le diga que felicidades, */
/*	si tiene mayor de 8 y menor que 9 que le diga que es buen alumno, */
/*	si tiene 7 pero menos que 8 le diga que se tiene que esforzar */
/*	y si tiene menos de 7 que no pasara el año, además quisiera saber cuales de las 3 calificaciones es la mas alta, */
/*	pero si las 3 calificaciones son iguales que le diga que todas su calificaciones son iguales */
/*	y si son 0 que tiene que mejorar bastante.*/
	
			
	float calif1,calif2,calif3,suma,promedio;

	calif1 = 0;
	calif2 = 0;
	calif3 = 0;
	
	suma = calif1 + calif2 + calif3;
	
	promedio = suma / 3;
	printf ("promedio %f ", promedio);	
	if(promedio >= 9 && promedio <=10){
		printf ("\nFelicidades");
	}
	else if(promedio >= 8 && promedio < 9){
		printf ("\nEres un buen alumno ");
	}
	else if (promedio >= 7 && promedio < 8){
		printf ("\nTienes que esforzarte");
	}
	else if (promedio < 7){
		printf ("\nNo pasaras el año ");
	}
	
	
	
	
	return 0;
}

	funciones con retorno y funciones sin retorno



