#include <stdio.h>
#include <stdlib.h>

#define TAM 8

void mostrarVector (int *vec,int ce);
void intercambiar(int *izq, int *der);
int buscarMenor(int *vec, int desde, int hasta);

void ordernarPorBurbujeo(int *vec,int ce);
void ordernarPorSeleccion (int *vec, int ce);
void ordernarPorInsercion(int *vec, int ce);

int main()
{
    int vecDesordenado[] = {7,26,8,15,9,-1,999,2},
        seleccionOrdenamiento;

    puts("Vector antes de ordenar");
    mostrarVector(vecDesordenado,8);

    puts("Que metodo de ordenamiento quiere usar");
    //intercambios = 0.5 * ce^2 = 40.5
    //comparaciones = 0.5 * ce^2 = 40.5
    puts("1: Burbujeo");
    //intercambios = ce
    //comparaciones = ce^2
    puts("2: Seleccion");
    puts("3: Insercion");
    scanf("%d",&seleccionOrdenamiento);
    switch(seleccionOrdenamiento)
    {
        case 1:
            ordernarPorBurbujeo(vecDesordenado,TAM);
            puts("Vector ordenado");
            mostrarVector(vecDesordenado,TAM);
            break;
        case 2:
            ordernarPorSeleccion(vecDesordenado,TAM);
            puts("Vector ordenado");
            mostrarVector(vecDesordenado,TAM);
            break;
        case 3:
            ordernarPorInsercion(vecDesordenado,TAM);
            puts("Vector ordenado");
            mostrarVector(vecDesordenado,TAM);
            break;
    }


    return 0;
}

void mostrarVector(int *puntero, int ce)
{
    int i;
    printf("\n");
    for(i=0; i<ce; i++)
    {
        printf("[%d]",*puntero);
        puntero++;
    }
    printf("\n");
}

void intercambiar(int *izq,int *der )
{
    int aux = *izq;
    *izq = *der;
    *der = aux;
}

int buscarMenor(int *vec, int desde, int hasta)
{
    int min=desde,j;
    for(j = desde+1; j <= hasta; j++)
    {
        if(vec[j]<vec[min])
        {
            min=j;
        }
    }
    return min;
}

void ordernarPorBurbujeo(int *vec, int ce)//poco eficiente muchos movimientos
{
    int i=1, j, intercambios = 1;

    while(intercambios && i < ce)
    {
        intercambios = 0;
        for(j=0; j<ce-i; j++)
        {
            if(vec[j] > vec[j+1])
            {
                intercambiar(&vec[j+1],&vec[j]);
                intercambios = 1;
            }
        }
    }

}

void ordernarPorSeleccion (int *vec, int ce)
{
    int m,i;
    for(i=0; i<ce-1; i++)
    {
        m = buscarMenor(vec,i,ce);
        if(m!=i)
            intercambiar(&vec[i], &vec[m]);
    }
}

void ordernarPorInsercion(int *vec, int ce)
{
    int i,e_izq,e_der;

    for(i=1; i<ce; i++)
    {
        e_der = vec[i];
        e_izq = i-1;
        while(e_izq >=0 && e_der < vec[e_izq])
        {
            vec[e_izq+1]=vec[e_izq];
            e_izq--;
        }
        vec[e_izq+1]=e_der;
    }
}
