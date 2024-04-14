#include <stdio.h>

int NumeroMayor (int n1,int n2, int n3){
	int nmayor;
	nmayor = n1;
	
	if (n2 > nmayor){
		nmayor = n2;
	}
	if (n3 > nmayor){
		nmayor = n3;
	}
	
	
	return nmayor;
}


int main(int argc, char *argv[]) {
	
	int numero1,numero2,numero3,mayor;
	
	numero1 = 2;
	numero2 = 1;
	numero3 = 5;
	
	mayor = NumeroMayor(numero1,numero2,numero3);
	
	printf ("El numero mayor es %d ", mayor);
	
	return 0;
}

