#include <stdio.h>
#include <stdlib.h>

void intercambiar (int *menor, int *mayor);
void mostrar_vector (int [],int ce);

int main()
{
    int vec[4] = {444,222,333,111};

    intercambiar(&vec[3],&vec[0]);
    mostrar_vector(vec,3);
    return 0;
}

void intercambiar(int *menor,int *mayor)
{
    int aux = *menor;
    *menor = *mayor;
    *mayor = aux;
}

void mostrar_vector(int *puntero, int ce)
{
    int i;
    printf("\n");
    for(i=0;i<4;i++)
    {
        printf("[%d]",*puntero);
        puntero++;
    }
    printf("\n");
}
