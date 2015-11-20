#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

   int origen,
       destino =0;  //Para que DESTINO esté vacio inicialmente

   printf("Número: ");
   scanf(" %i", &origen);

   destino *= 10;
   destino += origen % 10;
   origen /= 10;

   destino *= 10;
   destino += origen % 10;
   origen /= 10;

   destino *= 10;
   destino += origen % 10;
   origen /= 10;

   printf("%i\n", destino);

   return EXIT_SUCCESS;

}
