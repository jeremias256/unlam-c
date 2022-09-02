#include <stdio.h>
#include <stdlib.h>
int busquedaLineal(int,int,int []);
int busquedaBinaria (int ,int,int [ ]);

int main()
{
    int vec[]= {8,15,25,51,91,98,100,142,167,235};
    int numberFound;

    //numberFound=busquedaLineal(67,10,vec);
    numberFound=busquedaBinaria(100,10,vec);
    if(numberFound==-1)
    {
        printf("El numero no se encontro");
    }
    else
    {
        printf("El numero esta en la posicion %d",numberFound,"Es el numero %d",vec[numberFound]);
    }
    return 0;
}

int busquedaLineal(int x, int n, int a[])
{
    int i=0;
    int pos=-1;

    while(i<n && pos==-1)
    {
        if(a[i]==x)
        {
            pos=i;
        }
        i=i+1;
    }
    return pos;
}

//se necesita el vector ordenado
int busquedaBinaria (int x, int n,int a[ ])
{
    int primero=0;
    int ultimo = n-1;
    int central=0;
    int pos = - 1;
    while ( (primero <= ultimo) && (pos == -1) )
    {
        central= (primero + ultimo) / 2;
        if (x== a[central])
            pos = central;
        else if (x > a[central]) primero = central + 1;
        else ultimo = central - 1;
    }
    return pos;
}
