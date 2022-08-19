#include <stdio.h>
#include <stdlib.h>
//Busca el valor en orden desde la pos 0 hasta la pos n
int main()
{
    int array[10] = {1235,221,5234,5123,322,12351,2,45,12,10};
    int i,dato,pos;
    char band = 'F';

    printf("\n Ingrese el n%cmero a buscar\n",163);
    scanf("%d",&dato);

    i=0;
    while((band == 'F')&& (i<10))
    {
        if(array[i]==dato)
        {
            band='V';
            pos = i;
        }
        i++;
    }

    if(band=='F')
    {
        printf("El n%cmero no existe",163);
    }
    else
    {
        printf("El n%cmero existe y esta en la pos : %d",163,pos);
    }

    return 0;
}
