#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int *ptr;
    int dato=30;

    ptr = &dato;
    *ptr = 50;

    printf("dato = %d \n",dato);

    return 0;
}*/

int main(void)
{
    int a,b,c, *p1, *p2;

    p1 =  &a;
    *p1 = 1;
    printf("%d %d %d \n",a,b,c);
    p2 = &b;
    *p2 = 2;
    printf("%d %d %d \n",a,b,c);
    p1 = p2;
    *p1 = 0;
    printf("%d %d %d \n",a,b,c);
    p2 = &c;
    *p2 = 3;
    printf("%d %d %d \n",a,b,c);

    return 0;
}
