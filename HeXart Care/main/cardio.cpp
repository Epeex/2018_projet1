#include "cardio.h"


int mstobpm (int ms) {              //Permet de convertir le temps entre 2 battements en bpm
  int bpm = ((1 / ms) * 60000);
  return bpm;
}



/*
        Ceci est un code non fonctionnel, on ne peux pas appeller la fonction millis ni "analogRead" dans une bibliothèque.



  int bpm_count(int PR) {               // Fonction qui permet de connaître les bpm
  const int SEUIL = 50;
  int bpm = 0;
  int a = 0;
  int b = 0;
  int c;                        //Variable temporaire
  ;

  do {
    if (a = 0) {
      a = millis();
    }
    if (a && PR > SEUIL) {     // On assigne le temps à b que si a possède déjà la valeur du temps
      b = millis();
    }
    if (a && b) {
      c = b - a;                  //Le délai entre deux battements
      bpm = (1 / (c * 0, 001)) * 60; // On convertit le temps entre deux pulsation en Battements Par Minutes
    }


  } while (!bpm);

  return bpm;
  }



  int pulse(int PR) {             // Fonction qui donne le pouls en BPM

  int bpm;
  bpm = bpm_count(PR);
  return bpm;
  }

*/
