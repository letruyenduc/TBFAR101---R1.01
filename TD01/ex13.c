#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    float distance, conso, prix, cout;
    scanf("%f%f%f", &distance, &prix, &conso);
    cout = distance/100*conso*prix;
    printf("Le coût du carburant pour le voyage est de: %f€",cout);
    return 0;
}
