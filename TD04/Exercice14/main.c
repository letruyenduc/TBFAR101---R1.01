#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"
#include <time.h>
#include <assert.h>

int main(int argc, char const *argv[])
{
    int tab[10];
    initTableauRandom(tab,10,50);
    plusGrandEcart(tab,10);
    return 0;
}
