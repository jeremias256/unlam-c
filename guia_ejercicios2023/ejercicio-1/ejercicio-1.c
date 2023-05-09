
#include "ejercicio-1.h"

double factorial(int num)
{
    double resultado = 1;
    while(num>1)
    {
        resultado*=num;
        num--;
    }
    return resultado;
}
