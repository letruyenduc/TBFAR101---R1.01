#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"
#include <time.h>
#include <assert.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int tab1[10]= {1,2,3,4,5,6,7,8,9,10}, tab2[11] = {11,12,13,14,15,16,17,18,19,20,21},taille1=10,taille2=11,tab3[taille1 + taille2];
    fusion(tab3,tab1,tab2,10,11);
    afficheTableau(tab3,taille1+taille2);
    return 0;
}
