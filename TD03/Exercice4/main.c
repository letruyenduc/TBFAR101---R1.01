#include <stdlib.h>
#include <stdio.h>
#include "lib.h"

int main()
{
    
    char c;
    int haut,larg;
    haut = saisieEntier(0,10);
    larg = saisieEntier(0,20);
    fflush(stdin);
    printf("Saississez un charactère: ");
    scanf("%c",&c);
    triangleRectangle(haut,larg,c);
    return (0);
}
