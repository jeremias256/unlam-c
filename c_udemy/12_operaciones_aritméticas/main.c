#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2,suma,resta,multiplicacion,division;

    printf("Ingrese 2 números \n");
    scanf("%f %f", &num1, &num2);

    suma= num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division  = num1 / num2;

    printf("suma: %.2f\n",suma);
    printf("resta: %.4f\n",resta);
    printf("multiplicacion: %.2f\n",multiplicacion);
    printf("division: %.1f\n",division);

    return 0;
}
