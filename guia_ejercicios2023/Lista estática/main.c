
#include "listaEstatica.h"

int main()
{
    /** CREAR LISTA Y RETORNARLA **/
//    Lista nuevaLista;
//    nuevaLista = crearLista(&nuevaLista);

    /** CREAR LISTA HC **/
    Lista nuevaLista = {{11, 900, 78, 2003}, 4};
    printf("*****************************************************************************\n");
    printf("*                                                                           *\n");
    printf("*                              LISTA                                        *\n");
    printf("*                                                                           *\n");
    printf("*****************************************************************************\n");
    mostrarLista(&nuevaLista);
    //crearListaV2(&nuevaLista);
    printf("*****************************************************************************\n");
    printf("*                                                                           *\n");
    printf("*                              ORDENAR LISTA                                *\n");
    printf("*                                                                           *\n");
    printf("*****************************************************************************\n");
    ordenarLista(&nuevaLista);
    mostrarLista(&nuevaLista);
    printf("*****************************************************************************\n");
    printf("*                                                                           *\n");
    printf("*                             INSERTAR LISTA                                *\n");
    printf("*                                                                           *\n");
    printf("*****************************************************************************\n");
    int elem = 100;
    int estadoInsertar = listaInsertarOrd(&nuevaLista, elem);

    printf("Respuesta de insertar %d\n", estadoInsertar);
    mostrarLista(&nuevaLista);

     return 0;
}
