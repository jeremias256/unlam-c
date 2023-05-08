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

void mostrarVector(int *vec, int ce);

//admite duplicados preguntar si existe o no para evitar movimientos en el vector
//recorre desde el principio
int vecInsertarEnOrden( int *vec, int *ce, int capacidad, int dato );

//eliminar por valor o por posicion
bool vecEliminarOrd( int *vec, int *ce, int dato);

//desordenado hay que buscarlo hasta el fin del vec
//ordenado recorre hasta encontrar uno mayor -> eficiente
//eliminar en v desordenado
int vecEliminarDesordenado();

//funcion buscar en vector
bool vecBuscar(int *vec, int ce, int dato);

void vecOrdenarAsc(int *vec, int ce);
void vecOrdenarDes(int *vec, int ce);
int vecCantOcurrencias(int *vec, int ce, int dato);
int vecElimnarDuplicados(int *vec, int *ce);//menor desplazamiento posible

#endif // HEADER_H
