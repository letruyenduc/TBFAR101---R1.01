#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int age;
    scanf("%i",&age);
    if ((age < 18) || (age > 60))
    {
        printf("Réduction");
    }
    else
        printf("Pas de réduction");
    return 0;
}
