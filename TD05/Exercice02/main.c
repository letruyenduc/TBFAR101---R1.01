#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"
#include <time.h>
#include <assert.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int tab[20] = {1,2,3,4,5};
    int const MAXTAB = 20; 
    int taille;
    int valeur;
    int nouvelleTaille = 0;
    printf("Combien de valeur voulez vous mettre ? : ");
    scanf("%i",&taille);
    assert(taille < MAXTAB);
    initTableauRandom(tab,taille,MAXTAB);
    afficheTableau(tab,taille);
    printf("\nSaisir une valeur du tableau: ");
    scanf("%i",&valeur);
    nouvelleTaille = supprimerElement(taille, tab, valeur);
    afficheTableau(tab,nouvelleTaille);
    printf("\n%i",rechercheElement(5,tab,5));
    return 0;
}
