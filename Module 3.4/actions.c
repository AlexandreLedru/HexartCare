#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
#include "actions.h"

//Fonction pour le choix de l'utilisateur
void ChoixDuMenu(FILE* battements,int* choix)
{


    //Lecture dans l'ordre du fichier
    if(*choix == 1)
    {

        int donnees = 0;
        do
        {
           donnees = fgetc(battements);
           printf("%c",donnees);
        }
        while(donnees!=EOF);
        fclose(battements);
    }
    else if(*choix == 2)
    {

       int *donnees;
       int i,sizetab;
       sizetab=init_size(battements);
       donnees=malloc(sizeof(int)*sizetab);
        for(i=0;i<sizetab;i++)
        {
            fscanf(battements,"%d\n",&donnees[i]);
        }


        tricroissant(donnees, sizetab);

                for(i=0;i<sizetab;i++)
        {
            printf("%d\n",donnees[i]);
        }
        fclose(battements);
    }

    else if(*choix == 3)
    {

        int *donnees;
       int i,sizetab;
       sizetab=init_size(battements);
       donnees=malloc(sizeof(int)*sizetab);
        for(i=0;i<sizetab;i++)
        {
            fscanf(battements,"%d\n",&donnees[i]);
        }


        tridecroissant(donnees,sizetab);

                for(i=0;i<sizetab;i++)
        {
            printf("%d\n",donnees[i]);
        }
        fclose(battements);
    }
    else if(*choix == 4)
    {
        int *donnees;
       int i,sizetab;
       sizetab=init_size(battements);
       donnees=malloc(sizeof(int)*sizetab);
        for(i=0;i<sizetab;i++)
        {
            fscanf(battements,"%d\n",&donnees[i]);
        }

        RechercheSequentielle(donnees,sizetab);
    }
    else if(*choix == 5)
    {
        int *donnees;
       int i,sizetab;
       sizetab=init_size(battements);
       donnees=malloc(sizeof(int)*sizetab);
        for(i=0;i<sizetab;i++)
        {
            fscanf(battements,"%d\n",&donnees[i]);
        }
        moyenne_plage(donnees,sizetab);
    }
    else if(*choix == 7)
    {
       int *donnees;
       int i,sizetab;
       sizetab=init_size(battements);
       donnees=malloc(sizeof(int)*sizetab);

        for(i=0;i<sizetab;i++)
        {
            fscanf(battements,"%d\n",&donnees[i]);
        }

        min_et_max(donnees,sizetab);
    }
}




int tricroissant(int *tab, int sizetab)
{
    int b = 0;
    int i = 0;
    int c;
       do
    {
        b=sizetab;
        for(i=0;i<sizetab;i++)
        {
            if(tab[i]>tab[i+1]&&i<(sizetab-1))
            {
                c=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=c;
            }
            else
            {
                b--;
            }
        }
    }while(b>0);
    return tab;

}
int tridecroissant(int *tab, int sizetab)
{
    int b = 0;
    int i = 0;
    int c;
       do
    {
        b=sizetab;
        for(i=0;i<sizetab;i++)
        {
            if(tab[i]<tab[i+1]&&i<(sizetab-1))
            {
                c=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=c;
            }
            else
            {
                b--;
            }
        }
    }while(b>0);
    return tab;

}

void RechercheSequentielle(int *tab,int sizetab)
{
    int nbrRecherche=0, i=0;
    printf("Veuillez entrer le nombre recherche:");
    scanf("%d",&nbrRecherche);


    if(nbrRecherche<sizetab)
    {
        i = tab[nbrRecherche-1];
    }

    printf("A la seconde %d il ya la valeurs %d",nbrRecherche,tab[nbrRecherche-1]);

}

void min_et_max (int *tab, int sizetab)
{
    int i, a, b;
    int max, min;
    min = tab[0];
    max = tab [0];
    for(i=0;i<sizetab;i++)
    {
        if (min>tab[i])
        {
            min = tab[i];
            a = i+1;
        }
        else if (max<tab[i])
        {
            max = tab[i];
            b = i+1;
        }
    }
    printf("La valeure minimale est %d a la seconde %d\n", min, a);
    printf("La valeure maximale est %d a la seconde %d\n", max, b);
}

void moyenne_plage (int *tab, int sizetab)
{
    int min, max;
    int i, a;
    float b;
    a = 0;
    int *tab2;
    printf("Entrez les temps de votre plage de donnees : \n");
    printf("Valeure min : ");
    scanf("%d",&min);
    printf("Valeure max : ");
    scanf("%d",&max);
    tab2 = malloc(sizeof(int)*(max-(min-1)));
    for(i=min-1; i<max; i++)
    {
        tab2[a]=tab[i];
        a++;
    }
    b = 0;
    for (i=0; i<a; i++)
    {
        b += tab2[i];
    }
    b = b/(max-(min-1));
    printf("La moyenne de pouls de votre plage definie est de %.2f", b);
}
