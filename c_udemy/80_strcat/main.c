#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//* strcat(destino, fuente);
//* Concatena la cadena fuente en el destin. Considerar tamaños
//* Debe tener un tamaño que soporte ambas

int main()
{
    char cadena1[]= "Jeremias",cadena2[]="Menacho";
    char destino[100]={0};

    //concatenar
    strcat(destino, cadena1);
    strcat(destino, "-");
    strcat(destino, cadena2);

    printf("%s ",destino);

    return 0;
}
