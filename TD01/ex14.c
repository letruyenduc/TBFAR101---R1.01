#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int a,b, div, reste;
    scanf("%i%i", &a,&b);
    div = a/b;
    reste = a%b;
    printf("Valeur de a = %i\nValeur de b = %i\n%i = %i * %i + %i", a, b, a, b, div,reste);
    return 0;
}
