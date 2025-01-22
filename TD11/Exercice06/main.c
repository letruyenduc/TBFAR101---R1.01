#include <stdio.h>
#include <stdlib.h>
#include "proto.h"

int main(int argc, char const *argv[])
{
    int a, b, res;
    printf("Entrez un nombre nb : ");
    scanf("%i", &a);
    printf("Entrez un entier N: ");
    scanf("%i", &b);
    res = estPuissanceDeN(a, b);
    if (res == 1)
    {
        printf("Le nombre %i, est une puissance de %i", a, b);
    }
    else
    {
        printf("Le nombre %i n'est pas une puissance de %i", a, b);
    }
    return 0;
}
