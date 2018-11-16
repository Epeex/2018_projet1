#include <stdio.h>
#include <stdlib>
#include "menu.h"


int menu_principal(){
  int c;                                                                         // Variable du choix.
  printf("Choisissez une action à effectuer:\n");
  printf("1- Afficher les mesusres.\n");
  printf("2- Classer et afficher par pouls.\n");
  printf("3- Classer et afficher par temps.\n");
  printf("4- Effectuer une recherche en fonction du temps.\n");
  printf("5- Effectuer une recherche en fonction du poul.\n");
  printf("6- Afficher la moyenne dans une plage de temps.\n");
  printf("7- Afficher le nombre de lignes de données.\n");
  printf("8- Rechercher et afficher le max et le min.\n");
  printf("\tChoix : ");
  scanf("%d",&c );
  printf("\n\n");
  return c;
}

int menu_2(){
  int c;                                                                         // Variable du choix.
  printf("Choisissez un ordre:\n");
  printf("1- Croissant.\n");
  printf("2- Décroissant\n");
  printf("\tChoix : ");
  scanf("%d",&c );
  printf("\n\n");
  return c;
}

int menu_4(){
  int c;
  printf("Quel temps voulez vous rechercher (en ms) ?: ")
  scanf("%d",&c );
  printf("\n\n");
  return c;
}

void menu_5(int *a, int *b){                                                  // Passage de la fonction par paramètre afon d'en ressortir 2 valeurs.
  printf("Donner la première borne (en ms): ")
  scanf("%d", a);
  printf("\nDonner la deuxième borne (en ms): ");
  scanf("%d", b);
  printf("\n\n");
}
