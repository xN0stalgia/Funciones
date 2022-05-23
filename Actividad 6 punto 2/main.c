#include <stdio.h>
#include <stdlib.h>
/**2-Codificar en C un programa que lea 20 caracteres indique cuántas "a" se ingresaron, cuantas
"e”,” i”, “o”, “u"**/

int main()
{
    char vec[21];
    int contadorA,contadorE,contadorI,contadorO,contadorU;

    contadorA=0;
    contadorE=0;
    contadorI=0;
    contadorO=0;
    contadorU=0;

    for(int i=0;i<20;i++)
    {
        printf("\nIngrese un caracter: ");
        scanf("%s",&vec[i]);
    }

      for(int i=0;i<20;i++)
    {
        if(vec[i]=='a')
        {
            contadorA=contadorA+1;
        }
        if(vec[i]=='e')
        {
            contadorE=contadorE+1;
        }
        if(vec[i]=='i')
        {
            contadorI=contadorI+1;
        }
        if(vec[i]=='o')
        {
            contadorO=contadorO+1;
        }
        if(vec[i]=='u')
        {
            contadorU=contadorU+1;
        }
    }

    printf("\ncantidad de A's: %d",contadorA);
    printf("\ncantidad de E's: %d",contadorE);
    printf("\ncantidad de I's: %d",contadorI);
    printf("\ncantidad de O's: %d",contadorO);
    printf("\ncantidad de U's: %d",contadorU);


    return 0;
}
