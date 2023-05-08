#include <stdio.h>
#include <stdlib.h>

#include "ejercicio-2.h"


int main()
{
    mensaje();
    int m=5, n=4;
    double resultado;

    do
    {
        puts("Ingrese dos numeros positivos para calcular su combinatoria");
        puts("Valor de : M");
        scanf("%d",&m);
        puts("Valor de : N");
        scanf("%d",&n);
        if(m<n)
            puts("M debe ser mayor a N");
        if(m<0 || n<0)
            puts("M y N deben ser positivos");

    }while(m<n || n<0);

    resultado = combinatoria(m,n);
    printf("El resultado de la combinatoria es %f", resultado);

    return 0;
}
