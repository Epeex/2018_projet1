#ifndef action.h
#define action.h

#include <stdlib.h>
#include <stdio.h>

typedef struct Ligne {
	int temp;
	int poul;
} Ligne;

void tri_croissant_pouls(Ligne *tab, int n);
void tri_decroissant_pouls(Ligne *tab, int n);
void tri_croissant_temps(Ligne *tab, int n);
void tri_decroissant_temps(Ligne *tab, int n);
int searchmilis(Ligne*,int,int,int*,int);
int searchpoul(Ligne*,int,int,int*,int);
int searchmilisborn(Ligne*,int,int,int,int*,int);
int searchpoulborn(Ligne*,int,int,int,int*,int);
void print_tab(Ligne *tab, int n);
float moyenne(Ligne*,int,int,int);
void minmax(Ligne*,int,int*,int*)

#endif
