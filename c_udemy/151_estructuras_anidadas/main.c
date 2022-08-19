#include <stdio.h>
#include <stdlib.h>

struct infoDireccion
{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};
struct empleado
{
    char nombre[30];
    struct infoDireccion dirEmpleado;
    double salario;
}empleados[2];

int main()
{
    int i;
    for(i=0;i<2;i++)
    {
        fflush(stdin);
        printf("%d : Escribe nombre\n",i+1);
        gets(empleados[i].nombre);

        printf("%d : Escribe su direccion\n",i+1);
        gets(empleados[i].dirEmpleado.direccion);
        printf("%d : Escribe su ciudad\n",i+1);
        gets(empleados[i].dirEmpleado.ciudad);
        printf("%d : Escribe su provincia\n",i+1);
        gets(empleados[i].dirEmpleado.provincia);
        printf("%d : Ingrese su salario\n",i+1);
        scanf("%lf",&empleados[i].salario);
    }

    for(i=0;i<2;i++)
    {
        printf("\t Datos empleados \t\n");
        printf("\t Nombre: %s \t\n",empleados[i].nombre);
        printf("\t Direccion: %s\t\n",empleados[i].dirEmpleado.direccion);
        printf("\t ciudad: %s\t\n",empleados[i].dirEmpleado.ciudad);
        printf("\t Provincia: %s\t\n",empleados[i].dirEmpleado.provincia);
        printf("\t Salario: %.2f\t\n",empleados[i].salario);
    }


    return 0;
}
