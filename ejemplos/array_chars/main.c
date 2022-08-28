#include <stdio.h>
#include <conio.h>
void main()
{
    char nombres [20], apellido [15];

    printf ("Ingrese nombre/s del alumno separados por un espacio: ");
    gets (nombres); // gets: función que se utiliza para leer cadenas (string)

    printf ("\nIngrese Apellido: ");
    gets (apellido);

    printf ("\n%s, %s", apellido, nombres);
    getch();
}
