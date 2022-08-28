#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10]={100,200,300,400,500,600,700,800,900,1000};
    int i,*puntero;
    puntero=array;



    printf("Contenido de la pos 1 :%d\n",*(puntero+1)); //200
    printf("Contenido de la pos 1 :%d\n",array[1]); //200

    printf("Direccion de comienzo :%p\n",array);
    printf("Direccion de comienzo :%p\n",puntero+1); //suma 4,int=4


    for(i=0;i<10;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
