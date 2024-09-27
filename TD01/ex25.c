#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int jourN, moisN, anneeN, jourJ = 4, moisJ = 9, anneeJ = 2023, diffA;
    scanf("%i%i%i",&jourN,&moisN,&anneeN);
    diffA = anneeJ - anneeN;
    if (((diffA < 18) && (jourN < jourJ) && (moisJ < moisN)) || (diffA > 60))
    {
        printf("Réduction");
    }   
    else
        printf("Pas de réduction");
    return 0;
}
