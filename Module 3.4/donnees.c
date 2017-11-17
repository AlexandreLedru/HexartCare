#include <stdio.h>
#include <stdlib.h>

FILE* ouvrirFichier(void)
{
    FILE* battements = NULL;
    battements = fopen("sketch_171113a/Battements.csv","r");

    return battements;
}
