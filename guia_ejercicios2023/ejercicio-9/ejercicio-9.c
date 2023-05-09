
#include "ejercicio-9.h"

void funcion_cociente(double num1, float num2)
{
    float cociente;
    int resto;

    cociente=((float)(num1/num2));
    resto=fmod(num1,num2);

    printf("Resultado del cociente : %f\n",cociente);
    printf("Resultado del resto : %d\n",resto);
}
