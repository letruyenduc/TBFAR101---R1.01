#include <stdio.h>
#include <stdlib.h>
#include "proto.h"

int main(int argc, char const *argv[])
{
    int a;
    printf("Saisissez un nombre : ");
    scanf("%i", &a);
    a = pairImpair(a);
    if (a == 0)
    {
        printf("\nLe nombre est pair\n");
    }
    else{
        printf("\nLe nombre est impair\n");
    }
    
    return 0;
}
