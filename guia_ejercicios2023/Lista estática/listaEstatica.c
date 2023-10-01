
#include "listaEstatica.h"

int buscarMenor(int *pv, int desde, int hasta);
void intercambiar(int *a, int *b);

Lista crearLista(Lista *pl)
{
    Lista lista;

    puts("Ingrese cantidad de elementos de la lista");
    scanf("%d", &lista.ce);

    for(int i = 0; i <= lista.ce-1; i++)
    {
        printf("Ingrese elemento nro %d: \n", i+1);
        scanf("%d", &lista.vec[i]);
    }

    return lista;
}
void crearListaV2(Lista *pl)
{

    puts("Ingrese cantidad de elementos de la lista");
    scanf("%d", &pl->ce);

    for(int i = 0; i <= pl->ce-1; i++)
    {
        printf("Ingrese elemento nro %d: \n", i+1);
        scanf("%d", &pl->vec[i]);
        /** pl++; ARITMETICA DE PUNTEROS ?? **/
    }
}
void ordenarLista(Lista *pl)
{
    int menor;

    for(int i=0; i < pl->ce-1; i++)
    {
        menor = buscarMenor(pl->vec, i, pl->ce-1);

        if(menor != i)
            intercambiar(&pl->vec[menor], &pl->vec[i]);
    }
}
int buscarMenor(int *pv, int desde, int hasta)
{
    int m = desde;

    for(int j = desde+1; j <= hasta; j++)
    {
        if(pv[j] < pv[m])
            m = j;
    }

    return m;
}
void intercambiar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int listaInsertarOrd(Lista *pl, int elem)
{
	if(pl->ce == CAP)//chequeo si el vector esta lleno
		return SIM_MEM;

	int i = 0;

	while(i < pl->ce && elem == pl->vec[i])
		i++;

	if(i < pl -> ce && elem == pl -> vec[i])
		return DUPLICADO;

	for(int j = pl -> ce-1; j >= i; j--)
		pl -> vec[j+1] = pl -> vec[j];

	pl -> vec[i] = elem;
	pl -> ce ++;

	return TODO_OK;
}
void mostrarLista(const Lista *pl)
{
    printf("Elementos en la lista: \n");
    for (int i = 0; i < pl->ce; i++)
    {
        printf("%d\t", pl->vec[i]);
    }
    printf("\n");
}
