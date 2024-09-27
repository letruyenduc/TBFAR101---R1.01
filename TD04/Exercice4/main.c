#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"
#include <time.h>

int main(int argc, char const *argv[])
{
    int T[20];
    initTableauRandom(T,20,50);
    afficheTableau(T,20);
    return 0;
}
