#include "TADPoint2D.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Point2D creerPoint2D (int a, int b)
{
    Point2D newP ;
    newP.x = a ;
    newP.y = b ;
    return newP ;
}

Point2D creerPoint2DDefaut ()
{
    Point2D newP ;
    newP.x = 0 ;
    newP.y = 0 ;
    return newP ;
}

Point2D creerPoint2DCopie (Point2D p)
{
    Point2D newP ;
    newP.x = p.x ;
    newP.y = p.y ;
    return newP ;
}

void creerPoint2D_proc (Point2D *newP, int a, int b)
{
    newP->x = a ;
    newP->y = b ;
}

void creerPoint2DDefaut_proc (Point2D *newP)
{
    newP->x = 0 ;
    newP->y = 0 ;
}

void creerPoint2DCopie_proc (Point2D *newP, Point2D p)
{
    newP->x = p.x ;
    newP->y = p.y ;
}


int abscisse (Point2D P)
{
    return P.x ;
}

int ordonnee (Point2D P)
{
    return P.y ;
}

void modifAbscisse (Point2D *P, int nb)
{
    P->x = nb ;
}

void modifOrdonnee (Point2D *P, int nb)
{
    P->y = nb ;
}

void afficherPoint (Point2D P)
{
    printf("(%d, %d)\n", abscisse (P), ordonnee (P)) ;
}


int saisieEntier (int borneInf, int borneSup)
{
    int nb ;
    printf("Veuillez saisir un entier compris entre %d et %d\n", borneInf, borneSup) ;
    scanf ("%d", &nb) ;
    while ( (nb<borneInf) || (nb>borneSup) )
    {
        printf("Veuillez saisir un entier compris entre %d et %d\n", borneInf, borneSup) ;
        scanf ("%d", &nb) ;
    }
    return nb ;
}

void afficheFigure(Point2D *tab, int taille) {
    printf("Points de la figure : \n");
    for (int i = 0; i < taille; i++)
    {
        afficherPoint(tab[i]);
        printf("-----------------------------\n");

    }
    
}

void initTableauRandom(Point2D tab[], int taille, int valMax)
{
    srand(time(NULL));
    for (int i = 0; i < taille; i++)
    {
        tab[i] = creerPoint2D(rand () % (valMax+1), rand () % (valMax+1));
    }
}