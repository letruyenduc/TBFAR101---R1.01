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
    int sommePlus, sommeMoins;
    saisirTableau(p, taille,MAXTAB);
    afficherTableau(tab, taille);
    calculSomme(p, taille, &sommePlus, &sommeMoins);
    printf("Somme des éléments positifs : %d\n", sommePlus);
    printf("Somme des éléments négatifs : %d\n", sommeMoins);
    return 0;

}
