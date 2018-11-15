void all_on(int tps_on){ 
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      delay(tps_on);
      }

void all_off(){ 
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      }

void poul(){
  all_on(150);
  all_off();
  }

typedef struct Pouls {              //Définition d'une struct pour les bpm par rapport au temps
  int bpm;
  unsigned long int mil;
} Pouls;

Pouls pouls;


int a = 0, b = 0, c = 0 ;
const int SEUILMAX = 424, SEUILMIN = 350;   // On définit le seuil pour lequel un battement est reconnu et ne pas prendre en compte le "contrepouls"


void setup() {
  Serial.begin(9600);
  pinMode("A0", INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}


void loop() {
  c = 0;
  a = 0;
  b = 0;


  do {                                            //Tant que c=0 on continue la boucle quipermet de recupérer c qui est le delta entre 2 battements.
    c = 0;
    if (b == 0 && analogRead(0) < SEUILMAX && analogRead(0) > SEUILMIN) {
      a = millis();
      poul();
    }
    else if (a != 0 && analogRead(0) < SEUILMAX && analogRead(0) > SEUILMIN) {
      b = millis();
      c = b - a;
      poul();
    }
    else {
      c = 0;
    }
  } while (c < 200);





  pouls.bpm = 60000/c;
  pouls.mil = millis();

  Serial.print(pouls.mil);          //On imprimme
  Serial.print(";");
  Serial.println(pouls.bpm);


  //Serial.println(analogRead(0));
  //delay(50);
}
