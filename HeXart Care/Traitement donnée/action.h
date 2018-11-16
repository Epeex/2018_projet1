#ifndef action.h
#define action.h

#include <stdlib.h>
#include <stdio.h>

typedef struct Ligne {
	int temp;
	int poul;
} Ligne;

void tri(Ligne tab[n],int n);
int searchmilis(Ligne*,int,int,int*,int);
int searchpoul(Ligne*,int,int,int*,int);
int searchmilisborn(Ligne*,int,int,int,int*,int);
int searchpoulborn(Ligne*,int,int,int,int*,int);

#endif
