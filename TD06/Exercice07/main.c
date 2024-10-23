#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"
#include <time.h>
#include <assert.h>
#include <string.h>

int main()
{
    int const MAXTAB = 20;
    int tab[MAXTAB] = {0,1,2,3,4,5,6,7,8,9};
    int taille = 10;
    int *p = tab;
    int min,max;
    MinMax(p, taille, &min, &max);
    printf("Minimum : %d\n", min);
    printf("Maximum : %d\n", max);
    assert(min == 0 && max == 9);
    return 0;

}
