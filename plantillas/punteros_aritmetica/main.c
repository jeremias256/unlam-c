#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *p = 0X200;

    p++;
    p = p + 2;

    printf("Imprime %d",*p);

    return 0;
}
