#include "Donnees.h"

int lectureCsv(Ligne *Tableau) { //Ligne Tableau[100];
    char ligne[100];
    char *ptr_chaine;
    int num_ligne = 0 ;

    int data_time;
    int data_poul;

//----------------------- ouverture du fichier de données CSV ------------------------------

    FILE *fic = fopen("Battements.csv", "rt") ;
    if (fic==NULL) {
        return -1;
    }

//----------------------- lecture du fichier de données CSV ------------------------------

    while (fgets(ligne,100,fic) != NULL) {

        ptr_chaine = strtok(ligne,";");

		if (sscanf(ptr_chaine,"%d",&data_time) == 1) {

			ptr_chaine = strtok(NULL,";");
			if (sscanf(ptr_chaine,"%d",&data_poul) == 1) {

				Tableau[num_ligne].temp = data_time;
				Tableau[num_ligne].poul = data_poul;

				num_ligne++;

			}
            else {

				printf("\nPb de lecture ligne %d cellule 2 (poul) !\n",num_ligne);
				data_poul=0;
			}
		}
        else {

			printf("\nPb de lecture ligne %d cellule 1 (temps)!\n",num_ligne);
            data_time=0;
		}
    }
    fclose(fic);
	return num_ligne-1;
}
