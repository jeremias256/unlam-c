#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5]={322,323,324,325,326};
    int *puntero_a_array = &array[0];

    // Con esto podemos desplazarnos por el array sin necesidad de conocer
    // su dimension

    int i;
    for(i=0;i<5;i++)
    {
        printf("Posici%cn %d \t contenido %d \n",162,i,*puntero_a_array);
        i++;
        puntero_a_array++; // Recorre el array por las posiciones
    }

    return 0;
}
