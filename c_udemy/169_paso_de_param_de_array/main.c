#include <stdio.h>
#include <stdlib.h>

// Recibo un array y lo llena
void llenarArray(int *vec, int dimension);

int main()
{
    int miVector[5];
    int i;
    //pasamos  vector y dimension
    llenarArray(miVector,5);

    // los array por defecto se hacen con paso de parametros por
    // referencia, esto permite editar desde otra funcion

    for(i=0; i<5; i++)
    {
        printf("\n %d", miVector[i]);
    }

    return 0;
}

void llenarArray(int *puntero, int dimension)
{
    int *ult = puntero + (dimension-1);

    for(int *i=puntero; i<=ult; i++)
    {
        printf("\n valor de [%d] del array, ",i);
        scanf("%d",puntero); //*puntero MAL cotenido ?  &puntero MAL dir de la dir
        puntero++;
    }
}
