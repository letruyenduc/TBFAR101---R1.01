#ifndef MESBIBLIOTHEQUES_H
#define MESBIBLIOTHEQUES_H

void setColor(int ForgC) ;
int  minimum (int, int) ;
int  maximum (int, int) ;
int  saisieEntier (int, int) ;
void afficherEntier (char [], int) ;
void initTableauRandom(int tab[], int taille, int valMax);
void afficheTableau(int tab[], int taille);
int posValeur(int tab[], int taille, int valeur);
int nbOcc(int tab[], int taille, int occurence);
#endif // MESBIBLIOTHEQUES_H
