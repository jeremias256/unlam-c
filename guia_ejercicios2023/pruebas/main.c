
#include <stdio.h>
#include <stdlib.h>

int SampleAddInt(int i1, int i2);
void cargarCadena(char *punteroArray, int ce);

int main()
{
    int resultado = 0;
    resultado = SampleAddInt(5,5);

    printf("El resultado es %d", resultado);

    return 0;
}
