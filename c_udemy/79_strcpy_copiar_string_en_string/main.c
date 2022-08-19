#include <stdio.h>
#include <stdlib.h>

//* strcpy(destino, fuente)
//* Permite copiar una cadena de texto en otra. Debes considerar los tamaños del array
//* Destino debe ser igual o mayor que el array origen

int main()
{

    char origen[]= "Programacion"; //12chars

    char destino[12];

    strcpy(destino, origen);

    printf("%s \n",destino);

    return 0;
}
