#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"
#include <time.h>
#include <assert.h>

int main(int argc, char const *argv[])
{
    int tab[3][5] = {{1,2,6,7,3},
                     {8,2,9,0,7},
                     {3,0,8,2,6}},
        lignes = 3,colonnes = 5, min, nombre, occ = 0;
    for (int i = 0; i < lignes; i++)
    {
        for (int j = 0; j < colonnes; j++)
        {
            printf("%i ",tab[i][j]);
            if (min > tab[i][j])
            {
                min = tab[i][j];
            }
        }
        printf("\n");
    }
    printf("Donner un nombre: ");
    scanf("%i",&nombre);
    for (int i = 0; i < lignes; i++)
    {
        for (int j = 0; j < colonnes; j++)
        {
            if(nombre == tab[i][j])
            {
                occ ++;
            }
        }
    }
    printf("Il y a %i fois %i",occ,nombre);
    return 0;
}