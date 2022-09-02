#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x;
    printf(intercambio(&x[5],&x[3]));
    return 0;
}
void intercambio (int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
