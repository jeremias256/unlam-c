#include <stdio.h>
#include <stdlib.h>

/*
    Parametro por referencia:
    En este tipo de funciones el valor de la variable si se modifica,
    ya que se pasa como parametro la direccion de memoria de esta, usando el
    operador & y en la funcion, el argumento se recibe como el valor que
    alberga esa direccion de memoria usando el operador *.

*/

void agregar(int *a);

int main()
{
    int numero;
    printf("Escribe el numero\n");
    scanf("%d",&numero);

    printf("Valor antes de la funcion: %d\n",numero);
    agregar(&numero);

    printf("Valor despues de la funcion: %d\n",numero);

    return 0;
}

void agregar(int *a)
{
    *a+=10;
}
