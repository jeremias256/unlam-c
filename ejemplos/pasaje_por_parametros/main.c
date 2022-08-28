#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[5]= {1,1,1,4,1,1};
    intercambio(&x[5],&x[3]);
    for(int i=0; i<5; i++)
    {
        printf("%d",x[i]);
    }

    return 0;
}
void intercambio(int*a,int*b)
{
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}
