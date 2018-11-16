#include <stdio.h>
#include <stdlib>
#include "menu.h"
#include "action.h"
#include "Donnees.h"

int main() {
	Ligne Tableau[1000];
	int n = lectureCsv(Tableau);
	
	switch (menu_principal()) {
		case 1:
			print_tab(Tableau,n);
			break;
		case 2:
			
			break;
		case 3:
			
			break;
		case 4:
			int tosearch;
			printf("Temp à rechercher : ");
			scanf("%d",&tosearch);
			printf("\n\n");
			int tabrep[100];
			int nrep = searchmilis(Tableau,n,tosearch,tabrep,100);
			
			if (nrep>=0) {
				printf("%d resultat(s) trouver !\n\n",nrep+1);
				for (int i=0;i<=nrep;i++) {
					printf("%d - %d; %d\n",i,tabrep[i].temp,tebrep[i].poul);
				}
			} else {
				printf("Aucun résultat trouver\n");
			}
			break;
		case 5:
			int tosearch;
			printf("Poul à rechercher : ");
			scanf("%d",&tosearch);
			printf("\n\n");
			int tabrep[100];
			int nrep = searchpoul(Tableau,n,tosearch,tabrep,100);
			
			if (nrep>=0) {
				printf("%d resultat(s) trouver !\n\n",nrep+1);
				for (int i=0;i<=nrep;i++) {
					printf("%d - %d; %d\n",i,tabrep[i].temp,tebrep[i].poul);
				}
			} else {
				printf("Aucun résultat trouver\n");
			}
			break;
		case 6:
			int a;
			int b;
			menu_5(&a, &b)
			printf("La moyenne est de %d bpm\n", moyenne(Tableau,n,a,b));
			break;
		case 7:
			printf("Il y a %d ligne de données\n",n);
			break;
		case 8:
			int min=-1;
			int max=-1;
			minmax(Tableau,n,&min,&max);
			printf("Le poul min est de %d et max %d\n",min,max);
			break;
		case default:
			printf("Nombre pas disponible, refaite votre choix.\n");
	}
	return 0;
}