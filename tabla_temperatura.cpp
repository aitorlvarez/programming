//Tabla de equivalencias entre temperaturas en celsius y fahrenheit

#include <stdio.h>
#include <stdlib.h>

#define reset "\E[m"
#define negrita "\E[1m"
#define negritaquit "\E[22m"
#define cyan "\E[36m"


int main()
{
  int fahrenheit,  celsius;
  int lim_inf, lim_sup, incremento;

  lim_inf = 0;	/* limite inferior de temperaturas */
  lim_sup = 300;	/* limite superior de temperaturas */
  incremento = 20;	/* tamaño del incremento */

  fahrenheit = lim_inf;
  while (fahrenheit <= lim_sup) {  /*Mientras fahrenheit sea menor de 300*/
    celsius = 5 * (fahrenheit - 32) / 9;
    printf(cyan negrita "%d\t%d\n" reset, fahrenheit, celsius); /*Fahr columna izquierda-Celsius columna derecha*/
    fahrenheit = fahrenheit + incremento;
  }
}
