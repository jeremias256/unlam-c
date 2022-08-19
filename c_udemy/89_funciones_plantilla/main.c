#include <stdio.h>
#include <stdlib.h>

int sumar(int a, int b);

int main()
{
    int a,b,resultado;

    printf("Escribe 2 numeros\n");
    scanf("%d %d",&a,&b);

    //resultado = sumar(a,b);

    printf("La suma es : %d ",sumar(a,b));
    return 0;
}

int sumar(int a, int b)
{
    return a+b;
}
