#include <stdio.h>
#include <stdlib>
#include "menu.h"


int menu_principal(){
  int c;                                                                         // Variable du choix.
  printf("Choisissez une action à effectuer:\n", );
  printf("1- Afficher les mesusres.\n", );
  printf("2- Classer et afficher par pouls.\n", );
  printf("3- Classer et afficher par temps.\n", );
  printf("4- Effectuer une recherche en fonction du temps.\n", );
  printf("5- Afficher la moyenne dans une plage de temps.\n", );
  printf("6- Afficher le nombre de lignes de données.\n", );
  printf("7- Rechercher et afficher le max et le min.\n", );
  scanf("Choix: %d",c );
  return c;
}

int menu_1(){
  int c;                                                                         // Variable du choix.
  printf("Choisissez un ordre:\n");
  printf("1- Croissant.");
  printf("2- Décroissant\n");
  scanf("Choix: %d",c );
  return c;
}

int menu_4(){
  int c;
  scanf("Quel temps voulez vous rechercher (en ms) ?: %d",c );
  return c;
}

void menu_5(int *a, int *b){                                                      // Passage de la fonction par paramètre afon d'en ressortir 2 valeurs.
  scanf("Donner la première borne (en ms): %d", *a);
  scanf("Donner la deuxième borne (en ms): %d", *b);
}
