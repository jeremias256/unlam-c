#include <stdio.h>
#include <stdlib.h>

void imprimir_vector(int *vec, int ce);
void cargar_vector(int *p, int ce);

int main()
{
    int vec[10], ce = 5;

    cargar_vector(vec, ce);
    imprimir_vector(vec, ce);

    return 0;
}
void cargar_vector(int *puntero_vec, int ce)
{
    int i;

    printf("Cargar %d datos: ",ce);
    for(i=0;i<ce ;i++)
    {
        scanf("%d",puntero_vec);
        puntero_vec++;
    }
}

void imprimir_vector(int *puntero_vec, int ce)
{
    int i;
    for(i=0;i<ce;i++)
    {
        printf("\n Posici%cn %d contenido %d",162,i,*puntero_vec);
        puntero_vec++;
    }
}
