#include "D:\repositorios\proyectos\universidad\unlam-c\guia_ejercicios2023\ejercicio-1\factorial.h"

int funcion_local();

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

int funcion_local()
{
    return 0;
}
