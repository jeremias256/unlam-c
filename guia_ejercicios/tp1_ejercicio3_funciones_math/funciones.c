#include "header.h"

double eALaX(int exp, double tol)
{
    double termino=1, resultado = 1;
    int i = 1;
    int resu_factorial,potencia;
    while(termino>tol)
    {
        termino=0;

        resu_factorial = factorial(i); // calcula factorial
        potencia = (pow(exp,i)); // calcula exp^x

        termino = ((double)potencia/resu_factorial);
        resultado = resultado + termino;

        i++;
    }

    return resultado;
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
