#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int num, racine = -1,res;
    scanf("%i", &num);
    while (racine <= num && racine * racine != num)
    {
        racine++;
    }
    if (racine * racine == num)
    {
        printf("Carré de %i", racine);
    }
    else
        printf("Ce n'est pas le carré d'un nombre");
    return 0;
}
