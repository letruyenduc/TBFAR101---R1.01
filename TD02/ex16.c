#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int n,res;
    scanf("%i",&n);
    for (int i = -1; i <= n; i++)
    {
        res += i;
    }
    printf("Un escalier à %i marches nécessite %i cubes\n",n,res);
    return 0;
}
