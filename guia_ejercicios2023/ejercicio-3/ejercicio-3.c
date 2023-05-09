
#include "ejercicio-3.h"

double eALaX(int exp)
{
    double auxiliar = TOL;
    double valor_termino = 1, resultado = 1;
    int cant_terminos = 1;

    while(valor_termino>TOL)
    {
        valor_termino *= ((double) exp)/cant_terminos;
        resultado += valor_termino;
        cant_terminos++;
    }
    return resultado;
}
