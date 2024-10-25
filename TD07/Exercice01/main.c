#include <stdio.h>
#include <stdlib.h>
#include "TADPoint2D.h"
int main(void)
{
    Point2D P1, P2;
    P1 = creerPoint2D(2, 4);
    P2 = creerPoint2DDefaut();
    P2 = creerPoint2DCopie(P1);
    afficherPoint(P1);
    printf("Nouvelle abscisse : ");
    modifAbscisse(&P2, saisieEntier(0, 10));
    printf("Nouvelle ordonnee : ");
    modifOrdonnee(&P2, saisieEntier(0, 10));
    afficherPoint(P2);
    return 0;
}
