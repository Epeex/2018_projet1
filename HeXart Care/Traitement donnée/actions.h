#ifndef actionh
#define actionh

#include <stdlib.h>
#include <stdio.h>
#include "actions.c"

void tri_croissant_pouls(Ligne *tab, int const n);
void tri_decroissant_pouls(Ligne *tab, int const n);
void tri_croissant_temps(Ligne *tab, int const n);
void tri_decroissant_temps(Ligne *tab, int const n);

int searchmilis(Ligne*,int,int,int*,int);
int searchpoul(Ligne*,int,int,int*,int);
int searchmilisborn(Ligne*,int,int,int,int*,int);
int searchpoulborn(Ligne*,int,int,int,int*,int);
void print_tab(Ligne*, int);
float moyenne(Ligne*,int,int,int);
void min_max(Ligne*,int,int*,int*);

#endif
