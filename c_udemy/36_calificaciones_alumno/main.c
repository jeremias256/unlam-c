#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;

    printf("Ingrese nota del examen\n:");
    scanf("%i",&nota);

    switch(nota)
    {
        case 1 : printf("Tu nota es %i ",nota);break;
        case 2 : printf("Tu nota es %i ",nota);break;
        case 3 : printf("Tu nota es %i ",nota);break;
        case 4 : printf("Tu nota es %i ",nota);break;
        case 5 : printf("Tu nota es %i ",nota);break;
        case 6 : printf("Tu nota es %i ",nota);break;
        case 7 : printf("Tu nota es %i ",nota);break;
        case 8 : printf("Tu nota es %i ",nota);break;
        case 9 : printf("Tu nota es %i ",nota);break;
        case 10 : printf("Tu nota es %i ",nota);break;
        default : printf("Nota invalida %i: ",nota);break;
    }

    return 0;
}
