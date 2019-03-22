#include <stdio.h>
#include <stdlib.h>
#define CANT_NUM 5
//void PidoNumeros(void);
int calcular_promedio(int acumulador,int cantidad,float* promedio);
int SolicitaNumeros_losPromedia(void);
int calcularMax_Min(int NumeroIngresado,int* numMax,int* numMin);

int main()
{
    SolicitaNumeros_losPromedia();

    return 0;
}

int SolicitaNumeros_losPromedia(void)
{
    int numeros;
    int acumulador=0;
    float promedio;
    int numMax;
    int numMin;
    for(int i=0;i<CANT_NUM;i++)
    {
        printf("ingrese numero (limite 5): ");
        scanf("%d",&numeros);
        acumulador+=numeros;
        if(calcularMax_Min(numeros,&numMax,&numMin))
        {
            printf("error");
            break;
        }
    }
    if(!(calcular_promedio(acumulador,CANT_NUM,&promedio)))
    {
        printf("el promedio es : %.2f\n",promedio);
    }else{
        printf("error");
    }
    return 0;
}

int calcular_promedio(int acumulador,int cantidad, float* promedio)///recibe puntero escribe en un espacio de memoria de otra funcion
{
    int retorno= -1;
    if(cantidad > 0 && promedio != NULL)
    {
        *promedio=(float)acumulador/cantidad;
        retorno=0;
    }
    return retorno;
}

int calcularMax_Min(int NumeroIngresado,int* numMax ,int* numMin)
{
    int retorno=-1;
    if(*numMax != NULL && *numMin != NULL){
        if(NumeroIngresado > *numMax)
        {
            *numMax=NumeroIngresado;
        }
        if(NumeroIngresado < *numMin)
        {
         *numMin=NumeroIngresado;
        }
        retorno =0;
    }
    return retorno;
}

