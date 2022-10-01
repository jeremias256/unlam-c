#include "header.h"

int main()
{
    Fecha f;
    int seleccion,diasASumar;

    ingresarFechaValida(&f);//F404

    printf("%d/%d/%d \n", f.dia, f.mes, f.anio);
    printf("\nFecha correcta :)\n");

    puts("Ingrese: \n1 para sumar dias al mes");
    puts("0 para salir");
    scanf("%d",&seleccion);

    while(seleccion!=0)
    {
        switch(seleccion)
        {
        case 1:
            puts("Ingrese la cantidad de dias a sumar a nuestra fecha InSitu");
            scanf("%d",&diasASumar);
            //retorna el resultado de fecha+diasAsumar
            sumarDiasAFechaInSitu( &f, diasASumar);
            puts("Resultado de la nueva fecha");
            printf("%d/%d/%d \n", f.dia, f.mes, f.anio);
            break;
        }
        puts("Ingrese: \n1 para sumar dias al mes");
        puts("0 para salir");
        scanf("%d",&seleccion);
    }

    puts("Fin de programa");
    return 0;
}
