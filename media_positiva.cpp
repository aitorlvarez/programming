#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv)

{

	int inicial,
	    numero;

	int suma=0,
	    contador= 0; 

	printf("Introduce un número: ");
	scanf("%i", &inicial);
	suma+=inicial;

	do {

		printf("Introduce otro número: ");
		scanf(" %i",&numero);
		if(numero<=0){
			suma+=numero;
			contador++;
		}

	} while ( numero >= 0 ); 



	printf("Media redondeada: %i\n", suma /     (contador));


	return EXIT_SUCCESS;
}

