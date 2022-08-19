#include<stdio.h>
int esFechaValida(int,int,int);
int cantidadDiasDelMes(int,int);
int bisiesto(int);
int main ()
{
    int d,m,a,df,mf,af,n;
    do
    {
        printf("Ingresar fecha:\n");
        scanf("%d%d%d",&d,&m,&a);
    }while(esFechaValida(d,m,a)!=1);
    printf("Cantidad de dias a sumar: ");
    scanf("%d",&n);
    df=d+n;
    mf=m;
    af=a;
    while(df>cantidadDiasDelMes(mf,af))
    {
        df-=cantidadDiasDelMes(mf,af);
        mf++;
        if(mf>12)
        {
            mf=1;
            af++;
        }
    }
    printf("\n%d/%d/%d mas %d es: %d/%d/%d\n",d,m,a,n,df,mf,af);
    return 0;
}
int esFechaValida(int d,int m,int a)
{
    int r=0;
    if(a>=1582)
    {
        if(m>=1&&m<=12)
        {
            if(d>=1&&d<=cantidadDiasDelMes(m,a))
                r=1;
        }
    }
    return r;
}
int cantidadDiasDelMes(int m,int a)
{
    int cdm;
    if(m==4||m==6||m==9||m==11)
        cdm=30;
    else
    {
        if(m==2)
            cdm=28+bisiesto(a);
        else
            cdm=31;
    }
    return cdm;
}
int bisiesto(int a)
{
  if(a%4==0&&a%100!=0||a%400==0)
    return 1;
  else
    return 0;
}
