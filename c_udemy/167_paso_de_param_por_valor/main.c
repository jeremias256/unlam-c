#include <stdio.h>
#include <stdlib.h>

/*
    Parámetro por valor:
    Es el que usamos normalmente, cuando pasamos una
    variable a determinada función, solo se copia el
    valor que esta contiene en una memoria temporal la cual
    desaparece luego que la ejecucion termina y la variable
    original no es modificada.
*/
void agregar(int a);


int main()
{
    int numero;
    printf("Escribe un numero\n");
    scanf("%d",&numero);

    agregar(numero);
    printf("Valor antes de la funcion : %d\n",numero);
    agregar(numero);
    printf("Valor despues de la función : %d\n ",numero);

    //printf("acentos %c %c %c %c %c",160,130,161,162,163);

    return 0;
}

void agregar(int a)
{
    a+=10; //a=a+10
}
