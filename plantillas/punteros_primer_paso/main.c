#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,x=322;
    p=&x;

    printf("Direcci�n de x : %p\t\t", &x);
    printf("Direcci�n de x : %p\n", p);
    printf("Direcci�n de p : %p\t", &p);
    printf("Contenido del puntero : %d\t",*p);
    printf("Contenido de x : %d\n",x);

    return 0;
}
