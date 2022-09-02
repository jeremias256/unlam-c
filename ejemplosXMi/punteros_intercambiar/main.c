#include <stdio.h>
#include <stdlib.h>

void intercambiar(int *x, int *y);

int main()
{
    int a=5,b=5000;
    printf("valores antes de intercambiar\nvalor de a: %d \nvalor de b: %d\n",a,b);
    intercambiar(&a,&b);
    printf("valores despúes de intercambiar\nvalor de a: %d \nvalor de b: %d",a,b);
    return 0;
}

void intercambiar(int *x, int *y)
{
    int temp=*x;
    *x = *y;
    *y=temp;
}
