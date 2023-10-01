#ifndef LISTAESTATICA_H_INCLUDED
#define LISTAESTATICA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define CAP 6
#define TODO_OK 0
#define SIM_MEM 1
#define DUPLICADO 2
typedef struct
{
	int vec[CAP];
	int ce;
}Lista;

Lista crearLista(Lista *pl);
void crearListaV2(Lista *pl);
void ordenarLista(Lista *pl);
int listaInsertarOrd(Lista *pl, int elem);

void  mostrarLista(const Lista *pl);


#endif // LISTAESTATICA_H_INCLUDED
