#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string1[50] = "perro";
    char string2[50] = "gato";
    char string3[50] = "lagarto";
    char string4[50] = "gato";

    printf("Para comprar tama%co de dos strings se usa strcmp(a,b)",164);
    printf("\n Si a > b retorna : %d",strcmp(string3,string4));
    printf("\n Si a = b retorna : %d",strcmp(string3,string3));
    printf("\n Si a < b retorna : %d",strcmp(string2,string3));


    return 0;
}
