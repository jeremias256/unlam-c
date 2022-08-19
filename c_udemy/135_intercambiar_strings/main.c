#include <stdio.h>
#include <stdlib.h>

int main()
{

    char string1[50] = "Programacion en C";
    char string2[50] = "Programacion en Python";
    char string_pivote[50];

    printf("strcpy(a,b) devuelve el array copiado \n");
    printf("Copia el string b en a\n");

    printf("Antes del intercambio\n");
    printf("string1 = %s \n",string1);
    printf("string2 = %s \n",string2);

    printf("\n\n");

    strcpy(string_pivote,string2);
    strcpy(string2,string1);
    strcpy(string1,string_pivote);

    printf("\n\n");

    printf("Despues del intercambio\n");
    printf("string1 = %s \n",string1);
    printf("string2 = %s \n",string2);


    return 0;
}
