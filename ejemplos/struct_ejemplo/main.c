#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct auto1
{
    char marca[13];
    int anioFabricacion;
    char color[9];
    float precio;
};

void main()
{
    struct auto1 automovil,autito;
    int j;
    float pesos;
    //clrscr();
    system("cls");

    for(j=1;j<2;j++)
    {
        printf("Ingrese marca, año, color y precio\n");
        scanf("%s%d%s%f",automovil.marca,&automovil.anioFabricacion,automovil.color,&pesos);
        fflush(stdin);
        automovil.precio=pesos;
        autito=automovil;

        if(autito.precio<9000)
        {
            printf("%-13s,%-9s,%5d\n", autito.marca,autito.color,autito.anioFabricacion);
        }
        getch();
    }
}
