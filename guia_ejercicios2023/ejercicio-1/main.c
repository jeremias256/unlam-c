
#include "ejercicio-1.h"

int main()
{
    int numero;
    double resultado;

    do
    {
        puts("Ingrese un numero entero");
        scanf("%d", &numero);
        if(numero<0)
            puts("No se puede calcular el factorial de un numero negativo");

    }while(numero<0);
    resultado = factorial(numero);

    printf("El resultado del factorial de %d es : %.01f", numero, resultado );

    return 0;
}
