#include <stdio.h>
#include <stdlib.h>

int buscar_menor_pos(int *vec, int ce);

int main()
{
    int vec[] = {-1000,-4,10,999,-2000,16,98,-100,777,423};
    buscar_menor_pos(vec,10);
    return 0;
}

int buscar_menor_pos(int *vec, int ce)
{
    int i,pos_min=0,min=*vec;
    for(i=1; i<ce; i++)
    {
        if(min > *(vec+1))
        {
            min = *vec;
            pos_min = i;
        }
        vec++;
    }
    printf("La pos del menor es : %d\n",pos_min);
    printf("El menor es : %d",min);
}
