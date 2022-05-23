#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**14- Escriba un programa que inserte un carácter en una determinada posición de una cadena
ingresada por el usuario.**/

int main()
{
    char caracterInsert='c';
    char cadenaIngresada[21];
    int i=0;
    int tamCadena;
    int posicionCaracter;


    printf("Ingrese una palabra: ");
    scanf("%s",cadenaIngresada);


//    printf("Ingrese el caracter a añadir: ");
  //  scanf("%c",&caracterInsert);

    tamCadena=strlen(cadenaIngresada);
    printf("\n");

    printf("En que posicion de la cadena?: ");
    scanf("%d",&posicionCaracter);

    printf("su palabra ingresada: %s",cadenaIngresada);
    printf("\n");
    for(i=0;i<tamCadena-1;i++)
    {
        if(cadenaIngresada[posicionCaracter]==cadenaIngresada[i])
        {
            cadenaIngresada[i]=caracterInsert;
        }
    }

    //system("cls");
    printf("%s",cadenaIngresada);
    return 0;
}
