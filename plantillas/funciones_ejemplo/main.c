#include <stdio.h>
#include <stdlib.h>
int suma(int,int); // par�metros formales => prototipo //respetar orden,cantidad y tipo
int main()
{
    int resu;
    resu=suma(10,10); //llamada de la funci�n respetar orden,cantidad y tipo

    printf("%d",resu);
    return 0;
}
int suma(int a,int b) //par�metros reales => //respetar orden,cantidad y tipo
{
    return a+b;
}
