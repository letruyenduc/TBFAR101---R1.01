#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"

int main(int argc, char const *argv[])
{
    int A, B, C;
    A = saisieEntier(0,20);
    B = saisieEntier(0,20);
    C = saisieEntier(-20,20);
    setColor(1);
    afficherEntier("Max de A et B",maximum(A,B));
    setColor(4);
    afficherEntier("Min de A et C",minimum(A,B));
    return 0;
}
