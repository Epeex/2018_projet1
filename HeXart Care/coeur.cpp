#include "param.h"

void all_on() {
	for (int i=2;i<=11;i++) {
		digitalWrite(i,HIGH);
	}
	delay(100);
	for (int i=2;i<=11;i++) {
		digitalWrite(i,LOW);
	}
}

void one_on_x_on(int x) {
	for (int i=2;i<=11;i+=x) {
		digitalWrite(i,HIGH);
	}
  delay(100);
	for (int i=2;i<=11;i+=x) {
		digitalWrite(i,LOW);
	}
}

void one_on(int x) {
	digitalWrite(x+2,HIGH);
	delay(100);
	digitalWrite(x+2,LOW);
}

void chenille() {
	for (int i=2;i<=21;i++) {
		if (i<=11) {
			digitalWrite(i,HIGH);
		} else {
			digitalWrite(i-10,LOW);
		}
		delay(100);
	}
}

void loading() {
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

void tourn() {
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

void load(int x) {
  if (x!=0) {
    for (int i=2;i<=x+2;i++) {
      digitalWrite(i,HIGH);
      if (i!=2) { digitalWrite(i-1,LOW); }
      delay(50);
    }
  } else {
    for (int i=2;i<=11;i++) {
      digitalWrite(i,LOW);
      delay(50);
    }
  }
}
