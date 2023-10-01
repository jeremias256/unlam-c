
#include "fecha.h"

int main()
{
    int dias,dias2;
    Fecha fechaInicio = {19,02,2001};
    Fecha resultadoDiaSiguiente, resultadoSumarNDias, resultadoRestarNDias;

    printf("*****************************************************************************\n");
    printf("*                                                                           *\n");
    printf("*                              EJ 14                                        *\n");
    printf("*                                                                           *\n");
    printf("*****************************************************************************\n");
    //ingresarFecha(&fechaInicio);
    //printf("La fecha ingresada es: %d/%d/%d\n", fechaInicio.a, fechaInicio.m, fechaInicio.d);
    mostrarFecha(&fechaInicio);
    printf("*****************************************************************************\n");
    printf("*                                                                           *\n");
    printf("*                              EJ 15                                        *\n");
    printf("*                                                                           *\n");
    printf("*****************************************************************************\n");
    resultadoDiaSiguiente = diaSiguiente(&fechaInicio);
    printf("Dia siguiente es: %d/%d/%d\n", resultadoDiaSiguiente.a, resultadoDiaSiguiente.m, resultadoDiaSiguiente.d);
    printf("*****************************************************************************\n");
    printf("*                                                                           *\n");
    printf("*                              EJ 16                                        *\n");
    printf("*                                                                           *\n");
    printf("*****************************************************************************\n");
    puts("Ingrese la cantidad de dias que quiere sumar");
    //scanf("%d", &dias);
    dias = 1;
    resultadoSumarNDias = sumarDias(&fechaInicio, dias);
    printf("Resultado de sumar N dias es: %d/%d/%d\n", resultadoSumarNDias.a, resultadoSumarNDias.m, resultadoSumarNDias.d);
    printf("*****************************************************************************\n");
    printf("*                                                                           *\n");
    printf("*                              EJ 17                                        *\n");
    printf("*                                                                           *\n");
    printf("*****************************************************************************\n");
    puts("Ingrese la cantidad de dias que quiere restar");
    scanf("%d", &dias2);
    resultadoRestarNDias = restarDias(&fechaInicio, dias2);
    printf("Resultado de restar N dias es: %d/%d/%d\n", resultadoRestarNDias.a, resultadoRestarNDias.m, resultadoRestarNDias.d);

    printf("*****************************************************************************\n");
    printf("*                                                                           *\n");
    printf("*                              FIN                                          *\n");
    printf("*                                                                           *\n");
    printf("*****************************************************************************\n");
}
