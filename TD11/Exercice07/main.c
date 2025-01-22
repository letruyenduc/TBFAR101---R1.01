#include <stdio.h>
#include <stdlib.h>
#include "proto.h"

int main(int argc, char const *argv[])
{
    int a, b, res;
    printf("Entrez un nombre nb : ");
    scanf("%i", &a);
    printf("Entrez un entier i: ");
    scanf("%i", &b);
    res = estCarreDe(a, b);
    if (res == -1)
    {
        printf("%i n'est pas carré d'un nombre", a);
    }
    else
    {
        printf("%i est carré de %i", a, res);
    }
    return 0;
}
