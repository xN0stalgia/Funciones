#include <stdio.h>
#include <stdlib.h>


int getInt(int *valor,char msj[],char msjE[],int rangoInf,int rangoSup,int intentos);

int main()
{
    int dato;

    printf(getInt(&dato,"ingrese edad laboral 18-65","error esta fuera del rango reingrese: ",18,65,3));
    return 0;
}


int getInt(int *valor,char msj[],char msjE[],int intentos,int rangoInf,int rangoSup)
{
    int flag=0;

    printf("%s",msj);
    scanf("%d",valor);

    while(intentos>0)
    {
        if(*valor < rangoInf || *valor >rangoSup)
        {
            printf("%s",msjE);
            scanf("%d",valor);
            intentos--;
        }
        else
        {
            break;
        }
    }
    return flag;

}
