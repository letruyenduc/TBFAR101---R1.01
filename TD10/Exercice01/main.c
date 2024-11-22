#include <stdio.h>
#include <stdlib.h>
#include "protos.h"

int main(int argc, char const *argv[])
{
    FILE *livres;
    livres = fopen("livres.txt", "r");
    if (livres == NULL)
    {
        printf("Erreur lors de l'ouverture du fichier\n");
    }

    return 0;
}
