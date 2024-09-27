#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"
#include <time.h>
#include <assert.h>

int main(int argc, char const *argv[])
{
    int T1[10], T2[10], moyenne;
    initTableauRandom(T1,10,50);
    initTableauRandom(T2,10,50);
    afficheTableau(T1,10);
    printf("\n");
    afficheTableau(T2,10);
    printf("\n");
    moyenne = moy(T1,10);
    printf("%i",moyenne);
    return 0;
}
