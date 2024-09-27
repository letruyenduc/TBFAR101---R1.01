#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int entier;
    scanf("%i",&entier);
    if (entier > 0)
        printf("%i est positif",entier);
    else if (entier < 0)
        printf("%i est négatif", entier);
    else
    printf("%i est nul", entier);   
    
    return 0;
}
