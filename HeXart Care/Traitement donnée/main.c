#include <stdio.h>
#include <stdlib>
#include "menu.h"
#include "action.h"
#include "Donnees.h"

int main() {
	Ligne Tableau[1000];									//Création d'un tableau de taille 1000
	int n = lectureCsv(Tableau);							//Rempplissage du tableau avec int n = taille du Tableau
	do{
	int c = menu_principal();
	switch (c) {
		case 0:
			exit(0);
			break;
		case 1:												// On affiche le Tableau
			print_tab(Tableau,n);
			break;
		case 2:												//On trie le tableau par pouls
			switch (menu_2()) {
				case 1:										// Croissant
					tri_croissant_pouls(Tableau, n);
					print_tab(Tableau, n);
					break;
				case 2:										//Décroissant
					tri_decroissant_pouls(Tableau, n);
					print_tab(Tableau, n);
					break;
			}
			break;
		case 3:												//Tri du tableau par pouls
			switch (menu_2()){
				case 1:										//Croissant
					tri_croissant_temps(Tableau, n);
					print_tab(Tableau, n);
					break;
				case 2:										//Décroissant
					tri_decroissant_temps(Tableau, n);
					print_tab(Tableau, n);
					break;
			}
			break;
		case 4:												//Recherche d'un temps particulier
			int tosearch = menu_4();
			int tabrep[100];								//Création d'un tableau pour contenir les réponses.
			int nrep = searchmilis(Tableau,n,tosearch,tabrep,100);

			if (nrep>=0) {
				printf("%d resultat(s) trouvé(s) !\n\n",nrep+1);
				for (int i=0;i<=nrep;i++) {
					printf("%d - %d; %d\n",i,tabrep[i].temp,tebrep[i].poul);
				}
			} else {
				printf("Aucun résultat trouvé !\n");
			}
			break;
		case 5:												// Recherche d'un pouls particulier
			int tosearch = menu_5();
			int tabrep[100];								//Création d'un tableau pour contenir les réponses.
			int nrep = searchpoul(Tableau,n,tosearch,tabrep,100);

			if (nrep>=0) {
				printf("%d resultat(s) trouvé !\n\n",nrep+1);
				for (int i=0;i<=nrep;i++) {
					printf("%d - %d; %d\n",i,tabrep[i].temp,tebrep[i].poul);
				}
			} else {
				printf("Aucun résultat trouvé !\n");
			}
			break;
		case 6:												// Affichage de la moyenne
			int a;
			int b;
			menu_5(&a, &b)
			printf("La moyenne est de %d bpm\n", moyenne(Tableau,n,a,b));
			break;
			case 7:											// Nombre de lignes de données
			printf("Il y a %d ligne de données\n",n);
			break;
		case 8:												// On recherche et on affiche le minimum et le maximum
			int min=-1; // Les valeurs ne seront jamais égales à -1
			int max=-1;
			minmax(Tableau,n,&min,&max);
			printf("Le poul min est de %d et max %d\n",min,max);
			break;
		case default:
			printf("Nombre non disponible, refaites votre choix.\n");
	}
}while (c!=0);
	return 0;
}
