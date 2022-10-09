#include "header.h"

//era bool pero si tengo mas de 2 return y quiero indicar la razon
//necesito retornar INT
int vecInsertarEnOrden( int *vec, int *cec, int capacidad, int dato )
{
    //checkear si hay espacio en el vector
    //cantidad de elementos cargados es igual a la capacidad?

    if(*cec == capacidad)
        return VEC_LLENO;

    int i=0;
    while( dato> vec[i] && i<*cec)
        i++;

    if(dato== vec[i])
        return DUPLICADO;

    for(int j= *cec-1; j>=i; j--)
        vec[j+1] = vec[j];

    vec[i] = dato;
    (*cec)++;

    return TODO_OK;
}

void mostrarVector(int *vec, int cec)
{
    for(int i=0; i < cec; i++)
        printf("%d ", vec[i]);

    putchar('\n');
}

bool vecEliminarOrd(int *vec, int *cec, int dato)
{
    int i=0,j;
    while(i < *cec && dato > vec[i])
        i++;

    if(i == *cec || dato < vec[i])
        return false;

    for(j = i; j <= *cec-2; j++)
        vec[j] = vec[j+1];

    (*cec)--;

    return true;
}
