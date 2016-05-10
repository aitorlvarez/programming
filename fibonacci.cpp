
#include<stdio.h>
#include<stdlib.h>

#define reset "\E[m"
#define negrita "\E[1m"
#define cyan "\E[36m"


int main()
{
   int i,n,A[100];
   
   printf("¿Hasta que término quieres? ");
   scanf("%i",&n);
   A[0]=0;A[1]=1;
  
   for(i=2;i<=n;i++)
      A[i]=A[i-1]+A[i-2];
 
printf("Sucesión de Fibonacci hasta el término %i:\n",n);
printf("\n");

   for(i=0;i<=n;i++)
   printf(cyan negrita"%i\t",A[i]);
printf(reset"\n\n");
 
  return EXIT_SUCCESS;
}
