#ifndef PROTO_H
#define PROTO_H
typedef struct
{
    int tab[100];
    int nbB;
} guirlande;
void setColor(int ForgC);
void creerG(guirlande *g);
int nbBoules(guirlande g);
int iemeValeur(guirlande g, int val);
int estVide(guirlande g);
int estPleine(guirlande g);
int randomInt(int mini, int maxi);
int couleurCorrecte(int coul);
void ajouterBoule(guirlande *g, int coul);
void afficherG(guirlande g);
int nbCouleurs(guirlande g);
#endif // PROTO_H