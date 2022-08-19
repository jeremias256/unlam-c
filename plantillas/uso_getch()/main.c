#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main() //cambio de mayus a minus
{
    char xx;
    xx=getche(); //probar ingresando una h y luego *

    while(xx !='$');
    {
        if(islower(xx))
            putchar(toupper(xx));
        else
            putchar(tolower(xx));
        xx = getche(); //ingresando un & se detiene
        fflush(stdin);
    }
}
