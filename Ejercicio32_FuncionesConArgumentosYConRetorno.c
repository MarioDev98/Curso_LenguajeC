#include <stdio.h>
  
float areacirculo(float radio){
	const float pi = 3.14;
	return pi * radio * radio;
}


int main(int argc, char *argv[]) {
	
	float radio;
	
	/*pi = 3.14;*/
	radio = 3.0;
	
	float resultadoarea;
	
	resultadoarea = areacirculo(radio);
	/*areacirculo(pi,radio);*/
	printf("El area del circulo es %.2f",resultadoarea);
	return 0;
}

