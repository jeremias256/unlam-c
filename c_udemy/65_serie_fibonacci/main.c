#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,x=0,y=1,z=1;

    printf("Serie de Fibonacci :\n");
    scanf("%i",&num);

    printf("1 ,");

    for(i=1;i<num;i++)
    {
        z=x+y;
        x=y;
        y=z;
        printf("%i, ",z);

    }

    return 0;
}
