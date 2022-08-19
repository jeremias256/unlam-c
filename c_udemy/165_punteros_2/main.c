#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero = 50;
    int *pNumero; //declaro un puntero tipo int

    printf("Dato: %d\n",numero); //imprime 50
    printf("Posicion en memoria: %p\n",&numero); //imprime pos memoria

    printf("**************\n**************\n");

    pNumero= &numero; //&numero es la posicion en memoria de numero
    printf("Valor de la variable:\n");
    printf("Dato: %i\n",numero); //imprime num 50
    printf("Dato: %i\n",*pNumero);
    printf("Dato: %i\n",&pNumero);
    //imprime lo que hay en la pos 000000000061FE14 QUE ES NUM=50

    printf("**************\n**************\n");

    printf("Posicion de memoria:\n");
    printf("Posicion: %p\n",&numero);
    printf("Posicion: %p\n",pNumero);



    return 0;
}
