#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"

int main(int argc, char const *argv[])
{
    int taille1, taille2;
    int *pTab1, *pTab2, *pTab3;
    printf("Saisir la taille du tableau 1: ");
    scanf("%i", &taille1);
    pTab1 = (int *)malloc(taille1 * sizeof(int));
    saisirTableau(pTab1, taille1, 100);
    printf("Saisir la taille du tableau 2: ");
    scanf("%i", &taille2);
    pTab2 = (int *)malloc(taille2 * sizeof(int));
    saisirTableau(pTab2, taille2, 100);
    printf("Tableau 1: ");
    afficherTableau(pTab1, taille1);
    printf("Tableau 2: ");
    afficherTableau(pTab2, taille2);
    pTab3 = (int *)malloc((taille1 + taille2) * sizeof(int));
    pTab3 = concatener_tab(pTab1, taille1, pTab2, taille2, pTab3);
    printf("Tableau 3: ");
    afficherTableau(pTab3, taille1 + taille2);
    free(pTab1);
    free(pTab2);
    return 0;
}