#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**15- Cargar un vector con los nombres de los días de la semana, luego ingresar un número (validar
que se encuentre entre 1 y 7, mostrando un mensaje de error si ello no ocurre) y mostrar que día
de la semana le corresponde a ese número (1: domingo, 7: sábado)**/


int main()

{


   char *vectorSemana[]={"Domingo","Lunes","Martes","Miercoles","jueves","Viernes"};
   int numeroValidar;
   int tam;
   tam=sizeof(vectorSemana)/sizeof(char *);
    for(int i=0;i<tam;i++)
    {
        printf("%s\n",vectorSemana[i]);
    }
    printf("\n");
   do
   {
        printf("Ingrese un numero de la semana (Domingo 1... etc): ");
        scanf("%d",&numeroValidar);
         if(numeroValidar <1 || numeroValidar > 7)
         {
             printf("Error numero debe ser entre 1 y 7");
         }

        switch(numeroValidar)
           {
           case 1:
            *vectorSemana="Domingo";
             printf("%s",*vectorSemana);
               exit(-1);
            break;
            case 2:
                *vectorSemana="Lunes";
                 printf("%s",*vectorSemana);
               exit(-1);
            break;
            case 3:
                *vectorSemana="Martes";
                 printf("%s",*vectorSemana);
               exit(-1);
            break;
            case 4:
                *vectorSemana="Miercoles";
                 printf("%s",*vectorSemana);
               exit(-1);
            break;
            case 5:
              *vectorSemana="Viernes";
               printf("%s",*vectorSemana);
               exit(-1);
            break;
            case 6:
               *vectorSemana="Sabado";
               printf("%s",*vectorSemana);
               exit(-1);
            break;
           }

   }while(numeroValidar>=1 && numeroValidar <=7);

    return 0;
}
