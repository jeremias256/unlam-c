#include <stdio.h>
#include <stdlib.h>

int main()
{
    int   opcion;
    float agregar,
          retirar,
          saldo=3000;

    printf("\t *********************** \n");
    printf("\t Selecciona una opción\n");
    printf("\t 1 : Depositar dinero\n");
    printf("\t 2 : Retirar dinero\n");
    printf("\t 3 : Salir del cajero\n");
    printf("\t *********************** \n");

    scanf("%i",&opcion);

    switch(opcion)
    {
    case 1:
        printf("Cuanto dinero a depositar?\n");
        scanf("%f",agregar);
        saldo +=agregar;
        printf("Saldo actual : %f",saldo);
        break;
    case 2:
        printf("Dinero a retirar\n");
        scanf("%f",&retirar);
        if(retirar>saldo)
        {
            printf("Saldo insuficiente para retirar\n");
        }
        else
        {
            saldo-=retirar;
            printf("Saldo actual : %f\n",saldo);
        }
        break;
    case 3:
        printf("Saludos");
        break;
    }

    return 0;
}
