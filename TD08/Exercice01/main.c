#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"

int main(int argc, char const *argv[])
{
    int taille;
    int tableau[taille];
    int *tab;
    printf("Donner la taille du tableau : ");
    scanf("%i", &taille);
    tab = (int *)malloc(taille * sizeof(int));
    saisirTableau(tab, taille, 100);
    afficherTableau(tab, taille);
    free(tab);
    return 0;
}
