#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero = 3;
    int *puntero;
    puntero = &numero;

    printf("int numero = 3;\n");
    printf("int *puntero;\n");
    printf("puntero = &numero;\n");

    printf("\n\n");

    printf("Direcci%cn de numero  : %d",162,&numero);
    printf("\t [ &numero ] imprime su direcci%cn",162);

    printf("\n\n");

    printf("Direcci%cn de numero  : %p",162,puntero);
    printf("\t [ puntero ] imprime su direcci%cn",162);

    printf("\n\n");

    printf("Direcci%cn de puntero  : %p",162,&puntero);
    printf("\t [ &puntero ] imprime su direcci%cn",162);

    printf("\n\n");

    printf("Contenido del puntero : %d",*puntero);
    printf("\t [ *puntero ] imprime su contenido");

    printf("\n\n");

    printf("Contenido de numero : %d",numero);
    printf("\t [ numero ] imprime su contenido");

    printf("\n\n");
    return 0;
}
