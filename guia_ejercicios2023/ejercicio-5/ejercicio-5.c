
#include "ejercicio-5.h"

int fibonacci(int num)
{
    int i,
        inicialA = 0,
        inicialB = 1,
        sumaAB = 0;

    for(i=0;i<num;i++)
    {
        sumaAB = inicialA+inicialB;
        inicialA = inicialB;
        inicialB = sumaAB;

        if(num==sumaAB)
            return 1;
    }
    return 0;

}
