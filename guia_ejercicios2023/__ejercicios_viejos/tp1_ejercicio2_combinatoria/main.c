#include <stdio.h>
#include <stdlib.h>

float factorial(int a);

int main()
{
    int m,n,aux;
    float combinatoria;

    printf("\t Calculo combinatorio :\n");
    printf("\t Ingrese dos numeros\n");
    printf("\t valor para n mayor a 0\n");
    scanf("%d",&n);
    while(n<0)
    {
        printf("\t error, ingrese un valor mayor a 0\n");
        scanf("%d",&n);
    }
    printf("\t valor para m mayor a n\n");
    scanf("%d",&m);
    while(m<n)
    {
        printf("\t error, ingrese un valor mayor a n\n");
        scanf("%d",&m);
    }

    printf("\t valores aceptados, el resultado es:");
    aux=m-n;
    combinatoria = (factorial(m))/(factorial(n)*factorial(aux));

    printf("%f",combinatoria);
    return 0;
}

float factorial(int a)
{
    float calculo=1,i;

    for(i=1;i<=a;i++)
    {
        calculo*=i;
    }

    return calculo;
}
