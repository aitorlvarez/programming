#include <stdio.h>
#include <stdlib.h>

#define N 5   

int main(int argc, char const *argv[]){

	int pila[N] = {742, 32, 5, 41, 3};   //Definir el array
	int i;


printf("Numeros sin ordenar\n\n");

	for (int i = 0 ; i < N ; i++)     //Imprimir los números originales
	printf ("%i\t", pila[i]);

printf("\n\n");

for (int i = 0; i < 4; i++)
            {
                for (int b = 0; b < 4 - i; b++)                   
                {
                    if (pila[b] > pila[b + 1])             //Comparar una celda con la siguiente (celda1, celda2)
                    {
                        int inter;                        
                        inter = pila[b];                //Guardar valor de celda1 en una variable intermedia
                        pila[b] = pila[b + 1];          //Poner en celda1 el valor de celda2
                        pila[b + 1] = inter;            //Poner en celda2 el valor de la variable intermedia
                    }
                }
            }


printf("Numeros ordenados\n\n");
for (i=0 ; i<N ; i++)                 //Imprimir los números ordenados
	printf ("%i\t", pila[i]);

printf("\n\n");
return 0;

}




