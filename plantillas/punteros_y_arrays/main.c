#include <stdio.h>
#include <stdlib.h>
 void imprimirVector (int *vec ,int tam );
 void cargarVector (int *p,int tam );

int main()
{
    int vec[10];
    int tam=5;
    cargarVector(vec,tam);
    imprimirVector(vec,tam);

    return 0;
}

void cargarVector(int *punteroVec, int tam)
{
    int i=0;
    printf("Cargar %d datos: ",tam);
    for(i=0;i<tam;i++)
    {
        scanf("%d",punteroVec);
        punteroVec++;
    }
}

void imprimirVector(int *vec, int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        //printf("%d",vec[i];)

        printf("\n %d",*vec);
        vec++;//aritmerica  de punteros.
    }
}
