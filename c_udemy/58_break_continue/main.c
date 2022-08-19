#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Escribe el numero que sera ignorado del 0-20\n");
    scanf("%i",&num);

    for(int i=0;i<20;i++)
    {
        if(num==i)
        {
            continue; // saltea el ciclo
        }
        printf("Numero : %i\n",i);
    }

    printf("******************************\n");

    for (int i=0;i<20;i++)
    {
        if (i==10)
        {
            break; //rompe el ciclo
        }
        printf("Numero : %i\n",i);
    }

    return 0;
}
