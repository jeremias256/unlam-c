#include "header.h"

double eALaX(int exp, double tol)
{
    double termino = 1, resultado = 1; //termino y resultado de la suma de terminos
    int i = 1; // cantidad de terminos

     while(termino>tol)
    {
        termino = termino * ((double)exp)/i;
        resultado = resultado + termino;
         i++;
    }
    return resultado;
}
