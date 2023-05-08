
#include "ejercicio-2.h"

void mensaje()
{
    puts("Mensaje ejercicio-2");
}

double factorial(int num)
{
    if(num==0)
        return 1;
    else
    {
        double calculo = 1, i;
        for(i=1;i<=num;i++)
        {
            calculo *= i;
        }
        return calculo;
    }
}

double combinatoria(int m, int n)
{
    int resta = m-n;
    double calculo = (factorial(m)/(factorial(n)*factorial(resta)));
    return calculo;
}
