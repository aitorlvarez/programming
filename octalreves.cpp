#include <stdio.h>
#include <stdlib.h>

#define BLANCO "\x1b[37m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"
#define BASE 8

int main(int argc, const char **argv){

    int entrada;

    printf(BLANCO"Introduce un número entre 0 y 999: ");

    scanf(" %i", &entrada);

    printf("En octal y dado la vuelta sería: \n");
    printf(CYAN "%i", entrada % BASE);

    entrada /= BASE;

    printf("%i", entrada % BASE);

    entrada /= BASE;

    printf("%i" RESET, entrada % BASE);

    printf("\n");


    return EXIT_SUCCESS;
}

