#include "ejercicio-1.h"

void mensaje()
{
    puts("mensaje");
}

double factorial(int num)
{
    if(num<0)
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
