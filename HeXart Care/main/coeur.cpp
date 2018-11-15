#include "param.h"
#include <Arduino.h>

int _var_load = 9;

void all_on() { //allumer et ettendre toute les leds
	for (int i=2;i<=11;i++) {
		digitalWrite(i,HIGH);
	}
	delay(100);
	for (int i=2;i<=11;i++) {
		digitalWrite(i,LOW);
	}
}

void one_on_x_on(int x) { //allumer et etteindre une led sur x
	for (int i=2;i<=11;i+=x) {
		digitalWrite(i,HIGH);
	}
  delay(100);
	for (int i=2;i<=11;i+=x) {
		digitalWrite(i,LOW);
	}
}

void one_on(int x) { //allumer une led (on choisis la led n°x)
	digitalWrite(x+2,HIGH);
	delay(100);
	digitalWrite(x+2,LOW);
}

void chenille() { //allumer les led en mode chenille !
	for (int i=2;i<=21;i++) {
		if (i<=11) {
			digitalWrite(i,HIGH);
		} else {
			digitalWrite(i-10,LOW);
		}
		delay(100);
	}
}

void loading() { //allumer les led en mode loading (une barre qui se remplis petit a petit)
  for (int i=11;i>=2;i--) {
    for (int j=2;j<=i;j++) {
      digitalWrite(j,HIGH);
      if (j!=0) {
        digitalWrite(j-1,LOW);
      }
      delay(50);
    }
  }
  for (int j=0;j<7;j++) {
    for (int i=2;i<=11;i++) {
      if (j%2==0) {
        digitalWrite(i,LOW);
      } else {
        digitalWrite(i,HIGH);
      }
    }
    delay(100);
  }
}

void tourn() { //allumer les led comme si une élise tournait
  for (int j=0;j<3;j++) {
    for (int i=2,j=7;i<7;i++,j++) {
      digitalWrite(i,HIGH);
      digitalWrite(j,HIGH);
      if (i!=2) {
        digitalWrite(i-1,LOW);
        digitalWrite(j-1,LOW);
      }
      delay(100);
    }
    digitalWrite(6,LOW);
    digitalWrite(11,LOW);
  }
}

void load() { //pareille que loading mais on remplis une led par battement
  if (_var_load!=0) {
    for (int i=2;i<=_var_load+2;i++) {
      digitalWrite(i,HIGH);
      if (i!=2) { digitalWrite(i-1,LOW); }
      delay(50);
    }
    _var_load--;
  } else {
    for (int i=2;i<=11;i++) {
      digitalWrite(i,LOW);
      delay(50);
    }
    _var_load=9;
  }
}
