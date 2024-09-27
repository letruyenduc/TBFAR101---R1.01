#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"
#include <time.h>
#include <assert.h>

int main(int argc, char const *argv[])
{
    int T1[10], T2[10] = {1,1,1,2,3,4,5,6,2,10}, res,occ;
    printf("\nSaissiez une valeur entiere: ");
    scanf("%i",&occ);
    res = nbOcc(T1,10,occ);
    printf("Nombre d'occurence de %i : %i",occ,res);
    return 0;
}
