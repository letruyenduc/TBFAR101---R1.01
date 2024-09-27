#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int age,sexe;
    scanf("%i%i",&age,&sexe);
    if (sexe && age > 20)
    {
        printf("Impots");
    }
    else if (!sexe && (age >= 18 && age <=35))
    {
        printf("Impots");
    }
    else
        printf("Pas d'impots");
    return 0;
}
