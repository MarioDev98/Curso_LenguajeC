#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i,j;
	
	for (i=1; i<=10; i++){
		/*printf("%d ",i);*/
		printf ("\nTabla de multiplicar: %d" , i);
		// 10
		for (j=1; j<=10; j++ ) {
			// 1 2 3 4 5 6 7 8 9 10
			
			printf("\n%d x %d = %d",i,j,i*j);
			
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}

