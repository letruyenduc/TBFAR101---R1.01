#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    scanf("%i%i",&a,&b);
    if (a < 0 || b < 0)
    {
        printf("Négatif");
    }
    else
        printf("Positif");
    return 0;
}
