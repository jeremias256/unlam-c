#include <stdio.h>
#include <stdlib.h>

#include "macros_utiles.h"
int main()
{
    printf("\n\n MACRO SIMPLE INPUT=322 /CONSTANTE: %d\n\n", NUM);
    printf("MAYOR NUMERO: INPUT(5.7,6.3) OUTPUT=%f\n\n", MAYOR(5.7,6.3));
    printf("CUADRADO: INPUT=3 OUTPUT=%d\n\n", CUADRADO(3));
    printf("A toLower: INPUT='A' OUTPUT=%c\n\n", A_MINUSCULA('A'));

    return 0;
}
