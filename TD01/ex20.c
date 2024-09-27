#include <stdlib.h>
#include <stdio.h>

int main()
{
    int nb;
    float cout;
    scanf("%int",&nb);
    for (int i = 0; i < nb; i++)
    {
        if (i <= 10)
        {
            cout += 0.1;
        }
        else if (i <= 30)
        {
            cout += 0.09;
        }
        else
            cout += 0.08;
    }
    printf("Le cout total est de %f €",cout);
    return 0;
}
