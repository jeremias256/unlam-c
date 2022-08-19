#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nombre[20];
    int nota;
}t_alumno;

tFecha* armarFecha() //función
{
    tFecha f;
    f.d=30;
    f.m=8;
    f.a=2021;
    return &f;
}

void mostrarFecha(tFecha *p)
{
    printf("%02d - %02d - %04d \n");
    p->d;
    p->m; // operador fecha
    p->a;
}

int main()
{
    t_alumno datoAlum={"pedro",9};
    t_alumno *p;
    p=&datoAlum;
    printf("nombre del alumno : %s\n",p->nombre);
    printf("nota del alumno : %d",p->nota);

    return 0;
}
