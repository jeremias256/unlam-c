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
    static const int cdm[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

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

void sumarDiasAFechaInSitu( Fecha *f, int dias)
{
    //Fecha faux = (*f); //24/12
    //faux.dia+=dias;//24 + 10
    //f->dia+=dias

    int diasResultado = f->dia + dias; //24 + 100=124
    int acumuladorMes = f->mes;
    int acumuladorAnio = f->anio;

    int diaMax = cantDiasMes(f->mes, f->anio);



    if(f->dia+dias> diaMax)//supera al mes 34>31
    {
        while(diasResultado> cantDiasMes( acumuladorMes, acumuladorAnio))
            //arranca con 24-2022 -> 124>31
            //sale con 4>30
        {
            if(acumuladorMes<12)
                acumuladorMes++;
            else
            {
                acumuladorMes=1;
                if(diasResultados>)
                {
                    if(esBisiesto(acumuladorAnio))
                    {
                        if(diasResultado>366)
                            acumuladorAnio++;
                    }
                    else
                    {
                        if(diasResultado>365)
                            acumuladorAnio++;
                    }
                }

            }
            diasResultado-= cantDiasMes( acumuladorMes, acumuladorAnio );
        }

        f->dia = diasResultado;
        f->mes = acumuladorMes;
        f->anio = acumuladorAnio;
        /*if(f->mes==12)
        {
            f->anio++;//2022+1= 2023
            f->mes=1; //enero
        }
        else
        {
            f->mes++;//11+1 =12
        }
        f->dia = f->dia+dias-diaMax;//24+10-31 = 3 enero*/
    }
    else
    {
        f->dia+=dias;//15+10
    }

}
