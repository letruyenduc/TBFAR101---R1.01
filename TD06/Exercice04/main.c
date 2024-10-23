#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"
#include <time.h>
#include <assert.h>
#include <string.h>

int main()
{
    int a = 10, b = 5;
    printf("a = %d, b = %d\n", a, b);
    Echange(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
