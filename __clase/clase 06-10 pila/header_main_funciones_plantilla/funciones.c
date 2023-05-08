#include "header.h"

void test()
{
    printf("Test works! \n");
}

void testTwo()
{
    printf("TestTwo also works! \n");
}

void crearPila(pila *pp)
{
    pp->tope=0;
}

bool apilar(pila *pp, const void *elem, size_t tamElem)
{
    //hay espacio en la pila?
    //no llama primtiva desde primitiva
    //size_t es un unsiged long
    if(tamElem + sizeof(size_t)>TAM_PILA - pp->tope)
        //condicion que indica si la pila esta llena
        return false;

    memcpy(pp->vPila + pp->tope, elem, tamElem);
    pp->tope += tamElem;
    //puntero a size_t
    ((size_t *)(pp-> vPila + pp->tope))= tamElem;//le decimos a una variable es de otro tipo
    //mas rapido que memcpy
    //cualquer puntero se puede convertir en otro puntero
    //recibo dos punteros a void y se castean
    pp->tope += sizeof(size_t);
    return true;
}

bool desapilar(pila *pp)
{
    if(pp->tope==0)
        return false

    pp->tope == sizeof(size_t);
    size_t tamElemAp = *(size_y*)(pp-> vPila + pp->tope);
    //sentido opuesto al anterior
    pp->tope -= tamElemAp;
    memcpy(elem, pp->vPila + pp->tope, min(tamElem, tamElemAp));
    return true;
}

bool verTopeDePila(const pila *pp)
{
    if(pp->tope==0)
        return false

    unsigned tope == pp->tope - sizeof(size_t);
    size_t tamElemAp = *(size_y*)(pp-> vPila + pp->tope);
    //sentido opuesto al anterior
    tope -= tamElemAp;
    memcpy(elem, pp->vPila + tope, min(tamElem, tamElemAp));
    return true;
}

bool pilaLlena(const pila *pp, size_t tamElem)
{
    return tamElem + sizeof(size_t) > TAM_PILA_P - pp->tope;
}

bool pilaVacia(const pila *pp)
{
    return pp->tope==0;
}


