#include "header.h"

void test()
{
    printf("Test works! \n");
}

void testTwo()
{
    printf("TestTwo also works! \n");
}

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

int esFechaValida(const Fecha *f)
{
    if(f->anio >= 1601)
    {
        if(f->mes >= 1 && f->dia <= cantDiasMes(f->mes, f->anio))
        {
            return VERDADERO;
        }
    }
    return FALSE;
}

int cantDiasMes(int mes, int anio)
{
    static const int cdm[12] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

    if(mes==2 && esBisiesto(anio))
    {
        return 29;
    }
    return cdm[mes];
}
/* reemplazado por una macro
int esBisiesto(int anio)
{
    return (anio%4 ==0 && anio%100 !=0 || anio%400 ==0);
}
*/
