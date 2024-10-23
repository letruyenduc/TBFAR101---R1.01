#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"
#include <time.h>
#include <assert.h>
#include <string.h>

int main()
{
    int a = 2, p = 11;
    printf("Avant calcul, la valeur de a est : %i\n", a);
    calculPuissance(&a, p);
    printf("La puissance vaut : %i\n", a);
    assert(a == 2048);
    return 0;
}
