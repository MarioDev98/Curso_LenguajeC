#include <stdio.h>



void imprimirarreglo(int arreglo[]){
	for(int i =0; i <=3; i++){
		/*printf("%d",i);*/
		printf("Elementos del arreglo %d\n",arreglo[i]);
	}
}

void sumararreglo(int arreglo2[] ){
	int suma=0;
	for(int i =0; i <=3; i++){
		suma =suma + arreglo2[i];
	}
	printf("La suma de los elementos del arreglo es %d ",suma);
}

void sumaelementosdos(int arreglo3[]){
	for(int i =0; i <=3; i++){
		arreglo3[i] = arreglo3[i] + 2;
		printf("Elementos del arreglo modificados %d\n",arreglo3[i]);
	}
}

void salir(){
		printf("Saliendo....");
	}

void mensajedefault(){
	printf("Esa opcion no esta en el menu");
}

int main(int argc, char *argv[]) {
	
	int arregloincial[4]={1,2,3,4};
	int opcion;
	
	
	do{
		
		printf("\n--------------------\n");
		printf("1 Mostrar elementos del arreglo\n");
		printf("2 Sumar todos los elementos del arreglo\n");
		printf("3 A cada elemento del arreglo sumarle 2\n");
		printf("4 Salir del programa\n");
		printf("--------------------\n");
		scanf("%d",&opcion);
		
		switch(opcion){
		case 1:
			imprimirarreglo(arregloincial);
			break;
		case 2:
			sumararreglo(arregloincial);
			break;
		case 3:
			sumaelementosdos(arregloincial);
			break;
		case 4: 
			salir();
			break;
		default:
			mensajedefault();
		}
		
		
	} while(opcion!=4);
	
	
	
	return 0;
}

