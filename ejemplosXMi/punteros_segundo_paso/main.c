#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    float *puntero; //al ser punteros de distinto tipo algo sale mal
    int dato=30;

    puntero=&dato;
    *puntero=50;

    printf("Dato = %f\n",dato);
    return 0;
}*/
int main()
{
    int a,b,c,
        *p1, *p2; //puntero debe ser del mismo tipo que la variable

    p1=&a;
    *p1=1; // => a=1
    p2=&b;
    p1=p2;
    *p1=0; // => b=0
    p2=&c;
    *p2=3; // => c=3

    printf("%d %d %d \n",a,b,c);
    return 0;
}
