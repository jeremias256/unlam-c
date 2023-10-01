
#include "ejercicio-3.h"

double eALaX(int exp)
{
    double valorTermino = 1, resultado = 1;
    int cantTerminos = 1;

    while(valorTermino>TOL)
    {
        valorTermino *= ((double) exp)/cantTerminos;
        resultado += valorTermino;
        cantTerminos++;
        /*valorTermino = (calcularExponente(exp, cantTerminos)/factorial(cantTerminos));
        resultado += valorTermino;
        cantTerminos++;*/
    }
    return resultado;
}
