#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;//iterador
    while(i<100)
    {
        printf("El valor de i es :%i\n",i);
        i++;//no puede faltar sino sería un bucle infinito
    }

    return 0;
}
