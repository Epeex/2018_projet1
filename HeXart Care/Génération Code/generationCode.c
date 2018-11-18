#include <stdlib.h>
#include <stdio.h>
#include "generationCode.h"

void write_script(char parametre_choisit, char parametre_choisit2){  //fonction permettant d'écrire dans un fichier
    FILE* fichier = NULL; //initialisation du pointeur du fichier a NULL.
    fichier = fopen("param.h", "w+"); //ouverture du fichier en mode w+.

// Verification de la bonne ouverture du fichier //

    if (fichier==NULL) {
        printf("Erreur dans l'ouverture du fichier");
        exit(-1);
    }

// Enregistrement des paramètre de le fichier param.h //

    fputs("const int parametre = ", fichier);
    fputc(parametre_choisit, fichier);
    fputc(';', fichier);
    fputs("const int parametre2 = ", fichier);
    fputc(parametre_choisit2, fichier);
    fputc(';', fichier);
    fclose(fichier); // fermeture du fichier "fichier"
}