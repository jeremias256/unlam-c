#include <stdio.h>
#include <stdlib.h>

void funcion1();
void funcion2();

int main()
{
    int a=10, b=12;
    ((a>b)? funcion1:funcion2)();

    return 0;
}

void funcion1()
{
    printf("Llamando a la funcion 1\n");
}

void funcion2()
{
    printf("Llamando a la funcion 1\n");
}
