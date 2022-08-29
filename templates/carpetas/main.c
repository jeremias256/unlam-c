#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    Fecha f;
    ingresarFechaValida(&f);
    printf("%d/%d/%d \n", f.dia, f.mes, f.anio);
    printf("\nFecha correcta :)");
    return 0;
}
