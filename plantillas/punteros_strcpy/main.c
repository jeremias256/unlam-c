#include <stdio.h>
#include <stdlib.h>

int main()
{
    char destino[20],original[] = {"soledad"},*puntero;

    puntero = strcpy(destino,original);

    printf("La cadena original es :   \%s \n",original);
    printf("La cadena destino queda con : %s \n",destino);
    printf("strcpy devolvio %p y la cadena destino esta en"
           "la direccion %p \n",puntero,destino);
    return 0;
}
