#include <stdio.h>
#include <stdlib.h>

struct persona
{
    char nombre[20];
    int edad;
}persona1,persona2,persona3;
//persona1 = {"Jeremias",28},
//persona2 = {"Soledad",27};

int main()
{

    printf("Escribe tu nombre: \n");
    gets(persona1.nombre);
    persona1.edad = 29;

    fflush(stdin);

    printf("Escribe tu nombre: \n");
    gets(persona2.nombre);
    printf("Escribe tu edad: \n");
    scanf("%d", &persona2.edad);

    fflush(stdin);

    printf("Escribe tu nombre: \n");
    gets(persona3.nombre);
    printf("Escribe tu edad: \n");
    scanf("%d", &persona3.edad);

    printf("Persona 1 nombre : %s\n", persona1.nombre);
    printf("Persona 1 edad : %d\n", persona1.edad);

    printf("Persona 2 nombre : %s\n", persona2.nombre);
    printf("Persona 2 edad : %d\n", persona2.edad);

    printf("Persona 3 nombre : %s\n", persona3.nombre);
    printf("Persona 3 edad : %d\n", persona3.edad);

    return 0;
}
