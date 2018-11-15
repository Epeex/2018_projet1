#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct Ligne {
	int temp;
	int poul;
} Ligne;

int lectureCsv(Ligne*); //Sort la taille du tableau
