#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int n, min, max, total = 0, cpt = 0;
    float moy;
    scanf("%i",&n);
    min = n;
    max = n;
    while (n != -1)
    {
        if (n < min)
        {
            min = n;
        }
        else if (n > max)
        {
            max = n;
        }
        total += n;
        cpt++;
        scanf("%i", &n);
    }
    moy = (float)total / cpt;
    printf("Moyenne: %.2f\nMinimum: %i\nMaximum: %i\n", moy, min, max);
    return 0;
}
