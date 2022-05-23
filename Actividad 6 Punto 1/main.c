#include <stdio.h>
#include <stdlib.h>
/**1- Leer sucesivamente de teclado, hasta que aparezca un número comprendido entre 1 y 5.
Desarrollar el algoritmo usando la función scanf ( ).
**/



int main()
{
    int numeroIngresado;

    printf("Ingrese un numero entre 1 y 5: ");
    scanf("%d",&numeroIngresado);

    while(numeroIngresado < 1 || numeroIngresado > 5)
    {
        printf("\nError Reingrese el numero: ");
        scanf("%d",&numeroIngresado);
    }
    printf("\nEl numero ingresado fue: %d",numeroIngresado);
    return 0;
}
