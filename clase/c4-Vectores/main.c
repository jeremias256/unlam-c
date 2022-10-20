#include "header.h"
int main()
{
    int vec[CAPACIDAD] = {1,2,3,4,6,7,8,9,10};
    int ce = 9;
    int dato,
        seleccion,
        resultado;

    puts("Ingrese: \n");
    puts("3: Eliminar elemento al array");
    puts("2: Agregar elemento al vector");
    puts("1: Mostrar vector");
    puts("0: para salir");
    scanf("%d",&seleccion);

    while(seleccion!=0)
    {
        switch(seleccion)
        {
            case 1:
                puts("Vector : \n");
                mostrarVector(vec, ce);
                break;
            case 2:
                puts("Ingrese valor a insertar :\n");
                scanf("%d",&dato);
                resultado = vecInsertarEnOrden( vec, &ce, CAPACIDAD, dato);
                switch(resultado)
                {
                    case TODO_OK:
                        printf("El valor %d se inserto correctamente en el vector.\n",dato);
                        break;

                    case VEC_LLENO:
                        printf("El vector esta lleno. \n");
                        break;

                    case DUPLICADO:
                        printf("El valor %d ya existe en el vector. \n",dato);
                        break;
                }

                break;
            case 3:
                puts("Ingrese un valor a eliminar");
                fflush(stdin);
                scanf("%d",&dato);
                bool elimino = vecEliminarOrd(vec, &ce, dato);

                (elimino)
                ? printf("El valor %d se elimino correctamente.\n",dato)
                : printf("El valor %d no existe en el vector.\n",dato);
                break;
        }

        puts("3: Eliminar elemento al array");
        puts("2: Agregar elemento al vector");
        puts("1: Mostrar vector");
        puts("0: para salir");
        scanf("%d",&seleccion);

    }
}
