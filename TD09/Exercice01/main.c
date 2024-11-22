#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"

int main(int argc, char const *argv[])
{
    int taille,tailleN,tailleP;
    int *tab;
    int *negatif, *positif;
    printf("Saisir la taille du tableau: ");
    scanf("%i", &taille);
    tab = (int *)malloc(taille * sizeof(int));
    negatif = (int *)malloc(taille * sizeof(int));
    positif = (int *)malloc(taille * sizeof(int));
    saisirTableauNegatif(tab, taille, 100);
    separerNegatifPositif(tab, taille, negatif, &tailleN, positif, &tailleP);
    printf("Tableau: ");
    afficheTableau(tab, taille);
    printf("Negatif: ");
    afficheTableau(negatif, tailleN);
    printf("Positif: ");
    afficheTableau(positif, tailleP);
    return 0;
}
// Copie du dernier exo du TD08