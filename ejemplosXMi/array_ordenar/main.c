#include <stdio.h>
#include <stdlib.h>

void mostrar_vector (int *vec,int ce);
void intercambio(int *menor, int *mayor);
int buscar_menor(int *vec, int desde, int hasta);
void ordernar_por_burbujeo(int *vec,int ce);
void ordernar_por_seleccion (int *vec, int ce);
void ordernar_por_insercion(int *vec, int ce);

int main()
{
    int vec[]={7,26,8,15,9,-1,999,2};

    printf("Vector desordenado\n");
    mostrar_vector(vec,8);

    printf("\n");

    //ordernar_por_burbujeo(vec,8);
    //ordernar_por_seleccion(vec,8);
    ordernar_por_insercion(vec,8);

    printf("Vector ordenado\n");
    mostrar_vector(vec,8);

    return 0;
}

void mostrar_vector(int *puntero, int ce)
{
    int i;
    printf("\n");
    for(i=0;i<ce;i++)
    {
        printf("[%d]",*puntero);
        puntero++;
    }
    printf("\n");
}

void intercambiar(int *menor,int *mayor )
{
    int aux = *menor;
    *menor = *mayor;
    *mayor = aux;
}

int buscar_menor(int *vec, int desde, int hasta)
{
    /*int i,pos_min=menor_pos,min=*vec;
    for(i=1; i<ce-1; i++)
    {
        if(min > *(vec+1))
        {
            min = *(vec+1);
            pos_min = i;
        }
        vec++;
    }*/
    int min=desde,j;
    for(j=desde+1;j<=hasta;j++)
    {
        if(vec[j]<vec[min])
        {
            min=j;
        }
    }
    return min;
}

void ordernar_por_burbujeo(int *vec, int ce)//poco eficiente muchos movimientos
{
    int i=1, j, intercambios = 1;

    while(intercambios && i < ce)
    {
        intercambios = 0;
        for(j=0; j<ce-i;j++)
        {
            if(vec[j] > vec[j+1])
            {
                intercambiar(&vec[j+1],&vec[j]);
                intercambios = 1;
            }
        }
    }

}

void ordernar_por_seleccion (int *vec, int ce)
{
    int m,i;
    for(i=0; i<ce-1; i++)
    {
        m = buscar_menor(vec,i,ce);
        if(m!=i)
        {
            intercambiar(&vec[i], &vec[m]);
        }
    }
}

void ordernar_por_insercion(int *vec, int ce)
{
    int i,e_izq,e_der;

    for(i=1;i<ce;i++)
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
