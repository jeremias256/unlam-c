#include <stdio.h>
#include <stdlib.h>

int main()
{

    //exp1 ? exp2 : exp3;

    int calificacion;
    char nota[20];

    printf("Ingrese una nota de parcial :\n");
    scanf("%d",&calificacion);

    printf("%s\n",calificacion>7 ? "aprobado":"desaprobado");


    return 0;
}
