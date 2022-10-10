#include "header.h"
int main()
{
    int vec[CAPACIDAD] = {1,2,3,4,6,7,8,9,10};
    int ce = 9;
    //int vec2[CAPACIDAD2] = {1,2,3,4,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    //int ce2 = 19;
    int dato;
    int resultado;


    puts("Ingrese valor a insertar :\n");
    scanf("%d",&dato);

    puts("Mostrar vector antes de insertar dato");
    mostrarVector(vec, ce);
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

    puts("Mostrar vector despues de insertar dato");
    mostrarVector(vec, ce);

    puts("Ingrese un valor a eliminar");
    fflush(stdin);
    scanf("%d",&dato);

    bool elimino = vecEliminarOrd(vec, &ce, dato);

    (elimino)
    ? printf("El valor %d se elimino correctamente.\n",dato)
    : printf("El valor %d no existe en el vector.\n",dato);

    puts("Vector despues de eliminar");
    mostrarVector(vec, ce);



    //vector 2
    /*
        puts("vector 2");
        puts("Mostrar vector2 antes de insertar dato");
        mostrarVector(vec2, ce2);

        resultado = vecInsertarEnOrden( vec2, &ce2, CAPACIDAD2, dato);

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
        puts("Mostrar vector despues de insertar dato");
        mostrarVector(vec2, ce2);

        return 0;
    */
}
