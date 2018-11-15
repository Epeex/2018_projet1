#include <stdlib.h>
#include <stdio.h>
#include "generationCode.h"

void write_script(char parametre_choisit){
    FILE* fichier = NULL;
    fichier = fopen("param.h", "w+");
    fputs("const int parametre = ", fichier);
    fputc(parametre_choisit, fichier);
    fputc(';', fichier);
    fclose(fichier);
}