#include <stdio.h>
#include <stdlib.h>

int factorial(int);

int main()
{
    int resultado,x = 5;
    resultado = factorial(x);
    printf("Resultado del factorial es :%d",resultado);

    return 0;
}

int factorial(int a)
{
    int calculo=1,i;

    for(i=1;i<=a;i++)
    {
        calculo*=i;
    }

    return calculo;
}
