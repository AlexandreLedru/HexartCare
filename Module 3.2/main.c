#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "menu.h"
#include "generationCode.h"


int main()
{
    //Mise en forme du programme
    system("color fc" );
    SetConsoleTitle("HEXAR-CARE");
    system("mode con LINES=20 COLS=90");

    FILE* param = NULL;
    param = fopen("coeur.c/param.h","w+");
    // Ouvrir fichier param.h

    int choix,choix2;

    if(param!=NULL)
    {
        do
    {
    // Appel de la fonction qui affiche le menu
    choix = affichermenu();

    choix2 = ChoixAllumage(param,&choix);
    }
    while(choix != 0);
    }
    else
    {
        printf("Impossible d'ouvrir le fichier");
        fclose(param);
        exit(0);
    }



    return 0;
}
