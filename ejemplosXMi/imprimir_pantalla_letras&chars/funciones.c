void version4()
{
    mostrarIntervalo('A','Z');
    mostrarIntervalo('a','z');
    mostrarIntervalo('0','9');
}
void mostrarIntervalo(const char ini,const char fin)
{
    char i;
    for (i=ini;i<=fin;i++)
        {
        printf("\n %c | %d",i,i);
        }
}
