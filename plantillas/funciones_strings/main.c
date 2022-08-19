#include <stdio.h>
#include <conio.h>
#include <string.h>
// strlen : determina longitud de la cadena

void main ()
{
    char cadena [21];
    printf ("Ingrese una cadena de no más de 20 caracteres \n");
    gets (cadena);
    printf ("La cadena ingresada contiene: %d caracteres", strlen(cadena) );
    getch ();
}

//strcpy: Copia desde un cadena de origen hacia una cadena de destino.
void main ()
{
    char original [15], copia [15];
    printf ("Ingrese una cadena que sera luego copiada \n");
    gets (original);
    strcpy (copia, original);
    printf ("La cadena original es: %s y la copia es: %s", original, copia );
    getch ();
}

//Función strcat: La misma concatena (añade) una cadena detrás de otras quedando
//el resultado en la cadena que se encuentra en primer orden.

void main ()
{
    char aceptor [40] = “Se agrego lo siguiente”, dador [] =”, me agregue”;
    printf ("Las cadenas por separado son: \n\t %s\n\t %s", aceptor, dador);
    strcat (aceptor, dador);
    printf ("\nLas cadenas unificadas son: \n\t %s ", aceptor );
    getch ();
}

//Función strcmp: Esta función compara dos cadenas y devuelve el resultado de la
// comparación.

//El valor que devuelve que será el resultado de la comparación es el siguiente:
//Si las cadenas son iguales devolverá un cero (0)
//Si la cadena 1 es mayor que la cadena 2 devolverá un valor positivo
//Si la cadena 1 es menor que la cadena 2 devolverá un valor negativo

void main ()
{
    char receptor [20] interna [] ="PARA COMPARAR"; //inicialización de una cadena
    printf ("Ingrese una cadena a comparar con una cadena interna \n");
    gets (receptor);
    if (strcmp (receptor, interna) == 0)
        printf ("\Ambas cadenas son iguales" );
    else if (strcmp (strcmp (receptor, interna) > 0 )
             printf ("\nLa cadena ingresada es mayor que la cadena interna");
             else
                 printf ("\nLa cadena interna es mayor que la cadena ingresada");
                 getch ();
}
