
#include "fecha.h"

bool esFechaValida(const Fecha *fecha);
int cantDiasMes(int m, int a);

/**
    EJERCICIO 14
    DESARROLLAR UNA FUNCIÓN QUE DETERMINE SI UNA FECHA ES FORMALMENTE CORRECTA.
**/
void ingresarFecha(Fecha *fecha)
{
    puts("Ingrese una fecha (aa/mm/aaaa)");
    scanf("%d/%d/%d", &fecha->d, &fecha->m, &fecha->a);

    while(!esFechaValida(fecha))
    {
        puts("Fecha inválida, ingresar de nuevo");
        scanf("%d%d%d", &fecha->d, &fecha->m, &fecha->a);
    }
}
void mostrarFecha(Fecha *fecha)
{
    printf("La fecha ingresada es: %d/%d/%d\n", fecha->a, fecha->m, fecha->d);
}
/**
    EJERCICIO 15
    DESARROLLAR UNA FUNCIÓN QUE A PARTIR DE UNA FECHA OBTENGA LA CORRESPONDIENTE AL DÍA SIGUIENTE.
**/
Fecha diaSiguiente(const Fecha *f)
{
    Fecha resultado;
    int anio = f->a;
    int mes = f->m;
    int dias = f->d;

    dias++;
    if(dias > cantDiasMes(mes, anio))
    {
        dias = 1;
        mes++;
        if(mes > 12)
            anio++;
    }

    /** RESULTADO **/
    resultado.a = anio;
    resultado.m = mes;
    resultado.d = dias;
    return resultado;
}
/**
    EJERCICIO 16
    DESARROLLAR UNA FUNCIÓN QUE A PARTIR DE UNA FECHA OBTENGA LA QUE RESULTE DEE SUMAR N DÍAS.
**/
Fecha sumarDias(const Fecha *f, int diasN)
{
    //printf("Datos ingresados %d/%d/%d\n", f->a, f->m, f->d);
    //printf("Dias ingresados %d\n", diasN);

    Fecha resultado;
    int anio = f->a;
    int mes = f->m;
    int dias = f->d;

    for(int i=0; i < diasN; i++)
    {
        switch(mes)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dias++;
            if(dias == 32)
            {
                dias = 1;
                mes++;
                if(mes == 13)
                {
                    mes = 1;
                    anio++;
                }
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dias++;
            if(dias == 31)
            {
                dias = 1;
                mes++;
                if(mes == 13)
                {
                    mes = 1;
                    anio++;
                }
            }
            break;
        case 2:
            if(esBiciesto(anio))
            {
                dias++;
                if(dias == 30)
                {
                    dias = 1;
                    mes++;
                }
            }
            else
            {
                dias++;
                if(dias == 29)
                {
                    dias = 1;
                    mes++;
                }
            }
        }
    }
    /** RESULTADO **/
    resultado.a = anio;
    resultado.m = mes;
    resultado.d = dias;
    return resultado;
}
/**
    EJERCICIO 17
    DESARROLLAR UNA FUNCIÓN QUE A PARTIR DE UNA FECHA OBTENGA LA QUE RESULTE DEE RESTAR N DÍAS.
**/
Fecha restarDias(const Fecha *f, int diasN)
{
    Fecha resultado;
    int anio = f->a;
    int mes = f->m;
    int dias = (f->d) - diasN;

    /*
    for(int i=0; i < diasN; i++)
    {
        dias--;
        if(dias == 0)
        {
            mes--;

            if(mes == 0)
            {
                anio--;
                mes = 12;
                dias = 31;
            }
            else
            {
                dias = cantDiasMes(mes, anio);
            }
        }
    }*/

    while(dias < 1)
    {
        mes--;
        if(mes == 0)
        {
            mes = 12;
            anio--;
        }

        dias+=cantDiasMes(mes,anio);
    }

    /** RESULTADO **/
    resultado.a = anio;
    resultado.m = mes;
    resultado.d = dias;
    return resultado;
}
/**
    FUNCIONES LOCALES
**/
bool esFechaValida(const Fecha *fecha)
{
    if(fecha->a >= 1601)
        if(fecha->m >= 1 && fecha->m <= 12)
            if(fecha->d >= 1 && fecha->d <= cantDiasMes(fecha->m, fecha->d))
                return true;

    return false;
}
int cantDiasMes(int m, int a)
{
    int dm[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(m==2 && esBiciesto(a))
        return 29;
    return dm[m];
}
