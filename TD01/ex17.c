#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int abs;
    scanf("%i",&abs);
    if (abs < 0)
        abs = abs * (-1);
    printf("%i", abs);
    return 0;
}
