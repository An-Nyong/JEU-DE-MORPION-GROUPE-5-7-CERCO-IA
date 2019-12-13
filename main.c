#include <stdio.h>
#include <stdlib.h>
#include "grille.h"
#include "aide.h"
//char retour_menu;
int main()
{
    int choix,nb=0;
    printf(" ************************************************* **************************************************\n");
    printf("*******************************************JEU DE MORPION ********************************************\n");
    printf(" ************************************************* **************************************************\n");
    printf("\t\t......1- JOUER......\n");
    printf("\t\t......2- REGLES DU JEU......\n");
    printf("\t\t......0- QUITTER......\n");
    printf("\n Faites un choix dans le menu\t");
    scanf("%d",&choix);
    if (choix==1)
    {
        int ligne=0, colonne=0;
        printf("Premier joueur :X       Deuxieme joueur :O \n");
        init_gril();
        affichage_grille();
        printf("Joueur 1 \n");
        do{
        scanf("%d %d",&ligne,&colonne);
        modif(ligne, colonne);
        nb+=1;
        }while(nb<9);
    }
    else if (choix==2)
    {
        regles();
        printf("Appuyer sur une touche pour retourner au menu\n");
        //scanf("%d", &retour_menu);
    }

    return 0;
}
