#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
/*	con ciclo do while y switch hacer lo siguiente*/
/*	como primera opcion sumar los pares donde un numero sera mi inicio y otro el final*/
/*	esos numeros los establezco yo como inicializacion, como segunda opcion*/
/*	establacer el pago de una persona, si por 8 horas gana 227 cuanto ganara a la semana*/
/*	si cada dia trabaja 7 horas, desglozar salario por hora, por 7 horas y el total por semana */
/*	(7 dias)*/
/*	y como tercera opcion salir*/
	
	int opcionmenu,iniciociclo,finciclo,sumaparesciclo;
	iniciociclo = 3;
	finciclo = 13;
	sumaparesciclo = 0;
	
	float salarioinicial,salario8horas,salarioxhora,salarioxdia, salarioxsemana;
	salarioinicial= 227;
	salario8horas = 8;
	salarioxhora =0;
	salarioxdia=0;
	salarioxsemana=0;
	do {
		printf ("\n\n1. suma de pares de un ciclo\n");
		printf ("2. Salarios\n");
		printf ("3. Salir\n");
		printf ("********************\n");
		scanf ("%d",&opcionmenu);
		system("cls");
		switch (opcionmenu){
		case 1:
				while (iniciociclo <= finciclo) {
					printf ("%d ",iniciociclo);
					if (iniciociclo % 2 == 0){
						sumaparesciclo = sumaparesciclo + iniciociclo;
					}
					iniciociclo = iniciociclo + 1;
				}
				printf ("\nLa suma de los pares es %d ",sumaparesciclo);
			break;
			
		case 2:
			// 0 = 227/ 8
			salarioxhora = salarioinicial / salario8horas;
			printf ("\nTu salario por hora es de %.2f ", salarioxhora);
			
			salarioxdia = salarioxhora * 7;
			printf ("\nTu salario por 7 horas al dia es de %.2f",salarioxdia);
			
			salarioxsemana = salarioxdia * 7;
			printf ("\ntu salario por 7 dias si trabajas 7 horas al dia es de %.2f",salarioxsemana);
			
			break;
		
		case 3:
			printf ("\n saliendo del programa .....");
			break;
		default:
			printf ("Esa opcion no es valida");
		}
		
	} while(opcionmenu != 3);
	
	
	return 0;
}

