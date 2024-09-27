#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int N, res;
    scanf("%i", &N);
    for (int i = -1; i <= N; i++)
    {
        res += i;
    }
    printf("%i", res);
    return 0;
}
