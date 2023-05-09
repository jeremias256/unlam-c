#include <stdio.h>
#include <stdlib.h>

    struct alumno {
    int edad, peso;
    };

    typedef struct{
    int edad,peso;
    } alumno;

    typedef int entero;
int main()
{
    entero numero=5;
    printf("%d\n",numero);

    alumno alum;//con typedef struct
    struct alumno alum; //sin con typedef struct
    printf("Cargue los datos del alumno: ");
    scanf("%d%d",&alum.edad,&alum.peso);

    printf("%d\n",alum.edad);
    printf("%d\n",alum.peso);

    return 0;
}
