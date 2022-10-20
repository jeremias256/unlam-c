#include "header.h"

void mostrarVector(int *vec, int ce)
{
    for(int i=0; i < ce; i++)
        printf("%d ", vec[i]);

    printf("\n");
}

//era bool pero si tengo mas de 2 return y quiero indicar la razon
//necesito retornar INT opcion 0,1,2
//int *ce ya que el tamaño del vector puede modificarse
int vecInsertarEnOrden(int *vec, int *ce, int capacidad, int dato)
{
    //checkear si hay espacio en el vector
    //cantidad de elementos cargados es igual a la capacidad?
    if(*ce == capacidad)
        return VEC_LLENO;

    int i=0;

    //mientras el valor de dato sea mayor al dato del array
    //mientras no salga del tamaño del array
    while(dato > vec[i] && i< (*ce))
        //posicion+1 a insertar el nuevo elemento al array
        i++;

    //verificar duplicados
    //v[] implicitamente es un punto apunta primera dir
    //v[3] es la tercera posicion del puntero
    if(dato == vec[i])
        return DUPLICADO;

    //*ce-1 tamaño del vector corrigiendo el comienzo en 0, es la ultima posición
    //recorre derecha a izquierda hasta i, que sera donde se inserte el nuevo elemento
    for(int j = (*ce)-1; j >= i; j--)
        //mueve a la derecha los elementos del array
        //hasta la posicion de i
        //i contiene posicion+1 a insertar el nuevo elemento
        vec[j+1] = vec[j];

    //la posicion se encuentra lista para reemplazar una vez trasladados los elementos
    vec[i] = dato;

    //actualizar tamaño del array
    (*ce)++;

    return TODO_OK;
}

//int *ce ya que el tamaño del vector puede modificarse
bool vecEliminarOrd(int *vec, int *ce, int dato)
{
    int i=0,j;

    //nose cuando voy a encontrar el valor a borrar uso "while"
    while(i < *ce && dato > vec[i])
        i++;

    //retorna false si no encuentra un elemento o se desborda del vector
    //importanse el orden ||
    //i == *ce v
    //no evalua la segunda condicion "evaluacion perezosa"
    if(i == *ce || dato < vec[i])
        return false;

    //traslada el vector a la izq para ocupar el espacio borrado
    //*ce-2 ya que es la pos que se va ocupar
    //-1 para corregir el inicio en 0
    //-2 ya que el tamaño del array se actualiza
    for(j = i; j <= *ce-2; j++)
        vec[j] = vec[j+1];

    //actualiza el tamaño del vector --
    (*ce)--;

    return true;
}

