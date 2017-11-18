#include <stdio.h>
#include <stdlib.h>

// fonction permettant d'ouvrir le fichier
FILE* ouvrirFichier(void)
{
    FILE* battements = NULL;
    battements = fopen("sketch_171113a/Battements.csv","r");

    return battements;
}

// fonction calculant automatiquement la taille du fichier csv
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

