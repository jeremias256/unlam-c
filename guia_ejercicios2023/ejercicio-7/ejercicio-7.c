
#include"ejercicio-7.h"

int sumar_divisores(int num)
{
    int contador = 1, acumulador = 0;

    while(contador<num)
    {
        (num%contador==0) ? acumulador+=contador : "";
        contador++;
    }
    return acumulador;
}
