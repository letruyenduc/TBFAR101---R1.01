#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"
#include <time.h>
#include <assert.h>

int main(int argc, char const *argv[])
{
    int T1[10], T2[10] = {1,2,3,4,5,6,7,8,9,0}, pos, res;
    initTableauRandom(T1,10,50);
    afficheTableau(T1,10);
    printf("\nSaissiez une valeur entiere: ");
    scanf("%i",&pos);
    res = posValeur(T1,10,pos);
    printf("Position actuel de %i : %i",pos,res);

    assert(posValeur(T2,10,8) == 7);
    return 0;
}
