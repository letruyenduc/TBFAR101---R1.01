#include <stdio.h>
#include <stdlib.h>
#include "proto.h"

int main(int argc, char const *argv[])
{
    int a, b, res;
    printf("Entrez un nombre nb : ");
    scanf("%i", &a);
    res = repunit(a);
    if (res == 1)
    {
        printf("%i est  rep-unit", a);
    }
    else
    {
        printf("%i n'est pas rep-unit", a);
    }
    return 0;
}
