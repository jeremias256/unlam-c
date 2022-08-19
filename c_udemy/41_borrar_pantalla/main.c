#include <stdio.h>
#include <stdlib.h>
//borrar pantalla al apretar una tecla
int main()
{
    int numero;
    printf("\nPrograma que borra la pantalla al pulsar el número 1\n");
    printf("Ingre el número\n");
    scanf("%i",&numero);

    if(numero == 1)
    {
        system("cls");
        printf("Pantalla borrada\n");
    }
    else
    {
        printf("El numero ingresado no es 1, vuelva a ingresar\n");
        scanf("%i",&numero);
        if(numero == 1)
        {
            system("cls");
            printf("Pantalla borrada\n");
        }
        else
        {
            printf("saludos");
        }
    }

    return 0;
}
