#include <stdio.h>
#include <stdlib.h>
#include "TADPoint2D.h"
int main(void)
{
    Point2D P1, P2;
    P1 = creerPoint2D(2, 4);
    P2 = creerPoint2D(8, 2);
    float dist;
    int taille = saisieEntier(1, 10);
    Point2D tab[taille];
    initTableauRandom(tab, taille, 10);
    dist = distance(&P1, &P2);
    printf("Distance entre P1 et P2 : %.2f\n", dist);
    return 0;
}
