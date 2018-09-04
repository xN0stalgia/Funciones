#include "funciones.h"
#include <stdio.h>

int getInt(char msj[],char msjE[],int rangoInf,int rangoSup)
{
    int numero;
    printf("%s",msj);
    scanf("%d",&numero);

    while(numero<rangoInf || numero>rangoSup)
    {
        printf("%s",msjE);
        scanf("%d",&numero);
    }
    return numero;

}
