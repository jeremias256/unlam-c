#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct fecha
{
    int dia;
    char mes[12];
    int anio;
};

void lee_ayer(struct fecha*);
struct fecha lee_hoy();
void mostrar_fecha(struct fecha);

void main()
{
    struct fecha ayer,hoy;
    system("cls");

    printf("Ingrese la fecha de ayer\n");
    lee_ayer(&ayer);

    printf("\n Ingresa la fecha de hoy \n");
    hoy=lee_hoy();

    printf("\nAyer fue: ");
    mostrar_fecha(ayer);

    printf("\nHoy es: ");
    mostrar_fecha(hoy);

    getch();
}

void lee_ayer(struct fecha *ay)
{
    printf("Dia: ");
    scanf("%d",&ay->dia);
    fflush(stdin);
    printf("Mes: ");
    gets(ay->mes);
    printf("A�o: ");
    scanf("%d",&ay->anio);
    fflush(stdin);
}
struct fecha lee_hoy()
{
    struct fecha aux;
    printf("Dia: ");
    scanf("%d",&aux.dia);
    fflush(stdin);
    printf("Mes: ");
    gets(aux.mes);
    printf("A�o: ");
    scanf("%d",&aux.anio);
    fflush(stdin);
    return aux;
}
void mostrar_fecha(struct fecha most)
{
    printf("%02d-%-s-%4d",most.dia,most.mes,most.anio);
}
