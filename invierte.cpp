#include <stdio.h>
#include <stdlib.h>

#define BLANCO "\x1b[37m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"

int main(int argc, const char **argv){

    int origen,
        destino =0;  //Para que DESTINO esté vacio inicialmente

    printf(BLANCO "Número: ");
    scanf(" %i", &origen);

    do {
        destino *= 10;
        destino += origen % 10;   //Repite esa acción hasta que origen=0
        origen /= 10;
    } while ( origen != 0);   //Permite números de cifras largas

    printf("Si le das la vuelta sería: \n");
    printf(CYAN "%i\n" RESET, destino);

    return EXIT_SUCCESS;

}
