#include <stdio.h>
void sumRes(int, int, int* , int*);

void main()
{
    int va,vb,suma,resta;
    va=4;
    vb=2;
    sumRes(va,vb,&suma,&resta);//paso los 2 valores y las 2 dirrecciones de retorno

    printf("\n Suma = %d \n Resta = %d",suma,resta);
}
void sumRes(int a, int b, int*ps, int*pr)
{
    *ps =a+b;
    *pr =a-b;
    return;
}
