#include <stdio.h>
#include <stdlib.h>

/// /////////////////////////////////////////////////////////////////////// ///
/// Procédure pour changer l'affichage du texte dans la console             ///
/// 0 : noir        4 : rouge       8  : gris foncé     12 : rouge clair    ///
/// 1 : bleu        5 : magenta     9  : bleu clair     13 : magenta clair  ///
/// 2 : vert        6 : brun        10 : vert clair     14 : jaune          ///
/// 3 : cyan        7 : gris clair  11 : cyan clair     15 : blanc          ///
/// source de cette fonction : https://askcodez.com/comment-changer-la-     ///
/// couleur-du-texte-et-de-la-console-de-couleur-dans-codeblocks.html       ///
/// /////////////////////////////////////////////////////////////////////// ///
void setColor(int ForgC)
{
    switch (ForgC)
    {
    case 0:
        printf("\033[30m");
        break; // Noir
    case 1:
        printf("\033[34m");
        break; // Bleu
    case 2:
        printf("\033[32m");
        break; // Vert
    case 3:
        printf("\033[36m");
        break; // Cyan
    case 4:
        printf("\033[31m");
        break; // Rouge
    case 5:
        printf("\033[35m");
        break; // Magenta
    case 6:
        printf("\033[33m");
        break; // Brun/Jaune foncé
    case 7:
        printf("\033[37m");
        break; // Gris clair
    case 8:
        printf("\033[90m");
        break; // Gris foncé
    case 9:
        printf("\033[94m");
        break; // Bleu clair
    case 10:
        printf("\033[92m");
        break; // Vert clair
    case 11:
        printf("\033[96m");
        break; // Cyan clair
    case 12:
        printf("\033[91m");
        break; // Rouge clair
    case 13:
        printf("\033[95m");
        break; // Magenta clair
    case 14:
        printf("\033[93m");
        break; // Jaune
    case 15:
        printf("\033[97m");
        break; // Blanc
    default:
        printf("\033[0m");
        break; // Réinitialiser (couleur par défaut)
    }
}

int minimum(int nb1, int nb2)
{
    if (nb1 <= nb2)
        return nb1;
    return nb2;
}

int maximum(int nb1, int nb2)
{
    if (nb1 >= nb2)
        return nb1;
    return nb2;
}

int saisieEntier(int borneInf, int borneSup)
{
    int nb;
    printf("Veuillez saisir un entier compris entre %d et %d\n", borneInf, borneSup);
    scanf("%d", &nb);
    while ((nb < borneInf) || (nb > borneSup))
    {
        printf("Veuillez saisir un entier compris entre %d et %d\n", borneInf, borneSup);
        scanf("%d", &nb);
    }
    return nb;
}

void afficherEntier(char message[], int val)
{
    printf("%s %d\n", message, val);
}

void ligne(int nb, char c)
{
    for (int i = 1; i < nb; i++)
    {
        printf("%c", c);
    }
}
