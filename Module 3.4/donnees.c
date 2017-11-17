#include <stdio.h>
#include <stdlib.h>

FILE* ouvrirFichier(void)
{
    FILE* battements = NULL;
    battements = fopen("sketch_171113a/Battements.csv","r");

    return battements;
}
int init_size (FILE* battements)
{
    int i,sizetab=0,a;
    int* donnees;
    int** index[2];
    while(a!=EOF)
    {
        a=fgetc(battements);
        if (a=='\n')
        {
            sizetab++;
        }
    }
    rewind(battements);
    return sizetab;
}

