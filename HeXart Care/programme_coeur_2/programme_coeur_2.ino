#include "param.h"

int msg;
int x;
int varload=9;

void setup() {
  Serial.begin(9600);
  for (int i=2;i<=11;i++) {
    pinMode(i,OUTPUT);
    digitalWrite(i,LOW);
  }
}

void loop() {
  if (Serial.available()) {
    msg=Serial.read()-48;

    //Toute les led allumées puis eteintes
    if (msg==1) {
      all_on();

    //1 Led allumée sur x
    } else if (msg==2) {
      do {
        x=Serial.read();
      } while (x==-1);
      one_on_x_on(x-48);

    //allumer une led précise
    } else if (msg==3) {
      do {
        x=Serial.read();
      } while (x==-1);
      one_on(x-48);

    //allumer led chenille
    } else if (msg==4) {
      chenille();

    //allumer led en mode loading
    } else if (msg==5) {
      loading();

    //allumer en tourniquet
    } else if (msg==6) {
      tourn();

    //allumer les led pitit a pitit
    } else if (msg==7) {
      load(varload);
      varload--;
      if (varload==-1) {
        varload=9;
      }
    }


    while (Serial.available()){
      Serial.read();
    }
  }
}
