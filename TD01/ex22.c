#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int const chargeA = 10, chargeB = 5;
    int Fa = 250, Fb = 300, nbJours;
    scanf("%i",&nbJours);
    for (int i = 0; i < nbJours; i++)
    {
        Fa+=chargeA;
        Fb+=chargeB;
    }
    printf("Formule A: %i€\nFormule B: %i€",Fa,Fb);
    return 0;
}
