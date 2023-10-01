
#include "header.h"

int main()
{
    int posi = 5;
    int vec[] = {23,56,18,76,1,9,18,88,65,2};
    int tam = 10;



    printf("Array antes de ordenar: ");
    mostrar_vector(vec,10);
    printf("\n");

    printf("Array despues de ordenar: ");
    ordernar_por_insercion(vec,10);
    mostrar_vector(vec,10);
    printf("\n");

//    printf("Array despues de insertar valor: ");
//    insertar(vec,10,5);

//    mostrar_vector(vec,11);
//    printf("\n");

    /*printf("Array Despues de borrar valor en pos %d: ");
    eliminar_elemento(vec,tam,4);
    mostrar_vector(vec,tam);
    printf("\n");
    tam--;*/

    /*printf("Eliminar posi en %d vector: ",posi);
    acomodar(vec,11,4);
    mostrar_vector(vec,10);
    printf("\n");*/

    return 0;
}

