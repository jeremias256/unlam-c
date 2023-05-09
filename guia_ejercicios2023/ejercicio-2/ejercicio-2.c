
#include "ejercicio-2.h"

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

double combinatoria(int m, int n)
{
    if (n>m)
        return 0;
    return factorial(m)/(factorial(n)*factorial(m-n));
}
