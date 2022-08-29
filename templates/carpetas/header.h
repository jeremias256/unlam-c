#ifndef header.h
#define header.h
#include <math.h>
#include <stdio.h> //fflush(stdin)
#include <stdlib.h>

#define VERDADERO 1
#define FALSE     0
#define esBisiesto(a) (((a)%4==0 && (a)%100!=0) || (a)%400==0 )

void test();
void testTwo();

typedef struct {
    int dia;
    int mes;
    int anio;
}Fecha;

void ingresarFechaValida(Fecha *fecha);
int esFechaValida(const Fecha *f);
int cantDiasMes(int mes, int anio);
//int esBisiesto(int anio);

//tarea clase 2 virtual
void sumarDiasAFechaInSitu(Fecha* f, int dias);
void sumarDiasAFecha(const Fecha* f, int dias, Fecha* fSuma);
void restarDiasAFechaInSitu(Fecha* f, int dias);
void restarDiasAFecha(const Fecha* f, int dias, Fecha* fSuma);
int diferenciaEntreFechas(const Fecha* f1, const Fecha* f2);
int diaDeLaSemana(const Fecha* f);

#endif // FECHA_H
