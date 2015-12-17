#include <stdio.h>

int main(){

	int size,fila,col;


	printf("tamaño del cuadrado: ");
	scanf("%d",&size);
	for(col=1;col<=size;col++){

		printf("*");

	}
	printf("\n");
	for(fila=2;fila<size;fila++){

		printf("*");

		for(col=2;col<size;col++){

			printf(" ");

		}
		printf("*");
		printf("\n");

	}

	for(col=1;col<=size;col++){

		printf("*");

	}
	printf("\n");

}
