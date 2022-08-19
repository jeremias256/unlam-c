#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char array[10]= "Prueba";
    char array2[10];

    strcpy(array2,array);

    printf("%s\n",array);
    printf("%s",array2);


    return 0;
}
