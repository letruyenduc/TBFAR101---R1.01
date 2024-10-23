#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"
#include <time.h>
#include <assert.h>
#include <string.h>

int main()
{
    int tab[10] = {5, 2, 8, 1, 9, 4, 7, 6, 3, 0};
    int *p = tab;
    int taille = 10;
    afficherTableau(p, taille);
    return 0;
}
