#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    float prixHT, prixTTC;
    const float TVA = 1.196;
    scanf("%f",&prixHT);
    prixTTC = prixHT * TVA;
    printf("Prix TTC : %f", prixTTC);
    return 0;
}
