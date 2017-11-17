#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int menu(void)
{
    int choix = 0;
    printf("\t\t\t\t\t\t------------\n\t\t\t\t\t\t|HEXAR-CARE|\n\t\t\t\t\t\t------------\n\n\n\t\t\t");
    printf("Que voulez vous faire ?\n\n");
    printf(" 0| Quitter le programme,\n 1| Afficher les donnees dans l'ordre,\n 2| Afficher les donnees dans l'ordre croissant,\n 3| Afficher les donnees dans l'ordre decroissant,\n 4| Rechercher et afficher les donnees pour un temps particulier,\n 5| Afficher la moyenne des pouls pour une plage de temps donnee,\n 6| Afficher le nombre de lignes de donnees actuellement en memoire,\n 7| Rechercher et afficher les max/min de pouls,\n");
    scanf("%d",&choix);

    return choix;
}
