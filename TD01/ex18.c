#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int nb;
    scanf("%i",&nb);
    if (nb%2 == 0)
        printf("Pair");
    else
        printf("Impair");
    return 0;
}
