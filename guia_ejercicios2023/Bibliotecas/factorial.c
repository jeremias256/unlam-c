
#include "factorial.h"

double factorial(int num)
{
    double resultado = 1;
    while(num>1)
    {
        resultado*=num;
        n--;
    }
    return resultado;
}
