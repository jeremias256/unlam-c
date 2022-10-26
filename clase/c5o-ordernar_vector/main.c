#include <stdio.h>
#include <stdlib.h>

#define TAM 8

void mostrarVector (int *vec,int ce);
void intercambiar(int *izq, int *der);
int buscarMenor(int *desde, int *hasta);

void ordernarPorBurbujeo(int *vec,int ce);
void ordernarPorSeleccion (int *vec, int ce);
void ordernarPorInsercion(int *vec, int ce);

int main()
{
    int vecDesordenado[] = {7,1,8,15,9,-1,999,2},
        seleccionOrdenamiento;

    //intercambios "baratas"
    puts("Vector antes de ordenar");
    mostrarVector(vecDesordenado,8);

    puts("Que metodo de ordenamiento quiere usar");
    //intercambios = 0.5 * ce^2 = 40.5
    //comparaciones = 0.5 * ce^2 = 40.5
    puts("1: Burbujeo");

    //intercambios = ce = 8
    //comparaciones = 0.5 * ce^2 = 64
    puts("2: Seleccion");

    //desplazamientos = 0.5 * ce^2
    //comparaciones = 0.5 ce^2
    puts("3: Insercion");

    scanf("%d",&seleccionOrdenamiento);
    switch(seleccionOrdenamiento)
    {
        case 1:
            ordernarPorBurbujeo(vecDesordenado,TAM);
            puts("Vector ordenado");
            mostrarVector(vecDesordenado,TAM);
            break;
        case 2:
            ordernarPorSeleccion(vecDesordenado,TAM);
            puts("Vector ordenado");
            mostrarVector(vecDesordenado,TAM);
            break;
        case 3:
            ordernarPorInsercion(vecDesordenado,TAM);
            puts("Vector ordenado");
            mostrarVector(vecDesordenado,TAM);
            break;
    }


    return 0;
}

void mostrarVector(int *puntero, int ce)
{
    int i;
    printf("\n");
    for(i=0; i<ce; i++)
    {
        printf("[%d]",*puntero);
        puntero++;
    }
    printf("\n");
}

void intercambiar(int *izq,int *der )
{
    int aux = *izq;
    *izq = *der;
    *der = aux;
}

int buscarMenor(int *desde, int *hasta)
{
    //"desde" es el primer elemento del array
    //desde se actualiza en cada pasada
    //a medida de intercambios es mas chico el array
    int *min=desde;
    for(int *j = desde+1; j <= hasta; j++)
    {
        if(*j < *min)
            min=j;
    }
    return min;
}

//poco eficiente muchos movimientos y comparaciones
//puede saber cuando no hay intercambios
//ultima pasada se ordenan 2 elementos
void ordernarPorBurbujeo(int *vec, int ce)
{
    int i=1, j, intercambios = 1;

    while(intercambios && i < ce)
    {
        intercambios = 0;
        for(j=0; j < ce; j++)
        {
            if(vec[j] > vec[j+1])
            {
                intercambiar(&vec[j+1],&vec[j]);
                intercambios = 1;
            }
        }
    }

}

//busca el menor  lo coloca en la pos menor
//con un intercambio
//a medida que hacen intercambios es mas chico el array
//ultima pasada se ordenan 2 elementos 8elementos 7 pasadas
void ordernarPorSeleccion (int *vec, int ce)
{
    //refactorizado con punteros en lugar de usar variables


    int *menor,
        // 8 elementos -1 corrige inicio en 0
        *ultimo_elem = vec + (ce-1);// vec=0 + 7 = ultima pos  ARITMETICA DE *p
    //8 elementos hace 7 vueltas ya que en la ultima ordena 2
    //6 vueltas ya inicia en 0 podria ser ultimo_elem -2
    for(int *i = vec; i < ultimo_elem; i++)
    {
        //buscarMenor(vec,i,ultimo_elem); no necesito el vector por que uso direcciones
        menor = buscarMenor(i,ultimo_elem);
        if(menor!=i)
            //intercambiar(&vec[i], &vec[menor]);
            intercambiar(i, menor); //refactorizo por direcciones
    }
}

//inserciones sucesivas
//desplazamiento>intercambiox3
void ordernarPorInsercion(int *vec, int ce)
{
    /*int *ultimo_elem = vec + (ce-1);
    //int guardo_pos_izq,elemento_der_aux;
    int *elem_izq, *elem_der;
    int *aux;
    for(int *i=vec+1; i<=ultimo_elem; i++)
    {
        elem_der = i;
        elem_izq = i-1;

        while(elem_izq >= vec && *elem_der < *elem_izq)
        {
            i=elem_izq;
            i--;
            i=elem_der;
        }
        i=elem_der;
    }*/
    int i,e_izq,e_der;

    for(i=1; i<ce; i++)
    {
        e_der = vec[i];
        e_izq = i-1;
        while(e_izq >=0 && e_der < vec[e_izq])
        {
            vec[e_izq+1]=vec[e_izq];
            e_izq--;
        }
        vec[e_izq+1]=e_der;
    }

}
