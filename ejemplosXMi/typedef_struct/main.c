#include <stdio.h>
#include <stdlib.h>

struct alumno
{
    int edad,peso;
};

typedef struct
{
    int edad,peso;
}universitario;

int main()
{
    struct alumno tiago;
    tiago.edad = 15;
    tiago.peso = 40;

    printf("edad alumno : %d\n",tiago.edad);
    printf("peso alumno : %d\n",tiago.peso);

    ////////////////////////////////////////////////////////////////////////

    universitario jeremias;
    jeremias.edad = 29;
    jeremias.peso = 90;

    printf("edad universitario : %d\n",jeremias.edad);
    printf("peso universitario : %d\n",jeremias.peso);

    return 0;
}
