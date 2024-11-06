#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"

int main(int argc, char const *argv[])
{
    int lignes, colonnes;
    int **tab;
    printf("Saisir le nombre de lignes: ");
    scanf("%i", &lignes);
    printf("Saisir le nombre de colonnes: ");
    scanf("%i", &colonnes);


    tab = (int **)malloc(lignes * sizeof(int *));
    for (int i = 0; i < lignes; i++)
    {
        *(tab+i) = (int *)malloc(colonnes * sizeof(int));
        saisirTableau(*(tab+i), colonnes, 100);
    }   
    for (int i = 0; i < lignes; i++)
    {
        afficherTableau(*(tab+i), colonnes);
    }
    for (int i = 0; i < lignes; i++)
    {
        free(*(tab+i));
    }
    free(tab);
    return 0;
}

