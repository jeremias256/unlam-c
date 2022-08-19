#include "header.h"

int main()
{
    int acum;
    acum = sumardivisores(6);

    printf("Resultado de la suma de los divisores %d: ",acum);


    if(acum==6)
    {
        printf("Perfecto");
    }
    else if(acum>6)
    {
        printf("Abuntante");
    }
    else
        printf("Deficiente");

    return 0;
}

