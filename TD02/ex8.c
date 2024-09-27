#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int num, res, max;
    int temp = 0;
    while (num != 0)
    {
        temp = num;
        scanf("%i", &num);
        if (res > num)
        {
            max = res;
        }
        else
            max = num;
    }

    return 0;
}
