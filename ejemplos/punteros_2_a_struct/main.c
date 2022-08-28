#include <stdio.h>
#include <stdlib.h>

struct fecha
{
    int dia;
    int mes;
    int anio;
}; // estructura tipo fecha

int main()
{
    stuct fecha hoy; //hoy es una variable estructura fecha
    struct fecha *p; //p es un puntero a estructura fecha
    p=&hoy; //p apunta a hoy

    return 0;
}
