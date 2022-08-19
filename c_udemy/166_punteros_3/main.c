#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variables
    int A=19,B=20;

    //apuntadores aputnando a las variables
    int *apuntadorA = &A;
    int *apuntadorB = &B;

    printf("Valor de A es : %d\n",A);
    printf("Apuntador A : %p\n",apuntadorA);

    //le cambiamos el valor al apuntador
    *apuntadorA = 123;

     printf("Valor de A es : %d\n",A);
     printf("Apuntador A : %p\n",apuntadorA);



    return 0;
}
