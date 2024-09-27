#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int cpt = 0;
    char c;
    while (c != '.')
    {
        scanf("%c", &c);
        if (c == 'A')
        {
            cpt++;
        }
    }
    printf("Nombre d'occurence de 'A' : %i \n", cpt);
    return 0;
}
