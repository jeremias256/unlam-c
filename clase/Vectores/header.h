#ifndef header.h
#define header.h

#include <math.h>
#include <stdio.h> //fflush(stdin)
#include <stdlib.h>
#include <stdbool.h>

#define CAPACIDAD   10
#define CAPACIDAD2  20
#define TODO_OK     0
#define VEC_LLENO   1
#define DUPLICADO   2

void test();
int vecInsertarEnOrden( int *vec, int *cec, int capacidad, int dato );
bool vecEliminarOrd( int *vec, int *cec, int dato);
//elinar por valor o por posicion
//desordenado hay que buscarlo hasta el fin del vec
//ordenado recorre hasta encontrar uno mayor -> eficiente
int vecEliminarDesordenado();//eliminar en v desordenado
void mostrarVector(int *vec, int cec);

#endif // HEADER_H
