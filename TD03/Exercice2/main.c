#include <stdlib.h>
#include <stdio.h>
#include "lib.h"

int main()
{
    int nb, couleur;
     char c;
    nb = saisieEntier(0, 10);
    couleur = saisieEntier(0,15);
    
    printf("Saisir charactere: ");
    fflush(stdin);
    scanf("%c",&c);
    setColor(couleur);
    ligne(nb,c);
    return 0;
}
