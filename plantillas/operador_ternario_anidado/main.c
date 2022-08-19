#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=6,b=2,c=10;
    int mayor;

    mayor = a>b ? (a>c ? a:c):(b>c ? b:c);
    //               c=10           c=10

    printf("El mayor es: %d\n",mayor);

    return 0;
}
