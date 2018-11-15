#include <stdlib.h>
#include <stdio.h>
#include "generationCode.h"

void write_script(char parametre_choisit, char parametre_choisit2){
    FILE* fichier = NULL;
    fichier = fopen("param.h", "w+");
    fputs("const int parametre = ", fichier);
    fputc(parametre_choisit, fichier);
    fputc(';', fichier);
    fputs("const int parametre2 = ", fichier);
    fputc(parametre_choisit2, fichier);
    fputc(';', fichier);
    fclose(fichier);
}