#include "header.h"

int validar_fecha(t_fecha dia)
{
    int flag = 0;
    if((dia.a >= 1900 && dia.a <= 3000) && (dia.m >= 1 && dia.m <= 12))
    {
        switch(dia.m)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(dia.d >= 1 && dia.d <= 31)
            {
                printf("Fecha correcta \n");
                flag = 1;
            }
            else
            {
                printf("Fecha no existente\n");
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(dia.d > 0 && dia.d <= 30)
            {
                printf("Fecha correcta \n");
                flag = 1;
            }
            else
            {
                printf("Fecha no existente\n");
            }
            break;
        case 2:
            if(anio_bisiesto(dia.a)==0)
            {
                if(dia.d >= 1 && dia.d <= 29)
                {
                    printf("Fecha correcta \n");
                    flag = 1;
                }
                else
                {
                    printf("Fecha no existente \n");
                }
            }
            else
            {

                if(dia.d >= 1 && dia.d <= 28)
                {
                    printf("Fecha correcta\n");
                    flag = 1;
                }
                else
                {
                    printf("Fecha no existente\n");
                }
            }
            break;

        }
    }
    else
        printf("Fecha no existente\n");
    return flag;
}

void dia_siguiente_fecha(t_fecha dia)
{
    //int bisiesto = anio_bisiesto(dia.a); //0 bisiesto true //1 bisiesto false

    t_fecha dia_siguiente = dia;

    dia_siguiente.d++;


    switch(dia.m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if(dia_siguiente.d >= 1 && dia_siguiente.d <= 31)
        {
            printf("Fecha %d-%d-%d \n",dia_siguiente.d,dia_siguiente.m,dia_siguiente.a);
        }
        else
        {
            dia_siguiente.d = 1;
            dia_siguiente.m++;
            if(dia_siguiente.m == 13)
            {
                dia_siguiente.a++;
                dia_siguiente.m = 1;
                printf("Fecha %d-%d-%d \n",dia_siguiente.d, dia_siguiente.m,dia_siguiente.a);
            }
            else
            {
                printf("Fecha %d-%d-%d \n",dia_siguiente.d, dia_siguiente.m,dia_siguiente.a);
            }
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if(dia_siguiente.d > 0 && dia_siguiente.d <= 30)
        {
            printf("Fecha %d-%d-%d \n",dia_siguiente.d,dia_siguiente.m,dia_siguiente.a);
        }
        else
        {
            dia_siguiente.d = 1;
            dia_siguiente.m++;
            if(dia_siguiente.m == 13)
            {
                dia_siguiente.a++;
                dia_siguiente.m = 1;
                printf("Fecha %d-%d-%d \n",dia_siguiente.d, dia_siguiente.m,dia_siguiente.a);
            }
            else
            {
                printf("Fecha %d-%d-%d \n",dia_siguiente.d, dia_siguiente.m,dia_siguiente.a);
            }
        }
        break;
    case 2:
        if(anio_bisiesto(dia.a)==0)
        {
            if(dia_siguiente.d >= 1 && dia_siguiente.d <= 29)
            {
                printf("Fecha %d-%d-%d \n",dia_siguiente.d,dia_siguiente.m,dia_siguiente.a);
            }
            else
            {
                dia_siguiente.d = 1;
                dia_siguiente.m++;
                if(dia_siguiente.m == 13)
                {
                    dia_siguiente.a++;
                    dia_siguiente.m = 1;
                    printf("Fecha %d-%d-%d \n",dia_siguiente.d, dia_siguiente.m,dia_siguiente.a);
                }
                else
                {
                    printf("Fecha %d-%d-%d \n",dia_siguiente.d, dia_siguiente.m,dia_siguiente.a);
                }
            }
        }
        else
        {

            if(dia_siguiente.d >= 1 && dia_siguiente.d <= 28)
            {
                printf("Fecha %d-%d-%d \n",dia_siguiente.d,dia_siguiente.m,dia_siguiente.a);
            }
            else
            {
                dia_siguiente.d = 1;
                dia_siguiente.m++;
                if(dia_siguiente.m == 13)
                {
                    dia_siguiente.a++;
                    dia_siguiente.m = 1;
                    printf("Fecha %d-%d-%d \n",dia_siguiente.d, dia_siguiente.m,dia_siguiente.a);
                }
                else
                {
                    printf("Fecha %d-%d-%d \n",dia_siguiente.d, dia_siguiente.m,dia_siguiente.a);
                }
            }
        }
        break;

    }
}

void sumar_dias(t_fecha dia, int cant_dias)
{
    t_fecha nuevo_dia = dia;
    int i;

    for(i=0; i<cant_dias; i++)
    {
        switch(nuevo_dia.m)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            nuevo_dia.d++;
            if(nuevo_dia.d == 32)
            {
                nuevo_dia.d = 1;
                nuevo_dia.m++;
                if(nuevo_dia.m == 13)
                {
                    nuevo_dia.m = 1;
                    nuevo_dia.a++;
                }
            }

            break;
        case 4:
        case 6:
        case 9:
        case 11:
            nuevo_dia.d++;
            if(nuevo_dia.d == 31)
            {
                nuevo_dia.d = 1;
                nuevo_dia.m++;
                if(nuevo_dia.m == 13)
                {
                    nuevo_dia.m = 1;
                    nuevo_dia.a++;
                }
            }

            break;
        case 2:
            if(anio_bisiesto(dia.a)==0)
            {
                if(nuevo_dia.d = 30)
                {
                    nuevo_dia.d = 1;
                    nuevo_dia.m++;
                    if(nuevo_dia.m == 13)
                    {
                        nuevo_dia.m = 1;
                        nuevo_dia.a++;
                    }
                }
            }
            else
            {
                if(nuevo_dia.d = 29)
                {
                    nuevo_dia.d = 1;
                    nuevo_dia.m++;
                    if(nuevo_dia.m == 13)
                    {
                        nuevo_dia.m = 1;
                        nuevo_dia.a++;
                    }
                }
            }
            break;
        }
    }

    printf("Nueva fecha sumado %d dias :%d-%d-%d\n",cant_dias,nuevo_dia.d,nuevo_dia.m,nuevo_dia.a);
}
