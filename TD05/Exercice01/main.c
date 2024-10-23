#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"
#include <time.h>
#include <assert.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int tab[20];
    int const MAXTAB = 20; 
    int nbvaleur;
    int taille;
    int pos;
    printf("Combien de valeur voulez vous mettre ? : ");
    scanf("%i",&nbvaleur);
    assert(nbvaleur < MAXTAB);
    initTableauRandom(tab,nbvaleur,MAXTAB);
    afficheTableau(tab,nbvaleur);
    printf("\nSaisir une position du tableau: ");
    scanf("%i",&pos);
    taille = suppElemPos(nbvaleur,tab,pos);
    afficheTableau(tab,taille);
    return 0;
}
