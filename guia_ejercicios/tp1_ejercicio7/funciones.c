#include "header.h"

int sumardivisores(int numero)
{
    int i;
    int sum=0;

    for(i=1; i<=numero/2; i++)
    {
        (numero%i==0 ? sum+=i : "");
    }
    return sum;
}
