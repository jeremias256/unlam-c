
#include "ejercicio-7.h"

int main()
{
    int num = 10, acumulador;

    acumulador = sumar_divisores(num);

    if(num == acumulador)
        puts("El numero es PERFECTO");
    if(num < acumulador)
        puts("El numero es ABUNDANTE");
    if(num > acumulador)
        puts("El numero es DEFICIENTE");

    return 0;
}
