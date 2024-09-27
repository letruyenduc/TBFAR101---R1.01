#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int a, b, res;
    scanf("%i%i", &a, &b);
    while (res != a * b)
    {
        if (b % 2 == 0)
        {
            res = (2 * a) * (b / 2);
        }
        else
            res = a * (b - 1) + a;
    }
    printf("Résultat %i \n", res);
    return 0;
}
