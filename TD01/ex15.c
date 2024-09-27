#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int x,res;
    scanf("%i",&x);
    res = 3*(x*x) - 5*x + 7;
    printf("Le résultat pour x = %i est %i", x, res);
    return 0;
}
