#include <stdio.h>
#include <stdlib.h>
#include "proto.h"

int main(int argc, char const *argv[])
{
    int a, b, res;
    scanf("%i", &a);
    scanf("%i", &b);
    res = puissance(a, b);
    printf("%i", res);
    return 0;
}
