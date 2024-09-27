#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"


int main(int argc, char const *argv[])
{
    int tab[5],taille = 5,total = 0,nombre;
    for (int i = 0; i < taille; i++)
    {
        tab[i] = saisieEntier(-10,10);
        if (tab[i]>0)
        {
            total += tab[i];
        }
    }
    printf("La somme totale est: %i\n",total);
    return 0;
}
