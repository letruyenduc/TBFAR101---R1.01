#include "TADPoint2D.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

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

int nombreAleatoire(int valMax){
    return (rand() % valMax) + 1;
}

void initFigure(Point2D *tab, int taille) {
    int choix;
    printf("Choisissez le mode d'initialisation :\n");
    printf("1 - Saisie manuelle\n");
    printf("2 - Génération aléatoire\n");
    choix = saisieEntier(1, 2);

    for (int i = 0; i < taille; i++) {
        if (choix == 1) {
            printf("Point %d :\n", i + 1);
            int x = saisieEntier(-100, 100);  // Vous pouvez ajuster les bornes selon vos besoins
            int y = saisieEntier(-100, 100);
            tab[i] = creerPoint2D(x, y);
        } else {
            int x = nombreAleatoire(200) - 100;  // Pour avoir des valeurs entre -100 et 100
            int y = nombreAleatoire(200) - 100;
            tab[i] = creerPoint2D(x, y);
        }
    }
}

float distance(Point2D *P1, Point2D *P2) {
    int dx = P2->x - P1->x;
    int dy = P2->y - P1->y;
    return (int)sqrt(dx * dx + dy * dy);
}

int perimetreFigure(Point2D *tab, int taille) {
    int perimetre = 0;
    for (int i = 0; i < taille - 1; i++) {
        perimetre += distance(&tab[i], &tab[i + 1]);
    }
    perimetre += distance(&tab[taille - 1], &tab[0]);
    return perimetre;
}
void afficherPlanete(Point2D *tab, int taille) {
    