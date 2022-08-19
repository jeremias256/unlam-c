#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int array[4] = {22,23,25,26};
    int array2[8];
    int array3[] = {23,12,56,9};

    printf("Mostrar array pos a pos\n");
    printf("Primer valor %d\n",array[0]);
    printf("Primer valor %d\n",array[1]);
    printf("Primer valor %d\n",array[2]);

    array[0] = 322;

    printf("Nuevo primer valor %d\n",array[0]);

    printf("Recorrer el array mediante for\n");

    for(i=0;i<4;i++)
    {
        printf("Posicion %i contenido %d\n",i,array[i]);
    }

    return 0;
}
