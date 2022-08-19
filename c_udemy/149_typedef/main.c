#include <stdio.h>
#include <stdlib.h>

/* typedef structNombreDeLaEstructura{
        variable_1;
        variable_2;
        variable_3;
    }



*/

int main()
{

    // Definimos un nuevo tipo llamado "miTipoDeDato"
    // Esto solo es otra manera de declarar un entero
    typedef int miTipoDeDato;
    // Ahora podemos crear variables del tipo "miTipoDeDato"
    miTipoDeDato variable1;

    //tambien podemos seguir usando int
    int variable2;

    variable1 = 322;
    variable2 = 644;

    printf("variable 1 : %d\n",variable1);
    printf("variable 2 : %d\n",variable2);
    return 0;
}
