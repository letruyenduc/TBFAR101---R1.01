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
void calculPuissance(int * n, int puiss);
int rechercheElement(int taille, int tab[], int valeur);
int supprimerElement(int taille, int tab[], int valeur);
void auCarre(int * n);
void Echange(int * a, int * b);
void afficherTableau(int *t, int taille);
void ajouterEntier(int *t, int *taille, int val);
void MinMax(int *t, int taille, int *min, int *max);
void nbOccurences(int *t, int taille, int val, int *nb);
void saisirTableau(int *t, int taille, int valMax);
void calculSomme(int *t, int taille, int *sommePlus, int *sommeMoins);
int* concatener_tab(int *pTab1, int taille1, int *pTab2, int taille2, int *pTab3);
void saisirTableauNegatif(int *t, int taille, int valMax);
void separerNegatifPositif(int tab[], int taille, int negatif[], int *tailleN, int positif[], int *tailleP);


#endif // MESBIBLIOTHEQUES_H
