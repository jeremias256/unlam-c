
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor = 5;
    int array[10] = {100,200,322,400,500,600,700,800,900,1000};

    int *punteroAValor,
        *punteroAArray;

    /** INDICO A DONDE APUNTAR A LOS PUNTEROS **/
    punteroAValor = &valor;
    punteroAArray = array;

    printf("Contenido de valor &d",*punteroAValor);
    printf("Contenido de las pos 1 : %d\n",*(punteroAArray+1)); //200
    printf("Contenido de las pos 1 : %d\n",array[1]);          //200

    /**
     * int 4 bytes, sumara a la DIR +4.
     *
     * @param array.
     * @param puntero + 1 = 000000000061FDF0 + 4
     * @return 000000000061FDF4.
    */
    printf("Direccion de comienzo del array : %p\n",array);
    printf("Direccion de comienzo del array : %p\n",punteroAArray+1);

    /** PARA USAR PUNTEROS A VOID SE DEBE CASTEAR **/
    void *punteroaux = (void *)punteroAValor;
    printf("Contenido de punteroaux &d",*(int *)punteroaux);

    return 0;
}
