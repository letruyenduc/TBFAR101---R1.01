#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char lettre;
    scanf("%c",&lettre);
    if ((lettre >= 'A') && (lettre <= 'Z'))
    {
        printf("MAJUSCULE");
    }
    else if ((lettre >= 'a') && (lettre <= 'z'))
        printf("minuscule");
    else
        printf("Erreur, pas une lettre");
    return 0;
}
