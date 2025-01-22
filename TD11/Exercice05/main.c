#include <stdio.h>
#include <stdlib.h>
#include "proto.h"

int main(int argc, char const *argv[])
{
    int a, b, res;
    printf("Entrez un entier n : ");
    scanf("%i", &a);
    printf("Entrez un entier X entre 10 et 99: ");
    do
    {
        scanf("%i", &b);
        if(b < 10 || b > 99 ){
            printf("\nErreur, X doit etre entre 10 et 99, resaissisez un nombre X :");
        }
    } while (b < 10 || b > 99);
    res = ex5(a, b);
    printf("Le resultat est %i", res);
    return 0;
}
