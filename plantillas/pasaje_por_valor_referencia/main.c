# include <stdio.h>
# include <conio.h>

void cambio(int vec[ ]); /* prototipo*/

void main ( )
{
    //clrscr();
    int i, vec[3];
    printf( "Valores antes de llamar a la funcion cambio:\n");
    for (i=0; i<3; i++)
    {
        vec[ i] = i; /*se le asigna a cada elemento del vector el valor del �ndice */
        printf("vec[%d]= %d\t", i, vec[i]);
    }
    cambio(vec);
    printf( "\nValores despu�s de llamar a la funcion cambio:\n");
    for (i=0; i<3; i++)
        printf("vec[%d]= %d\t", i, vec[i]);
    getch();
}
    /* fin de programa principal*/
void cambio(int vec[ ]) /* definici�n de la funci�n cambio*/
{
    int i;
    printf( "\n Valores desde la funci�n despu�s de modificarlos:\n");
    for (i=0; i<3; i++)
    {
        vec[i]=9; /* se le asigna a los tres elementos el valor 9 */
        printf("vec[%d]= %d\t", i, vec[i]);
    }
    return 0;
}
    /*fin funci�n cambio*/
