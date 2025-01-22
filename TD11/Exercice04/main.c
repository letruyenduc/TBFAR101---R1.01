#include <stdio.h>
#include <stdlib.h>
#include "proto.h"

int main(int argc, char const *argv[])
{
    int a, b, res;
    scanf("%i", &a);
    scanf("%i", &b);
    res = pgcd(a, b);
    printf("Le pgcd de %i et %i est : %i", a, b, res);
    return 0;
}
