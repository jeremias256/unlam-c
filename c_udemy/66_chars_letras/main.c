#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra = 'a';
    do
    {
        printf("letra %c \n",letra);
        letra++;
    }while(letra <='z');

    return 0;
}
