#include <stdio.h>
#include <stdlib.h>
/**4- Hacer un algoritmo que imprima el mayor y el menor de una serie de 5 números que iremos
introduciendo por teclado.*/


int main()
{
    int v[6];
    int max,i,min;


   for(i=0;i<5;i++)
   {
       printf("\nIngrese un numero: ");
       scanf("%d",&v[i]);
   }

   max=v[0];
   min=v[0];

     for(i=0;i<5;i++)
   {
      if(max < v[i])
      {
          max=v[i];
      }
        if(min > v[i])
      {
          min=v[i];
      }
   }

   system("cls");
   printf("\nEl numero maximo de esta serie es: %d",max);
   printf("\nEl numero minimo de esta serie es: %d",min);
    return 0;
}
