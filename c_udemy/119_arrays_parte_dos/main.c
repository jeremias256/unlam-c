#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Array chars: \n");
    char array_char[4] = {'g','g','w','p'};
    printf("Mensaje: \n");

    for(i=0;i<4;i++)
    {
        printf("%c ",array_char[i]);
    }

    printf("\n\n");

    printf("\nArray string: \n");
    char array_string[30] = "Quiero comer milanesa\n";
    printf("%s",array_string);

    printf("\n\n");


    char b[30];
    printf("Ingrese nombre se guardara en un array de strings\n");
    gets(b);
    printf("Tu nombre es : %s",b);

    return 0;
}
