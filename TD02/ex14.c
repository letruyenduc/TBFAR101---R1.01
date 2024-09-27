#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int num, nbPremier = 2;
    scanf("%i", &num);

    if (num > 2)
    {
        while (num % nbPremier == 0)
        {
            printf("%i\n", nbPremier);
            num /= nbPremier;
        }
        nbPremier = 3;
        while (num > 1)
        {
            while (num % nbPremier == 0)
            {
                printf("%i\n", nbPremier);
                num /= nbPremier;
            }
            nbPremier += 2;
        }
    }
    else
    {
        printf("Le nombre doit être supérieur à 2.\n");
    }

    return 0;
}