#ifndef header.h
#define header.h
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define anio_bisiesto(y) ((((y)%400)==0)|| (((y)%4==0)==0 && (((y)%100)!=0)))

typedef struct
{
    int d,
        m,
        a
} t_fecha;

int validar_fecha(t_fecha dia);
void dia_siguiente_fecha(t_fecha dia);
void sumar_dias(t_fecha dia, int cant_dias);

#endif
