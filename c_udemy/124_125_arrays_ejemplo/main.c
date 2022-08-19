#include "header.h"

int main()
{
    int i,bucle,opcion,vec[5];

    for(i=0; i<5; i++)
    {
        printf("Ingrese los 5 valores del array \n");
        scanf("%d",&vec[i]);
    }

    /*for(i=0;i<5;i++)
    {
        printf("%d\n",vec[i]);
    }*/

    while(bucle)
    {
        printf("Selecciones la opcion que requiere \n\n");
        printf("1 - Ingresar o modificar elementos del arreglo\n");
        printf("2 - Mostrar la suma de los elementos\n");
        printf("3 - Realizar la multiplicacion de los elementos\n");
        printf("4 - Realizar la suma de los elementos divisibles entre 3\n");
        printf("5 - Multiplicar por 3 cada elemento del array\n");
        printf("0 - Salir\n");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("1 - Ingresar o modificar elementos del arreglo\n");
                datos_arreglo(vec);
                llenar_arreglo(vec);
                printf("Array modificado");
                datos_arreglo(vec);
                break;
            case 2:
                printf("La suma de los elementos del array es : %d ",sumar_elementos(vec));
                break;
            case 3:
                printf("El producto de los elementos del array es : %d ",multiplicar_elementos(vec));
                break;
            case 4:
                printf("La suma de los elementos del array divisibles entre 3 es : %d ",sumar_elementos_divisibles(vec));
                break;
            case 5:
                printf("Multplicar por 3 cada elemento");
                multiplicar_por_tres(vec);
                datos_arreglo(vec);
                break;
            case 0:
                bucle=0;
                break;
            default:
                printf("Opcion no valida\n");
                break;
        }
    }
}
