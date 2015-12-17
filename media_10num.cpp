#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char **argv) {

	int numero; 
	int suma=0; 
	int orden=0;

	do {
		orden++;
		printf("Introduce el %i número: ", orden); 
		scanf(" %i",numero); 
		suma+=numero; 

	}while (orden < 10);


	printf("Media: ");
	printf(" %i \n", suma / 10); 


	return EXIT_SUCCESS;

}
