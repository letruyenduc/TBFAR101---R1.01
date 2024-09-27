#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"


int main(int argc, char const *argv[])
{
    float t[4] = {10.2, 20.7, -15.1, 30.9},total=0;
    int taille = 4;
    for (int i = 0; i < taille; i++)
    {
        total += t[i];
    }
    
    printf("%.2f\n",total);
    return 0;
}
