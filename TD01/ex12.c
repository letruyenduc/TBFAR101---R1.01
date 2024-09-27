#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    float ancienPRIX, nouveauPRIX, taux;
    scanf("%f%f",&ancienPRIX,&nouveauPRIX);
    taux =(nouveauPRIX-ancienPRIX)/ancienPRIX;
    printf("Le taux d'inflation est de: %f",taux);    
    return 0;
}
