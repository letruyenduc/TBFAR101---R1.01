#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"
#include <time.h>
#include <assert.h>
#include <string.h>

int main()
{
    int const MAXTAB = 20;
    int tab[MAXTAB] = {0,1,2,3,4,5,6,7,8,9,9};
    int taille = 11;
    int *p = tab;
    int valeur;
    int nb;
    valeur = saisieEntier(0,50);
    afficherTableau(p, taille);
    nbOccurences(p, taille, valeur, &nb);
    printf("La valeur %d apparaît %d fois dans le tableau.\n", valeur, nb);
    return 0;

}
