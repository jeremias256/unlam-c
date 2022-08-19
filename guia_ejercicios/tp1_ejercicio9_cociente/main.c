#include "header.h"

int main()
{
    double a=10;
    float b;

    do
    {
        printf("Ingrese valor de b distinto a 0 :\n");
        scanf("%f",&b);
    }while(b == 0);

    funcion_cociente(a,b);

    //printf("Resultado del cociente es de : %d",cociente);

    return 0;
}
