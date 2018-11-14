#include "cardio.h"

typedef struct pouls {
  int bpm;
  int mil;
} Pouls;

int a = 0, b = 0, c = 0 ;
const int SEUILMAX = 424, SEUILMIN = 300;

Pouls pouls;

void setup() {
  Serial.begin(9600);
  pinMode("A0", INPUT);
}


void loop() {
  c = 0;
  do {                                            //Tant que c=0 on continue la boucle quipermet de recupérer c qui est le delta entre 2 battements.
    if (b == 0 && analogRead(0) < SEUILMAX && analogRead(0) > SEUILMIN) {
      a = millis();
      delay(330);
    }

    if (a != 0 && analogRead(0) < SEUILMAX && analogRead(0) > SEUILMIN) {
      b = millis();
    }
    if (a != 0 && b != 0) {
      c = b - a;
    }
  } while (c == 0);


  pouls.bpm = mstobpm(c);
  pouls.mil = millis();

  Serial.println(c);
  Serial.println(analogRead(0));
  Serial.print(pouls.mil);
  Serial.print(";");
  Serial.println(pouls.bpm);
  delay(500);
}
