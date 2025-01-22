#include <stdio.h>
#include <stdlib.h>
#include "proto.h"

int main(int argc, char const *argv[])
{
    int a;
    scanf("%i",&a);
    a = sommeEntierPositif(a);
    printf("La somme des entiers de 1 à 4 est %d\n", a);
    return 0;
}
