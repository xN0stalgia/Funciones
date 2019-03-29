#include <stdio.h>
#include <stdlib.h>

int getInt(char *mensaje,char *mensajeError,int numMin,int numMax,int reintentos, int* resultado);
int getFloat(char *mensaje,char *mensajeError,float numMin,float numMax,int reintentos, float* resultado);
int getChar(char *mensaje,char *mensajeError,int numMin,int numMax,int reintentos, char* resultado);
int isValidInt(int numero,int numMax,int numMin);///las funciones de validacion devuelven verdadero(1) o falso(0)
int isValidFloat(float numero,float numMax, float numMin);
int isValidChar(char numero,int numMax, int numMin);

int main()
{
    int numeroEntero;
    float numeroFlotante;
    char letra;
    getInt("La edad debe ser entre 0-18 ingrese: ","error\n",0,18,2,&numeroEntero);
    getFloat("ingrese un numero decimal entre 0-12.5: ","error\n",0,12.6,2,&numeroFlotante);
    getChar("Ingrese una letra entre a-z: ","error\n",96,255,2,&letra);
    printf("La edad ingresada es: %d\n",numeroEntero);
    printf("El decimal ingresado es: %.2f\n",numeroFlotante);
    printf("La letra ingresadad es: %c",letra);
    return 0;
}


int getInt(char *mensaje,char *mensajeError,int numMin,int numMax,int reintentos,int* resultado)
{
    int retorno = -1;
    int buffer;
    if(mensaje != NULL && mensajeError != NULL && resultado != NULL && numMax >= numMin && reintentos>=0)
    {
     for(int i=0; i<=reintentos; i++)
      {
        printf("%s",mensaje);
        scanf("%d",&buffer);
       if(isValidInt(buffer,numMax,numMin))
        {
          *resultado = buffer;
          retorno=0;
          break;
        }
        else
            {
               printf("%s",mensajeError);
            }
        }
    }
    return retorno;
}

int isValidInt(int numero,int numMax, int numMin)
{
    if(numero >= numMin && numero <= numMax)
    {
       return 1;
    }
        return 0;

}

int isValidFloat(float numero,float numMax, float numMin)
{
    if(numero >= numMin && numero <= numMax)
    {
       return 1;
    }
        return 0;
}


int isValidChar(char numero,int numMax, int numMin)
{
    if(numero >= numMin && numero <= numMax)
    {
       return 1;
    }
        return 0;
}

int getFloat(char *mensaje,char *mensajeError,float numMin,float numMax,int reintentos, float* resultado)
{
    int retorno= -1;
    float buffer;
    if(mensaje != NULL && mensajeError != NULL && resultado != NULL && numMax>=numMin && reintentos >=0)
    {
        for(int i=0;i<=reintentos;i++)
        {
            printf("%s",mensaje);
            scanf("%f",&buffer);
            if(isValidFloat(buffer,numMax,numMin))
            {
                *resultado=buffer;
                retorno=0;
                break;
            }
            else
            {
                printf("%s",mensajeError);
            }
        }
    }
    return retorno;
}

int getChar(char *mensaje,char *mensajeError,int numMin,int numMax,int reintentos, char* resultado)
{
    char buffer;
    int retorno=-1;
    if(mensaje != NULL && mensajeError != NULL && resultado != NULL && numMax>=numMin && reintentos >=0)
    {
        for(int i=0;i<=reintentos;i++)
        {
            printf("%s",mensaje);

            scanf("%c",&buffer);
            if(isValidChar(buffer,numMax,numMin))
            {
              *resultado=buffer;
              retorno=0;
              break;
            }
            else{

                printf("%s",mensajeError);
            }
        }
    }
    return retorno;
}


/**do{
      {
        printf("%s",mensaje);
        scanf("%d",&buffer);
       if(isValidInt(buffer,numMax,numMin))
        {
          *resultado = buffer;
          retorno=0;
          break;
        }
        else
            {
               printf("%s",mensajeError);
            }
        }
        reintentos --;
        }while(reintentos >= 0);*/


