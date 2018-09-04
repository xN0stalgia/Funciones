#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
//0 y 18
int main()
{
    int num;

   num = getInt("Ingrese la edad entre 0-18: ","error esta fuera del rango reingrese: ",0,18);
   printf("la edad es: %d",num);

    return 0;
}
