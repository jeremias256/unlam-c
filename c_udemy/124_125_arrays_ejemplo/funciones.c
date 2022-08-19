#include "header.h"

void datos_arreglo(int vec[])
{
    int i;

    for(i=0; i<5; i++)
    {
        printf("\nPosicion %d = %d \n",i+1,vec[i]);
    }
}

void llenar_arreglo(int vec[])
{
    int i;
    for (i=0;i<5;i++)
    {
        printf("Escribe el numero para el arreglo en la posicion %d \n",i+1);
        scanf("%d",&vec[i]);
    }
}

int sumar_elementos(int vec[])
{
    int i,sumatoria=0;

    for(i=0;i<5;i++)
    {
        sumatoria+=vec[i];
    }
    return sumatoria;
}

int multiplicar_elementos(int vec[])
{
    int i,producto=1;

    for(i=0;i<5;i++)
    {
        producto*=vec[i];
    }
    return producto;
}

int sumar_elementos_divisibles(int vec[])
{
    int i,sumatoria=0;

    for(i=0;i<5;i++)
    {
        if(vec[i]%3==0)
        {
            sumatoria+=vec[i];
        }
    }
    return sumatoria;
}

void multiplicar_por_tres(int vec[])
{
    int i;
    for(i=0;i<5;i++)
    {
        vec[i]=vec[i]*3;
    }
}
