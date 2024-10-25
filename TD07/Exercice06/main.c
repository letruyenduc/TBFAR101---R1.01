#include <stdio.h>
#include <stdlib.h>
#include "TADPoint2D.h"
int main(void)
{
    Point2D P1, P2;
    P1 = creerPoint2D(2, 4);
    P2 = creerPoint2D(8, 2);
    float dist;
    int res;
    int MAXTAB = saisieEntier(1, 10);
    Point2D Figure[MAXTAB];
    initFigure(Figure, MAXTAB);
    afficheFigure(Figure, MAXTAB);
    res = perimetreFigure(Figure, MAXTAB);
    printf("Perimetre de la figure : %i\n", res);
    return 0;
}
