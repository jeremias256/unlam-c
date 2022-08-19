#include "header.h"

void funcion_cociente(double num1, float num2)
{
    int cociente;
    int resto;

    cociente=num1/num2;
    resto=fmod(num1,num2);

    printf("Resultado del cociente : %d\n",cociente);
    printf("Resultado del resto : %d\n",resto);
}
