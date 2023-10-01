
//void cargarCadena(char *punteroArray, int ce);
//void mostrarCadena(char *punteroArray, int ce);

cargarCadena(char *punteroArray, int ce)
{
    printf("Ingrese su nombre\n");
    gets(punteroArray);
    punteroArray++;
}
mostrarCadena(char *punteroArray, int ce)
{
    int i;
//    for(i=0;i<ce; i++)
//    {
//        printf("nombre[%d] : %c\n",i,*punteroVec);
//        punteroVec++;
//    }
    for(i=0;i<ce; i++)
    {
        printf("%c",*punteroArray);
        punteroArray++;
    }
}
