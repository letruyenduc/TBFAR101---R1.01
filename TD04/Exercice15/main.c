#include <stdio.h>
#include <stdlib.h>
#include "MesBibliotheques.h"
#include <time.h>
#include <assert.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char mot[100];
    printf("Entrez un mot: ");
    scanf("%s", mot);
    if(palindrome(mot,100))
        printf("%s est un palindrome.\n", mot);
    else
        printf("%s n'est pas un palindrome.\n", mot);
    return 0;
}
