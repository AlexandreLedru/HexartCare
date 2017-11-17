#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "menu.h"
#include "donnees.h"
#include "actions.h"

int main()
{
    //Mise en en forme du programme
    system("color fc" );
    SetConsoleTitle("HEXAR-CARE");
    FILE* battements;



    int choix = 0;
    //int choix2 = 0;
    if(battements!=NULL)
    {
      do
       {

        //Appel des fonctions
        battements = ouvrirFichier();//Ouverture du fichier battements.csv
        choix = menu();//Ouverture du menu
        ChoixDuMenu(battements,&choix);//Selection des paramètres
        _sleep(5000);
        system("CLS");
       }
       while(choix!=0);
    }
    else
    {
        printf("Impossible d'ouvrir le fichier");
        fclose(battements);
        exit(0);
    }




}
