#include <stdio.h>
#include <stdlib.h>
int suma(int,int); // parámetros formales => prototipo //respetar orden,cantidad y tipo
int main()
{
    int resu;
    resu=suma(10,10); //llamada de la función respetar orden,cantidad y tipo

    printf("%d",resu);
    return 0;
}
int suma(int a,int b) //parámetros reales => //respetar orden,cantidad y tipo
{
    return a+b;
}
