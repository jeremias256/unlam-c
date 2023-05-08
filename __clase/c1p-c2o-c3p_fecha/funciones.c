#include "header.h"

//funciones locales
int cantDiasMes(int mes, int anio);
int esFechaValida(const Fecha *f);
int aJuliano(const Fecha *f);

void ingresarFechaValida(Fecha *fecha)
{
    puts("Ingrese una fecha valida dd/mm/aaaa");
    fflush(stdin);
    scanf("%d/%d/%d", &fecha->dia,&fecha->mes,&fecha->anio);

    while(!esFechaValida(fecha)) //sin & ya que es la dir del puntero
    {
        puts("La fecha ingresada es inválida. Ingrese de nuevo dd/mm/aaaa");
        fflush(stdin);
        scanf("%d/%d/%d", &fecha->dia,&fecha->mes,&fecha->anio);
    }
    //return fecha;
}

int esFechaValida(const Fecha *fecha)
{
    if(fecha->anio >= 1601)
    {
        if(fecha->mes >= 1 && fecha->dia <= cantDiasMes(fecha->mes, fecha->anio))
            return VERDADERO;
    }
    return FALSE;
}

int cantDiasMes(int mes, int anio)
{
    static const int cdm[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

    if(mes==2 && esBisiesto(anio))
        return 29;

    return cdm[mes];
}

/* reemplazado por una macro
int esBisiesto(int anio)
{
    return (anio%4 ==0 && anio%100 !=0 || anio%400 ==0);
}
*/

//tarea
void sumarDiasAFecha(const Fecha *f, int dias, Fecha *fSuma)
{
    int cdm;
    *fSuma = *f;
    fSuma->dia +=dias;

    while(fSuma->dia > (cdm = cantDiasMes(fSuma->mes, fSuma->anio)))
    {

        fSuma->dia -= cdm;
        fSuma->mes++;
        fSuma->anio;

        if(fSuma->mes>12)
        {
            fSuma->mes = 1;
            fSuma->anio++;
        }
    }
}

void sumarDiasAFechaInSitu(Fecha *f, int dias)
{
    int cdm;
    f->dia +=dias;

    while(f->dia > (cdm = cantDiasMes(f->mes, f->anio)))
    {

        f->dia -= cdm;
        f->mes++;

        if(f->mes>12)
        {
            f->mes = 1;
            f->anio++;
        }
    }
}

void restarDiasAFechaInSitu(Fecha *f, int dias)
{
    int cdm;
    f->dia -= dias;
    while(f->dia <= 0)
    {
        f->mes--;
        if(f->mes == 0)
        {
            f->mes = 12;
            f->anio--;
        }
        cdm = cantDiasMes(f->mes, f->anio);
        f->dia += cdm;

    }
}

void restarDiasAFecha(const Fecha *f, int dias, Fecha *fResta)
{
    int cdm;
    *fResta = *f;
    fResta->dia -= dias;
    while(fResta->dia <= 0)
    {
        fResta->mes--;
        if(fResta->mes == 0)
        {
            fResta->mes = 12;
            fResta->anio--;
        }
        cdm = cantDiasMes(fResta->mes, fResta->anio);
        fResta->dia += cdm;

    }
}

int diferenciaEntreFechas(const Fecha *fDesde, const Fecha *fHasta)
{

    int anioBase = ( fDesde->anio <= fHasta->anio ) ? fDesde->anio : fHasta->anio,
        distBaseDesde = fDesde->anio - anioBase,
        distBaseHasta = fHasta->anio - anioBase;
    long diasBaseAHasta = distBaseHasta*365L + distBaseHasta/4 -
         distBaseHasta/100 + distBaseHasta/400 +
         (distBaseHasta !=0) + aJuliano(fHasta),

         diasBaseADesde = distBaseDesde*365L + distBaseHasta/4 -
         distBaseDesde/100 + distBaseDesde/400 +
         (distBaseDesde !=0) + aJuliano(fDesde);

    return diasBaseAHasta-diasBaseADesde;
}

int aJuliano(const Fecha *f)//devuelve numeros 102 ex
{
    int dias[][12] = {
        { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 },
        { 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335 }
    };

    return dias[ esBisiesto(f->anio)][f->mes-1] + f->dia;
}
