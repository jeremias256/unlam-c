#include "header.h"

int suma_sucesiva(int num1, int num2)
{
    int i,producto=0;

    for(i=0;i<num1;i++)
    {
        producto+=num2;
    }
    return producto;
}
