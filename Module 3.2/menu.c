#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

//fonction menu
int affichermenu()
{
    int choix = 0;

    printf("\t\t\t\t\t\t------------\n\t\t\t\t\t\t|HEXAR-CARE|\n\t\t\t\t\t\t------------\n\n\n\t\t\t   |-----------------------------------------------------|\n\t\t\t   |\t\t\t\t\t\t         |\n\t\t\t   | Choisissez le mode d'allumage des LEDs du coeur :   |\n\t\t\t   |\t\t\t\t\t\t         |\n\t\t\t   | 0| Quitter le programme,\t\t\t         |\n\t\t\t   | 1| Allumer toutes les LEDs au rythme\t\t |\n\t\t\t   |    des battements du coeur,\t\t\t |\n\t\t\t   | 2| Allumer une LED sur deux,\t\t\t |\n\t\t\t   | 3| Allumer une LED sur trois,\t\t\t |\n\t\t\t   | 4| Allumer les LEDs en chenille\t\t         |\n\t\t\t   | 5| Choisir la LED a allumer\t\t\t |\n\t\t\t   | 6| Allumer de haut en bas,                          |\t\t\t\t\t   | 7| Allumer une led sur 4   \t\t\t |\t\t\t\t\t   |-----------------------------------------------------|\n");
    scanf("%d",&choix);

    return choix;

}


