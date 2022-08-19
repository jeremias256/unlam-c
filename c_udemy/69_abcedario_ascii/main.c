#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra = 'a';
    char LETRA = 'A';
    int letraNum = 97;
    int LETRANUM = 65;

    printf("Escribe un n%cmero:\n",163);
    printf("%c%c%c%c\n",72,79,76,65);

    //97 - 122 minusculas
    //65 - 90 MAYUSCULAS

    /*do
    {
        printf("%c. \n",letra);
        letra++;
    }while(letra <= 'z'); //falso rompe ciclo

    do
    {
        printf("%c. \n",LETRA);
        LETRA++;
    }while(LETRA <= 'Z');*/

    ///////////////////////////////////////////////////////
    do
    {
        printf("%c. \n",letraNum);
        letraNum++;
    }while(letraNum <= 'z'); //falso rompe ciclo

    do
    {
        printf("%c. \n",LETRANUM);
        LETRANUM++;
    }while(LETRANUM <= 'Z');


    return 0;
}
