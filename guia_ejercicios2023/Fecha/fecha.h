
#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define esBiciesto(a) (((a) % 4 == 0 && (a) % 100 != 0) || (a) % 400 == 0)
typedef struct
{
    int d;
    int m;
    int a;
}Fecha;
void ingresarFecha(Fecha *fecha);
void mostrarFecha(Fecha *fecha);

/**
 * @brief Suma una cantidad de d�as a una fecha dada.
 *
 * Esta funci�n toma una fecha y un n�mero de d�as y calcula una nueva fecha
 * sumando la cantidad de d�as especificados a la fecha original.
 *
 * @param f Puntero a la fecha original.
 * @param dias N�mero de d�as que se agregar�n a la fecha.
 * @return Una nueva fecha calculada despu�s de sumar los d�as.
 */
Fecha diaSiguiente(const Fecha *f);
Fecha sumarDias(const Fecha *f, int dias);
Fecha restarDias(const Fecha *f, int dias);
#endif // FECHA_H_INCLUDED
