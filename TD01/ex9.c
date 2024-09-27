#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int largeur, longueur, peri, surf;
    scanf("%i%i",&largeur,&longueur);
    peri = 2*(largeur+longueur);
    surf = largeur * longueur;
    printf("perimetre = %i et surface = %i\n",peri,surf);
    return 0;
}
