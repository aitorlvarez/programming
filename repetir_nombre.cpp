#include <stdio.h>
#include <stdlib.h>

#define BLANCO "\x1b[37m"
#define CYAN "\x1b[36m"
#define NARANJA "\x1b[35m"
#define RESET "\x1b[0m"

int main(int argc, const char **argv)
{
    int i,veces,a;
    char nombre [10];

    printf(BLANCO"¿Como te llamas? "CYAN);
    scanf("%s",&nombre);
    printf(BLANCO"¿Cúantas veces quieres que escriba tu nombre? "CYAN);
    scanf("%i" RESET,&veces);

    a=0;
    i=1;
    do{
        printf(NARANJA "%s\n" RESET,nombre);
        a=a+i;
        i=i+1;
    }
    while(i<=veces);

    return EXIT_SUCCESS;
}
