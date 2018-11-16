#include <stdio.h>
#include <stdlib>
#include "action.h"

#define TRUE 1
#define FALSE 0

void tri_croissant_pouls(Ligne *tab, int n) {
	/* Booléen marquant l'arrêt du tri si le tableau est ordonné */
	int en_desordre = TRUE;
	/* Boucle de répétition du tri et le test qui
	 arrête le tri dès que le tableau est ordonné(en_desordre=FALSE) */
	while (en_desordre)
	{
		/* Supposons le tableau ordonné */
		en_desordre = FALSE;
		/* Vérification des éléments des places j et j+1 */
		for (int j = 0; j < n-1; j++)
		{
			/* Si les 2 éléments sont mal triés */
			if(tab[j].poul > tab[j+1].poul)
			{
				/* Inversion des 2 éléments */
 				int tmp = tab[j+1];
 				tab[j+1] = tab[j];
 				tab[j] = tmp;

 				/* Le tableau n'est toujours pas trié */
				en_desordre = TRUE;
 			}
		}
	}
}

void tri_decroissant_pouls(Ligne *tab, int n) {
	/* Booléen marquant l'arrêt du tri si le tableau est ordonné */
	int en_desordre = TRUE;
	/* Boucle de répétition du tri et le test qui
	 arrête le tri dès que le tableau est ordonné(en_desordre=FALSE) */
	while (en_desordre)
	{
		/* Supposons le tableau ordonné */
		en_desordre = FALSE;
		/* Vérification des éléments des places j et j+1 */
		for (int j = 0; j < n-1; j++)
		{
			/* Si les 2 éléments sont mal triés */
			if(tab[j].poul < tab[j+1].poul)
			{
				/* Inversion des 2 éléments */
 				int tmp = tab[j+1];
 				tab[j+1] = tab[j];
 				tab[j] = tmp;

 				/* Le tableau n'est toujours pas trié */
				en_desordre = TRUE;
 			}
		}
	}
}

void tri_croissant_temps(Ligne *tab, int n) {
	/* Booléen marquant l'arrêt du tri si le tableau est ordonné */
	int en_desordre = TRUE;
	/* Boucle de répétition du tri et le test qui
	 arrête le tri dès que le tableau est ordonné(en_desordre=FALSE) */
	while (en_desordre)
	{
		/* Supposons le tableau ordonné */
		en_desordre = FALSE;
		/* Vérification des éléments des places j et j+1 */
		for (int j = 0; j < n-1; j++)
		{
			/* Si les 2 éléments sont mal triés */
			if(tab[j].temp > tab[j+1].temp)
			{
				/* Inversion des 2 éléments */
 				int tmp = tab[j+1];
 				tab[j+1] = tab[j];
 				tab[j] = tmp;

 				/* Le tableau n'est toujours pas trié */
				en_desordre = TRUE;
 			}
		}
	}
}

void tri_decroissant_temps(Ligne *tab, int n) {
	/* Booléen marquant l'arrêt du tri si le tableau est ordonné */
	int en_desordre = TRUE;
	/* Boucle de répétition du tri et le test qui
	 arrête le tri dès que le tableau est ordonné(en_desordre=FALSE) */
	while (en_desordre)
	{
		/* Supposons le tableau ordonné */
		en_desordre = FALSE;
		/* Vérification des éléments des places j et j+1 */
		for (int j = 0; j < n-1; j++)
		{
			/* Si les 2 éléments sont mal triés */
			if(tab[j].temp < tab[j+1].temp)
			{
				/* Inversion des 2 éléments */
 				int tmp = tab[j+1];
 				tab[j+1] = tab[j];
 				tab[j] = tmp;

 				/* Le tableau n'est toujours pas trié */
				en_desordre = TRUE;
 			}
		}
	}
}

int searchmilis(Ligne *tab,int n,int milis,int *tabrep,int nrep) { //Fonction pour recherche miliseconde sequenciel, tab=tableau de structure de donnes, n= taille du tableau, milis=temp a chercher, tabrep=liste vide ou serons ajouter les valeurs ou la recherche a trouver milis, nrep=taille tableau de reponce. renvoie le nombre de resultat trouver
	int x=0;
	for (int i=0;i<=n;i++) {
		if (tab[i].temp==milis) {
			if (x>nrep) {
				tabrep[x]=i;
				x++;
			} else {
				return -1;
			}
		}
	}
	return x-1;
}

int searchpoul(Ligne *tab,int n,int poul,int *tabrep,int nrep) { //Fonction pour recherche poul sequenciel, tab=tableau de structure de donnes, n= taille du tableau, poul=nombre a chercher, tabrep=liste vide ou serons ajouter les valeurs ou la recherche a trouver milis, nrep=taille tableau de reponce. renvoie le nombre de resultat trouver
	int x=0;
	for (int i=0;i<=n;i++) {
		if (tab[i].poul==poul) {
			if (x>nrep) {
				tabrep[x]=i;
				x++;
			} else {
				return -1;
			}
		}
	}
	return x-1;
}

int searchmilisborn(Ligne *tab,int n,int milisinf,int milissup,int *tabrep,int nrep) { //Fonction pour recherche miliseconde sequenciel entre borne, tab=tableau de structure de donnes, n= taille du tableau, milisinf=borne inferieur temp a chercher, milissup=borne supertieur temp a chercher, tabrep=liste vide ou serons ajouter les valeurs ou la recherche a trouver milis, nrep=taille tableau de reponce. renvoie le nombre de resultat trouver
	int x=0;
	for (int i=0;i<=n;i++) {
		if (tab[i].temp>=milisinf && tab[i].temp<=milissup) {
			if (x>nrep) {
				tabrep[x]=i;
				x++;
			} else {
				return -1;
			}
		}
	}
	return x-1;
}

int searchpoulborn(Ligne *tab,int n,int poulinf,int poulsup,int *tabrep,int nrep) { //Fonction pour recherche poul sequenciel entre borne, tab=tableau de structure de donnes, n= taille du tableau, poulinf=borne inferieur temp a chercher, poulsup=borne supertieur temp a chercher, tabrep=liste vide ou serons ajouter les valeurs ou la recherche a trouver milis, nrep=taille tableau de reponce. renvoie le nombre de resultat trouver
	int x=0;
	for (int i=0;i<=n;i++) {
		if (tab[i].poul>=poulinf && tab[i].poul<=poulsup) {
			if (x>nrep) {
				tabrep[x]=i;
				x++;
			} else {
				return -1;
			}
		}
	}
	return x-1;
}



void print_tab (Ligne *tab, int n){
	for (size_t i = 0; i < n; i++) {
		printf("%d;%d\n",tab[i].temps, tab[i].poul );
	}
}
