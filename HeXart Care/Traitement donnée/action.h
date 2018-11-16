#ifndef actionh
#define actionh

#include <stdlib.h>
#include <stdio.h>


void tri(Ligne,int);
int searchmilis(Ligne*,int,int,int*,int);
int searchpoul(Ligne*,int,int,int*,int);
int searchmilisborn(Ligne*,int,int,int,int*,int);
int searchpoulborn(Ligne*,int,int,int,int*,int);
void print_tab(Ligne*, int);
float moyenne(Ligne*,int,int,int);
void minmax(Ligne*,int,int*,int*)

#endif
