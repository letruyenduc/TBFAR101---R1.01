#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include "proto.h"

int main(){
    srand(time(NULL));
    guirlande g;
    int nombreBoules, val, couleurs = 0;
    creerG(&g);
    nombreBoules = nbBoules(g);
    if (estVide(g))
    {
        printf("La guirlande est vide\n");
    }
    else
        printf("La guirlande n'est pas vide\n");
    if (estPleine(g)){
        printf("La guirlande est pleine\n");
    }
    else
        printf("La guirlande n'est pas pleine\n");
    for (int i = 0; i < 10; i++)
    {   
        ajouterBoule(&g, randomInt(1,15));
    }
    
    assert(estVide(g) == 0);

    afficherG(g);

    couleurs = nbCouleurs(g);
    printf("Il y a  %i couleurs dans cette guirlande\n", couleurs);
    return 0;
}