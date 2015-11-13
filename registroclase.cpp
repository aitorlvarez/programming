//Programa para introducir y almacenar nombre y NIA de alumnos

#include <stdio.h>
#include <stdlib.h>
struct registro{
    char nombre[20];
    char NIA[11];
}alum;

int main() {

    printf("Nombre: ");
    gets (alum.nombre);

    printf ("NIA: ");
    gets (alum.NIA);

    FILE * fp;

    fp=fopen("archivo.txt", "a"); //Los datos se almacenan en archivos.txt
    //No se reinicia el archivo, los datos se van añadiendo al final
    if (fp==NULL) {
        printf("No pudo crearse correctamente");

    }

    fwrite(&alum,sizeof(alum),1,fp);

    printf("Datos guardados...");

    fclose(fp);

    return EXIT_SUCCESS;
}
