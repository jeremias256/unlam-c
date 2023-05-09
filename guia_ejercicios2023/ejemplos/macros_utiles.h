#ifndef MACROS_UTILES_H_INCLUDED
#define MACROS_UTILES_H_INCLUDED

#define NUM 322

#define CUADRADO(X) ((X)*(X))

#define ES_MAYUSCULA(C) ((C)>='A' && (C)<='Z')

#define A_MINUSCULA(C) (ES_MAYUSCULA(C)? (C)+'a'-'A': (C))

#define MAYOR(X,Y) ((X)>(Y)?(X):(Y))

#endif // MACROS_UTILES_H_INCLUDED
