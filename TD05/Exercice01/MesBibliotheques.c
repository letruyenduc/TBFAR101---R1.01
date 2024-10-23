#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <assert.h>
/// /////////////////////////////////////////////////////////////////////// ///
/// Procédure pour changer l'affichage du texte dans la console             ///
/// 0 : noir        4 : rouge       8  : gris foncé     12 : rouge clair    ///
/// 1 : bleu        5 : magenta     9  : bleu clair     13 : magenta clair  ///
/// 2 : vert        6 : brun        10 : vert clair     14 : jaune          ///
/// 3 : cyan        7 : gris clair  11 : cyan clair     15 : blanc          ///
/// source de cette fonction : https://askcodez.com/comment-changer-la-     ///
/// couleur-du-texte-et-de-la-console-de-couleur-dans-codeblocks.html       ///
/// /////////////////////////////////////////////////////////////////////// ///
void setColor(int ForgC) {
    switch(ForgC) {
        case 0: printf("\033[30m"); break;  // Noir
        case 1: printf("\033[34m"); break;  // Bleu
        case 2: printf("\033[32m"); break;  // Vert
        case 3: printf("\033[36m"); break;  // Cyan
        case 4: printf("\033[31m"); break;  // Rouge
        case 5: printf("\033[35m"); break;  // Magenta
        case 6: printf("\033[33m"); break;  // Brun/Jaune foncé
        case 7: printf("\033[37m"); break;  // Gris clair
        case 8: printf("\033[90m"); break;  // Gris foncé
        case 9: printf("\033[94m"); break;  // Bleu clair
        case 10: printf("\033[92m"); break; // Vert clair
        case 11: printf("\033[96m"); break; // Cyan clair
        case 12: printf("\033[91m"); break; // Rouge clair
        case 13: printf("\033[95m"); break; // Magenta clair
        case 14: printf("\033[93m"); break; // Jaune
        case 15: printf("\033[97m"); break; // Blanc
        default: printf("\033[0m"); break;  // Réinitialiser (couleur par défaut)
    }
}

int minimum (int nb1, int nb2)
{
    if (nb1<=nb2)
        return nb1 ;
    return nb2 ;
}

int maximum (int nb1, int nb2)
{
    if (nb1>=nb2)
        return nb1 ;
    return nb2 ;
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

void afficherEntier (char message [], int val)
{
    printf("%s %d\n", message, val) ;
}

void initTableauRandom(int tab[], int taille, int valMax)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < taille; i++)
    {
        tab[i] = rand () % (valMax+1);
    }
}
void afficheTableau(int tab[], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        printf("%i ",tab[i]);
    }
}

int posValeur(int tab[], int taille, int valeur)
{
    for (int i = 0; i < taille; i++)
    {
        if (tab[i] == valeur)
            return i;
    }
    return -1; 
}

int nbOcc(int tab[], int taille, int occurence)
{
    int total = 0;
    for (int i = 0; i < taille; i++)
    {
        if (tab[i] == occurence)
            total++;
    }
    return total;
}

int estCroissant(int tab[], int taille)
{
    int i = 0;
    while(tab[i] <= tab[i+1] && i<taille-1)
    {
        i++;
        return (i>=taille-1);
    }
    return 0;
}

int min(int tab[], int taille)
{
    int mini;
    for (int i = 0; i < taille; i++)
    {
        if(tab[i] < mini)
        {
            mini = tab[i];
        }
    }
    return mini;
}

int minIndex(int tab[], int taille)
{
    int mini, res;
    for (int i = 0; i < taille; i++)
    {
        if(tab[i] < mini)
        {
            mini = tab[i];
            res = i;
        }
    }
    return res;
}

int moy(int tab[], int taille)
{
    int res, sum, cpt = 0;
    for (int i = 0; i < taille; i++)
    {
        sum += tab[i];
        cpt++;
    }
    res = sum/cpt;
    return res;
}

int plusGrandEcart(int tab[],int taille)
{
    int ecart;
    for(int i = 0; i < taille - 1; i++)
    {
        if (tab[i] > tab[i+1])
        {
            ecart = tab[i] - tab[i+1];
        }
        else
            ecart = tab[i+1] - tab[i];
        printf("L'écart entre %i et %i est de: %i \n", tab[i],tab[i+1],ecart);
    }
    return 0;
}

int palindrome(char tab[], int taille)
{
    int debut = 0, fin = strlen(tab) - 1;
    while (debut < fin)
    {
        if(tab[debut] != tab[fin])
        {
            return 0;
        }
        debut++;
        fin--;
    }
    return 1;
}

void fusion(int res[],int tab1[], int tab2[],int tailleT,int tailleT1)
{
    int total = tailleT + tailleT1;
    for (int i = 0; i < tailleT; i++)
    {
        res[i] = tab1[i];
    }
    for (int i = 0; i < tailleT1; i++)
    {
        res[i+tailleT] = tab2[i];
    }
}

// int popMax(int i)
// {
//     int log[i][100];
//     int nbAnnee[100] = {0};
//     for (int i = 0; i < 100; i++)
//     {
//         break;
//     }
// }

int estTrie(int arr[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;
        }
    }
    return 1;
}

int suppElemPos(int taille, int tab[], int pos){
    assert(taille > 0);
    for (int i = pos; i < taille-2; i++)
    {
        tab[i] = tab[i+1];
    }
    return (taille-1);
}