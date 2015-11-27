//Programa que te pide un número repetidamente cada vez que introduces uno y le das a ENTER
//Puedes meter la cantidad de números que quieras
//Cuando no quieras meter más, pones "0" y le das ENTER
//Entonces el programa te mostrará la suma total y la media aritmérica redondeada (sin decimales) de todos los números.
//NOVEDAD¡ Ahora tiene dos funciones nuevas:
//-Te muestra el resultado invertido de la suma del principio
//-Hace de conversor a binario, octal y hexadecimal, a partir del resultado original
//PENDIENTE: hacer que el conversor hexadecimal incluya las letras de las equivalencias a partir del 10
//PENDIENTE: arreglar inversion del numero en los conversores, dan el resultado correcto pero invertido

#include <stdio.h>
#include <stdlib.h>

#define reset "\E[m"
#define negrita "\E[1m"
#define negritaquit "\E[22m"
#define cursiva "\E[3m"
#define cursivaquit "\E[23m"           /*Algunos colores y atributos para animar el texto */
#define blanco "\E[37m"
#define cyan "\E[36m"
#define naranja "\E[35m"

int main(int argc, const char **argv) {

    int numero; /*variable de los numeros que se van metiendo*/

    int suma=0, /*Variable en la que se va acumulando la suma de los numeros introducidos*/
        contador= 0; /*Inicio del contador desde 0, cuenta la cantidad de numeros introducidos*/

    int copia_octal, copia_binario, copia_invertido, copia_hex; /*Copias de la variable SUMA para no alterar su valor original en las operaciones*/


    do {

        printf(naranja"Introduce los números: "blanco); /*Te pide un numero*/
        scanf(" %d",&numero); /*Escanea el numero introducido*/
        suma+=numero; /*Va acumulando el resultado en SUMA*/
        contador++; /*Avance del contador*/

    } while ( numero != 0 ); /*Pedirá y escaneará números hasta que se introduzca un CERO*/


    copia_octal=suma;
    copia_binario=suma;          /*Da el valor de SUMA a las copias, una vez que tiene el resultado como valor*/
    copia_hex=suma;
    copia_invertido=suma;

    printf(cyan negrita cursiva "Media aritmética redondeada: "cursivaquit);
    printf(naranja" %d\n", suma / (contador-1)); /*Le resto UNO al contador para que no tenga en cuenta el     CERO del final a la hora de hacer la media*/



    printf(cyan cursiva "Resultado de la suma: "cursivaquit);
    printf(naranja" %d\n", suma); /*Muestra el resultado de la suma total*/

    printf(cyan cursiva"Resultado invertido: "cursivaquit ); /*Muestra el valor de SUMA invertido, utilizando su respectiva copia*/
    do{
        printf(naranja"%d", copia_invertido%10);
        copia_invertido /=10;                   /*Bucle que se repite hasta que el valor de la variable sea 0*/
    }while (copia_invertido !=0);            /*INVIERTE el numero*/


    printf(" \n");

    printf(cyan cursiva "Resultado en binario: "cursivaquit); /*Muestra el valor de SUMA en binario, utilizando su respectiva copia*/

    do {
        printf(naranja" %d", copia_binario%2);
        copia_binario /=2;               /*Bucle que realiza lo mismo que el bucle anterior pero con base 2, binaria*/
    }while (copia_binario !=0);         /*Convierte RESULTADO de DECIMAL a BINARIO*/

    printf("\n");

    printf(cyan cursiva "Resultado en octal: "cursivaquit);   /*Muestra el valor de SUMA en octal, utilizando su respectiva copia*/

    do {
        printf(naranja " %d",copia_octal%8);
        copia_octal /=8;                 /*Bucle que realiza lo mismo que los bucles anteriores pero con base 8, octal*/
    }while (copia_octal !=0);       /*Convierte RESULTADO de DECIMAL a OCTAL*/

    printf("\n");

    printf(cyan cursiva "Resultado en hexadecimal: "cursivaquit);   /*Muestra el valor de SUMA en hexadecimal, utilizando su respectiva copia*/

    do {
        printf(naranja " %d",copia_hex%16);
        copia_hex /=16;                  /*Bucle que realiza lo mismo que los bucles anteriores pero con base 16, hexadecimal*/
    }while (copia_hex !=0);           /*Convierte RESULTADO de DECIMAL a HEXADECIMAL*/

    printf("\n"reset);

    return EXIT_SUCCESS;
}

