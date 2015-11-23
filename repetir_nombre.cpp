#include <stdio.h>
#include <stdlib.h>

#define BLANCO "\x1b[37m"
#define CYAN "\x1b[36m"
#define NARANJA "\x1b[35m"
#define RESET "\x1b[0m"

int main(int argc, const char **argv)
{
    int veces,i;  //Definimos como "i" un contador y como "veces" las repeticiones que tendrán lugar
    char nombre [10];

    printf(BLANCO"¿Como te llamas? "CYAN);
    scanf("%s",nombre);
    printf(BLANCO"¿Cúantas veces quieres que escriba tu nombre? "CYAN);
    scanf("%i" RESET,&veces); 
    
    i=1;    //Empieza el contador(contando la primera vez)
    
    do{
        printf(NARANJA "%s\n" RESET,nombre); //Escribe el nombre
        i++;
    }
    while(i<=veces); //Repetirá el nombre hasta llegar al número de veces solicitadas

    return EXIT_SUCCESS;
}
