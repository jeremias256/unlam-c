#include "header.h"

int main()
{
    Fecha fDesde, fHasta, fSuma, fResta;
    int seleccion, diasASumar, diasARestar, diasEntreFechas;

    ingresarFechaValida(&fDesde);//F404

    printf("%d/%d/%d \n", fDesde.dia, fDesde.mes, fDesde.anio);
    printf("\nFecha correcta :)\n");

    puts("Ingrese: \n");
    puts("5 Para calcular los días entre dos fechas");
    puts("4 Para restar dias al mes, no modifica fecha original");
    puts("3 para restar dias al mes, se modificara fecha original");
    puts("2 para sumar dias al mes, se modificara fecha original");
    puts("1 para sumar dias al mes no modifica fecha original");
    puts("0 para salir");
    scanf("%d",&seleccion);

    while(seleccion!=0)
    {
        switch(seleccion)
        {
        case 1:
            puts("Ingrese la cantidad de dias a sumar a nuestra fecha");
            puts("No se modificara la fecha original");
            scanf("%d",&diasASumar);
            //retorna el resultado de fecha+diasAsumar en una nueva var
            sumarDiasAFecha( &fDesde, diasASumar, &fSuma);

            puts("Resultado de la nueva fecha");
            printf("%d/%d/%d \n", fSuma.dia, fSuma.mes, fSuma.anio);
            break;
        case 2:
            puts("Ingrese la cantidad de dias a sumar a nuestra fecha");
            puts("Modificara la fecha original");
            scanf("%d",&diasASumar);
            //retorna el resultado de fecha+diasAsumar en una nueva var
            sumarDiasAFechaInSitu( &fDesde, diasASumar);

            puts("Resultado de la nueva fecha");
            printf("%d/%d/%d \n", fDesde.dia, fDesde.mes, fDesde.anio);
            break;
        case 3:
            puts("Ingrese la cantidad de dias a restar a nuestra fecha");
            puts("Modificara la fecha original");
            scanf("%d",&diasARestar);
            restarDiasAFechaInSitu( &fDesde, diasARestar);
            puts("Resultado de la nueva fecha");
            printf("%d/%d/%d \n", fDesde.dia, fDesde.mes, fDesde.anio);
            break;
        case 4:
            puts("Ingrese la cantidad de dias a restar a nuestra fecha");
            puts("No se modificara la fecha original");
            scanf("%d",&diasARestar);
            restarDiasAFecha( &fDesde, diasARestar, &fResta);
            puts("Resultado de la nueva fecha");
            printf("%d/%d/%d \n", fResta.dia, fResta.mes, fResta.anio);
            break;
        case 5:
            puts("Ingrese fecha número 2:");
            ingresarFechaValida(&fHasta);
            diasEntreFechas = diferenciaEntreFechas(&fDesde, &fHasta);
            printf("La diferencia de dias entre las dos fechas es de : %d dias\n",diasEntreFechas);
        }
        puts("Ingrese: \n");
        puts("5 Para calcular los días entre dos fechas");
        puts("4 Para restar dias al mes, no modifica fecha original");
        puts("3 Para restar dias al mes, se modificara fecha original");
        puts("2 Para sumar dias al mes, se modificara fecha original");
        puts("1 Para sumar dias al mes, no modifica fecha original");
        puts("0 Para salir");
        scanf("%d",&seleccion);
    }

    puts("Fin de programa");
    return 0;
}
