#include "header.h"

int fibonacci(int num)
{
    int i,
        inicial = 0,
        inicial2=1,
        suma = 0;

    for(i=0;i<50;i++)
    {
        suma = inicial + inicial2;
        inicial = inicial2;
        inicial2 = suma;

        if(num==suma)
            return 1;
    }


    return 0;
}
