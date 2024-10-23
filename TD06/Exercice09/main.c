#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"
#include <time.h>
#include <assert.h>
#include <string.h>

int main()
{
    int const MAXTAB = 20;
    int tab[MAXTAB];
    int taille = 10;
    int *p = tab;
    int valeur;
    saisirTableau(tab, taille, MAXTAB);
    afficherTableau(tab, taille);
    return 0;

}
