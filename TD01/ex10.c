#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int rayon;
    float perimetre;
    const float PI = 3.14;
    scanf("%i",&rayon);
    perimetre = 2*PI*rayon;
    printf("Périmètre = %f", perimetre);
    return 0;
}
