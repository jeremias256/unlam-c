#ifndef header.h
#define header.h
#include <math.h>
#include <stdio.h> //fflush(stdin)
#include <stdlib.h>

#define VERDADERO 1
#define FALSE     0
#define esBisiesto(a) (((a)%4==0 && (a)%100!=0) || (a)%400==0 )

typedef struct {
    int dia;
    int mes;
    int anio;
}Fecha;

void ingresarFechaValida(Fecha *fecha);//OK
//int esFechaValida(const Fecha *f);  esta F es local de funciones.c
//int cantDiasMes(int mes, int anio); esta F es local de funciones.c
//int esBisiesto(int anio); ahora es una macro

//tarea clase 2 virtual
void sumarDiasAFechaInSitu( Fecha *fDesde, int dias);// Fecha nuevaFecha
void sumarDiasAFecha( const Fecha *fDesde, int dias, Fecha *fSuma);
//ingreso la dir de fSuma
void restarDiasAFechaInSitu(Fecha *fDesde, int dias);
void restarDiasAFecha(const Fecha *fDesde, int dias, Fecha *fResta);
int diferenciaEntreFechas(const Fecha *fDesde, const Fecha *fHasta);
int diaDeLaSemana(const Fecha* f);

#endif
