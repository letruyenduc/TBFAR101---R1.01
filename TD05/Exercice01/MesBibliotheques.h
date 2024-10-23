#ifndef MESBIBLIOTHEQUES_H
#define MESBIBLIOTHEQUES_H

void setColor(int ForgC);
int minimum(int, int);
int maximum(int, int);
int saisieEntier(int, int);
void afficherEntier(char[], int);
void initTableauRandom(int tab[], int taille, int valMax);
void afficheTableau(int tab[], int taille);
int posValeur(int tab[], int taille, int valeur);
int nbOcc(int tab[], int taille, int occurence);
int min(int tab[], int taille);
int minIndex(int tab[], int taille);
int moy(int tab[], int taille);
int plusGrandEcart(int tab[],int taille);
int palindrome(char tab[], int taille);
void fusion(int res[],int tab1[], int tab2[],int tailleT,int tailleT1);
int suppElemPos(int taille, int tab[], int pos);
int estTrie(int arr[], int taille) ;
#endif // MESBIBLIOTHEQUES_H
