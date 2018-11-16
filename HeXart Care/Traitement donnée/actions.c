#include <stdio.h>
#include <stdlib>
#include "action.h"

void tri(Ligne *tab, int n) {

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

float moyenne(Ligne *tab,int n, int borninf, int bornsup) {
	if (borninf>=0 && bornsup<=n && borninf<bornsup) {
		int somme=0,diviseur=0;
		for (int i=0;i<n;i++) {
			if (tab[i].temp>=borninf && tab[i].temp<=bornsup) {
			somme+=tab[i].poul
			diviseur++;
			}
		}
		if (diviseur>0) {
			return somme/diviseur;
		} else {
			return -1;
		}
	} else {
		return -1.
	}
}


void print_tab(Ligne *tab, int n){
	for (size_t i = 0; i < n; i++) {
		printf("%d - %d; %d\n",i,tab[i].temps, tab[i].poul );
	}
}
