#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"
#include <time.h>
#include <assert.h>

int main(int argc, char const *argv[])
{
    int T1[10], T2[10], minT1, minT2;
    initTableauRandom(T1,10,50);
    initTableauRandom(T2,10,50);
    afficheTableau(T1,10);
    printf("\n");
    afficheTableau(T2,10);
    printf("\n");
    minT1 = minIndex(T1,10);
    minT2 = minIndex(T2,10);
    printf("%i%i",minT1,minT2);
    return 0;
}
