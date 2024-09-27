#include <stdlib.h>
#include <stdio.h>
#include "lib.h"
#include <assert.h>


int main()
{
    
    int x, n, pow;
    x = saisieEntier(0,100);
    n = saisieEntier(0,100);
    pow = puissance(x,n);
    printf("%i",pow);
    assert(puissance(10,2) == 100);
    return (0);
}
