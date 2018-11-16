#include <stdio.h>
#include <stdlib>

/*
void tri(Ligne *tab, int n) {

}*/

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
