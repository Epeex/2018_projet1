#include <stdlib.h>
#include <stdio.h>
#include "menu.h"
#include "generationCode.h"


int main() {
    int choix=0;
    printf("Veuillez selectionner une fonction :\n");
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
        case 1:
            all_on();
            break;

        case 2:
            one_on_x_on();
            break;

        case 3:
            one_on();
            break;

        case 4:
            chenille();
            break;

        case 5:
            loading();
            break;

        case 6:
            tourn();
            break;

        case 7:
            load();
            break;

        default:
            main();
            break;
    }



}
