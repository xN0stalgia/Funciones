#include <stdio.h>
#include <stdlib.h>

/**3- Escribir un algoritmo que imprima los n�meros pares entre 100 y 20 a raz�n de 6 por
l�nea separados por 3 blancos. Es decir la salida del algoritmo deber�a ser:
100 98 96 94 92 90
88 86 84 82 80 78
�. etc �**/


int main()
{
    int matrizPares[6][3];
    int i;

    for(i=20; i < 100; i++)
    {
        if(i%2==0)
        {
            matrizPares[6][3]=i;
        }
    }

        for(i=20; i < 100; i++)
    {
       printf("%d",matrizPares[6][3]);
    }

    return 0;
}
