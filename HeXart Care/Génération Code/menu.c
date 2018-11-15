#include <stdlib.h>
#include <stdio.h>
#include "menu.h"
#include "generationCode.h"

void afficher_menus(){
    int choix=0;
    int parametre_allumage=0;
    printf("Veuillez selectionner une fonction :\n\n");
    printf("1: Toutes les leds allumées\n");
    printf("2: Une led allumé sur x led\n");
    printf("3: Une seule led allumé, au choix\n");
    printf("4: Fonction chenille\n");
    printf("5: Fonction chargement\n");
    printf("6: Fonction tour\n");
    printf("7: Fonction aléatoire\n\n");
    scanf("%i",&choix);
    printf("Vous avez sélectionné le choix %i\n\n",choix);

    switch (choix) {
        case 1: //all_on()
            write_script('1', '0');
            break;

        case 2://one_on_x_on()
            printf("1 led toutes les combiens ? (toutes les 2 leds par exemple)\n");
            do {
                scanf("%c", &parametre_allumage);
            } while (parametre_allumage == '\n');
            write_script('2',parametre_allumage);
            break;

        case 3://one_on()
            printf("Quelle led voulez-vous allumer ? (de 1 à 10)\n");
            do {
                scanf("%c", &parametre_allumage);
            } while (parametre_allumage =='\n');
            write_script('3',parametre_allumage);
            break;

        case 4://chenille()
            write_script('4','0');
            break;

        case 5://loading()
            write_script('5','0');
            break;

        case 6://tourn()
            write_script('6','0');
            break;

        case 7://load()
            write_script('7','0');
            break;

        default://retour au choix
            printf("Choix invalide\n\n\n");
            afficher_menus();
            break;
    }
}
