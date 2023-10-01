
#include <stdio.h>
#include <stdlib.h>
#define NUM 322
#define VERADERO 1
#define FALSO    0
#define CUADRADO(X) ((X)*(X))
#define ES_MAYUSCULA(C) ((C)>='A' && (C)<='Z')
#define A_MINUSCULA(C) (ES_MAYUSCULA(C)? (C)+'a'-'A': (C))
#define MAYOR(X,Y) ((X)>(Y)?(X):(Y))
#define esBisiesto(a) (((a) % 4 == 0 && (a) % 100 != 0) || (a) % 400 == 0)


int main()
{
    printf("\n\n MACRO SIMPLE INPUT=322 /CONSTANTE: %d\n\n", NUM);
    printf("MAYOR NUMERO: INPUT(5.7,6.3) OUTPUT=%f\n\n", MAYOR(5.7,6.3));
    printf("CUADRADO: INPUT=3 OUTPUT=%d\n\n", CUADRADO(3));
    printf("A toLower: INPUT='A' OUTPUT=%c\n\n", A_MINUSCULA('A'));

    return 0;
}
