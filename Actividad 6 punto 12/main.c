#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
12- Programar una función que, dada una cadena y un carácter,
 retorne la subcadena que
comienza con dicho carácter o NULL en caso de que el caracter no exista
 en la cadena
**/

void EncontrarChar (char[],char);

int main()
{
    char palabra[20]="NESTOR";
    char caracter='T';

    EncontrarChar(palabra,caracter);

    return 0;
}

void EncontrarChar(char palabra[],char caracterBuscado)
{
    int tamCadena;
    int i;
    int flag=0;

    tamCadena=strlen(palabra);

    for(i=0;i<tamCadena-1;i++)
    {
       if(caracterBuscado==palabra[i])
       {
          printf("%s",&palabra[i]);
          flag=1;
       }
    }
    if(flag==0)
    {
      palabra=NULL;
      printf("%s",palabra);
    }
}
