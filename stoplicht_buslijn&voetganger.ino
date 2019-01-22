//de led pins
int r1 = 13;
int g1 = 12;
int r2 = 11;
int g2 = 10;
int r3 = 9;
int g3 = 8;
int r4 = 7;
int g4 = 6;
int v1 = 5; //het voetgangerslichtje

int knopPin1 = 4;//de knoppin1
int knopState1 = 0;//de knopState1
int knopPin2 = 3;//de knopPin2
int knopState2 = 0;//de knopState2

//de functies voor de stoplichten
void licht1opGroen() {
  digitalWrite(v1, LOW);

  digitalWrite(r1, LOW);
  digitalWrite(r2, HIGH);
  digitalWrite(r3, HIGH);
  digitalWrite(r4, HIGH);
  
  digitalWrite(g1, HIGH);
  digitalWrite(g2, LOW);
  digitalWrite(g3, LOW);
  digitalWrite(g4, LOW);

}

void licht2opGroen() {
  digitalWrite(v1, LOW);

  digitalWrite(r1, HIGH);
  digitalWrite(r2, LOW);
  digitalWrite(r3, HIGH);
  digitalWrite(r4, HIGH);
  
  digitalWrite(g1, LOW);
  digitalWrite(g2, HIGH);
  digitalWrite(g3, LOW);
  digitalWrite(g4, LOW);

}

void licht3opGroen() {
  digitalWrite(v1, LOW);

  digitalWrite(r1, HIGH);
  digitalWrite(r2, HIGH);
  digitalWrite(r3, LOW);
  digitalWrite(r4, HIGH);
  
  digitalWrite(g1, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(g3, HIGH);
  digitalWrite(g4, LOW);

}

void licht4opGroen() {
  digitalWrite(v1, LOW);

  digitalWrite(r1, HIGH);
  digitalWrite(r2, HIGH);
  digitalWrite(r3, HIGH);
  digitalWrite(r4, LOW);
  
  digitalWrite(g1, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(g3, LOW);
  digitalWrite(g4, HIGH);

}

void voetgangerOpGroen() {
  digitalWrite(v1, HIGH);
    
  digitalWrite(r1, HIGH);
  digitalWrite(r2, HIGH);
  digitalWrite(r3, HIGH);
  digitalWrite(r4, HIGH);
  
  digitalWrite(g1, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(g3, LOW);
  digitalWrite(g4, LOW);
}


void setup()
{
  //de leds pinnen
  pinMode(r1, OUTPUT);
  pinMode(g1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(g3, OUTPUT);
  pinMode(r4, OUTPUT);
  pinMode(g4, OUTPUT);

  pinMode(v1, OUTPUT); //het voetgangerslichtje
  pinMode(knopPin1, INPUT);
  pinMode(knopPin2, INPUT);

}

void loop()
{
  
  knopState1 = digitalRead(knopPin1);
  knopState2 = digitalRead(knopPin2);
  if(knopState2 == HIGH) {
    licht1opGroen();
  } else {
  if(knopState1 == HIGH) {
    voetgangerOpGroen();
  } else {
    licht1opGroen();
  }
  }
  delay(2500);

 knopState1 = digitalRead(knopPin1);
  knopState2 = digitalRead(knopPin2);
  if(knopState2 == HIGH) {
    licht1opGroen();
  } else {
  if(knopState1 == HIGH) {
    voetgangerOpGroen();
  } else {
    licht2opGroen();
  }
  }
  delay(2500);
  
  knopState1 = digitalRead(knopPin1);
  knopState2 = digitalRead(knopPin2);
  if(knopState2 == HIGH) {
    licht1opGroen();
  } else {
  if(knopState1 == HIGH) {
    voetgangerOpGroen();
  } else {
    licht3opGroen();
  }
  }
  delay(2500);
  
 knopState1 = digitalRead(knopPin1);
  knopState2 = digitalRead(knopPin2);
  if(knopState2 == HIGH) {
    licht1opGroen();
  } else {
  if(knopState1 == HIGH) {
    voetgangerOpGroen();
  } else {
    licht4opGroen();
  }
  }
  delay(2500);
  
  
}
