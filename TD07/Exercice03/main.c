#include <stdio.h>
#include <stdlib.h>
#include "TADPoint2D.h"
int main(void)
{
    Point2D P1, P2;
    P1 = creerPoint2D(2, 4);
    P2 = creerPoint2D(8, 12);
    int taille = saisieEntier(1, 10);
    Point2D tab[taille];
    initFigure(tab, taille);
    afficheFigure(tab, taille);
    return 0;
}
