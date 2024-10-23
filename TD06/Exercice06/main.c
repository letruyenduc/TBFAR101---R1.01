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
    afficherTableau(p, taille);
    ajouterEntier(p, &taille, 10);
    afficherTableau(p, taille);
    return 0;

}
