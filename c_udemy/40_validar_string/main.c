#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char nombre[20],signo [20];

    printf("Escribe tu nombre\n :");
    fgets(nombre,20,stdin);

    printf("Escribe tu signo\n");
    fgets(signo,20,stdin);

    if(strcmp(signo,"aries")==0)
    {
        printf("Su nombre es : %s\n",nombre);
    }
    else
    {
        printf("Su signo no es aries\n");
    }

    printf("%s signo\n ",signo);
    printf("%s nombre\n",nombre);

    return 0;
}
