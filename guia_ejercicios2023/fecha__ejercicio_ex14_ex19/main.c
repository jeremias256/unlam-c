#include "header.h"

int main()
{

    t_fecha dia = {25,4,2022};

    int resultado = validar_fecha(dia);

    if(resultado)
    {
        dia_siguiente_fecha(dia);
        sumar_dias(dia, 285);
    }

    return 0; // 280 // 285 rip
}

