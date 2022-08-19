#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dato = 5, *puntero;
    puntero = &dato;
    int vec[5] = {1,2,3,4,5};

    printf("dir en hexa %p\n",puntero);// direccion en hexadecimal
    printf("dir en decimal %d\n",puntero);// direccion en decimal
    printf("contenido %d\n",*puntero);
    printf("%d",vec); //direccion del primer elemento
    return 0;
}
