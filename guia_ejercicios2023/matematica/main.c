
int SampleAddInt(int i1, int i2)
{
    return i1 + i2;
}
double factorial(int num)
{
    double resultado = 1;
    while(num>1)
    {
        resultado*=num;
        num--;
    }
    return resultado;
}
double combinatoria(int m, int n)
{
    if (n>m)
        return 0;
    return factorial(m)/(factorial(n)*factorial(m-n));
}
double calcularExponente(double base, int exponente)
{
    double valorTermino = 1.0;
    double resultado = 1.0;
    int n = 1;

    while (n <= exponente) {
        valorTermino *= base / n;
        resultado += valorTermino;
        n++;
    }

    return resultado;
}
int fibonacci(int num)
{
    int i,
        inicialA = 1,
        inicialB = 1,
        sumaAB = 0;

    for(i=0;i<num;i++)
    {
        sumaAB = inicialA+inicialB;
        inicialA = inicialB;
        inicialB = sumaAB;

        if(num==sumaAB)
            return 1;
    }
    return 0;
}
