#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int m, a, moy;
    scanf("%i%i", &a, &m);
    moy = (a + m) / 2;
    if (moy < 10)
    {
        printf("Recalé");
    }
    else if (moy < 12)
    {
        printf("Passable");
    }
    else if (moy < 14)
    {
        printf("Assez bien");
    }
    else if (moy < 16)
    {
        printf("Bien");
    }
    else
        printf("Très bien!");
    return 0;
}
