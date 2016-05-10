#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char const *argv[]){

	int pila[N] = {742, 32, 5, 41, 3}; 
	int i;


printf("Numeros sin ordenar\n\n");

	for (int i = 0 ; i < N ; i++)
	printf ("%i\t", pila[i]);

printf("\n\n");

for (int i = 0; i < 4; i++)
            {
                for (int b = 0; b < 4 - i; b++)
                {
                    if (pila[b] > pila[b + 1])
                    {
                        int inter;
                        inter = pila[b];
                        pila[b] = pila[b + 1];
                        pila[b + 1] = inter;
                    }
                }
            }


printf("Numeros ordenados\n\n");
for (i=0 ; i<N ; i++)
	printf ("%i\t", pila[i]);

printf("\n\n");
return 0;

}




