#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, PGDC;
    scanf("%i%i", &n1, &n2);
    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 -= n2;
        }
        else
            n2 -= n1;
    }
    PGDC = n1;
    printf("PGDC: %i", PGDC);
    return 0;
}
