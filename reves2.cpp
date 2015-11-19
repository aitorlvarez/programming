#include <stdio.h>
#include <stdlib.h>

#define ROJO     "\x1b[31m"
#define VERDE   "\x1b[32m"
#define AMARILLO  "\x1b[33m"
#define AZUL    "\x1b[34m"            //Defino colores para animarlo un poco
#define NARANJA "\x1b[35m"            //Y ahorrar poner luego el código de cada uno
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"
#define BLANCO  "\x1b[37m"

int main(int argc, const char **argv){

    int numero;

    printf(NARANJA "Introduce un número entre 0 y 999: " ROJO);   //Pide el número
    scanf(" %i", &numero);

    printf(BLANCO "Si le das la vuelta sería: \n");
    printf(CYAN " %i" RESET, numero % 10); //Imprime el último dígito

    numero /= 10; //Desplaza todos los dígitos una posición hacia la dcha

    printf(CYAN "%i" RESET, numero % 10); //Imprime el último dígito

    numero /= 10; //Desplaza todos los dígitos una posición hacia la dcha

    printf(CYAN "%i" RESET, numero % 10); //Imprime el último dígito

    printf("\n");

    return EXIT_SUCCESS;
}

