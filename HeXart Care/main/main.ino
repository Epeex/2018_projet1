#include "cardio.h"

typedef struct pouls {
  int bpm;
  int time;
} Pouls;

int a, b, c ;
const int SEUIL = 50;

Pouls pouls;

void setup() {
  pinMode("A0", INPUT);
}


void loop() {

  c = 0;
  do {                                            //Tant que c=0 on continue la boucle quipermet de recupérer c qui est le delta entre 2 battements.
    if (!a && analogRead(0) > SEUIL) {
      a = pulse_a(analogRead(0), millis());
    }
    if (!b && a && analogRead(0) > SEUIL) {
      b = pulse_b(analogRead(0), millis());
    }
    if (a && b) {
      c = b - a;
    }
  } while (!c);
  a = 0;
  b = 0;


  pouls.bpm = mstobpm(c);
  pouls.time = millis();

  Serial.print(pouls.time);
  Serial.print(pouls.bpm);

}
