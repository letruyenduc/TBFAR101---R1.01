#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int N, res, S;
    scanf("%i%i", &N, &S);
    for (int i = -1; i <= N; i++)
    {
        res += i;
        if (res > S)
        {
            printf("%i",i);
        }   
    }
    return 0;
}
