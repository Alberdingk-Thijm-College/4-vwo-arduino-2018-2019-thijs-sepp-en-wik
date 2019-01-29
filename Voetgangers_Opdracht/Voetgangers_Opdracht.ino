
//de led pins
int r1 = 13;//led rood1
int g1 = 12;//led groen1
int r2 = 11;//led rood2
int g2 = 10;//led groen2
int r3 = 9;//led rood3
int g3 = 8;//led groen3
int r4 = 7;//led rood4
int g4 = 6;//led groen4
int v1 = 5; //led voetganger1

int knopPin1 = 4;//de knoppin van het voetgngersledje
int knopState1 = 0;//de knopState van knop1

//de functies voor de stoplichten
//stoplicht1 gaat op groen
void licht1opGroen() {
  digitalWrite(v1, LOW);//voetganger1 uit

  digitalWrite(r1, LOW);//rood1 uit
  digitalWrite(r2, HIGH);//rood2 aan
  digitalWrite(r3, HIGH);//rood3 aan
  digitalWrite(r4, HIGH);//rood4 aan
  
  digitalWrite(g1, HIGH);//groen1 aan
  digitalWrite(g2, LOW);//groen2 uit
  digitalWrite(g3, LOW);//groen3 uit
  digitalWrite(g4, LOW);//groen4 uit

}

//stoplicht2 gaat op groen
void licht2opGroen() {
  digitalWrite(v1, LOW);//voetgangerslichtje uit

  digitalWrite(r1, HIGH);//rood1 aan
  digitalWrite(r2, LOW);//rood2 uit
  digitalWrite(r3, HIGH);//rood3 aan
  digitalWrite(r4, HIGH);//rood4 aan
  
  digitalWrite(g1, LOW);//groen1 uit
  digitalWrite(g2, HIGH);//groen2 aan
  digitalWrite(g3, LOW);//groen3 uit
  digitalWrite(g4, LOW);//groen4 uit

}

//stoplicht 3 gaat op groen
void licht3opGroen() {
  digitalWrite(v1, LOW);//voetganger1 uit

  digitalWrite(r1, HIGH);//rood1 aan
  digitalWrite(r2, HIGH);//rood2 aan
  digitalWrite(r3, LOW);//rood3 uit
  digitalWrite(r4, HIGH);//rood4 aan
  
  digitalWrite(g1, LOW);//groen1 uit
  digitalWrite(g2, LOW);//groen2 uit
  digitalWrite(g3, HIGH);//groen3 aan
  digitalWrite(g4, LOW);//groen4 uit

}

//stoplicht 4 gaat op groen
void licht4opGroen() {
  digitalWrite(v1, LOW);//voetganger1 uit

  digitalWrite(r1, HIGH);//rood1 aan
  digitalWrite(r2, HIGH);//rood2 aan
  digitalWrite(r3, HIGH);//rood3 aan
  digitalWrite(r4, LOW);//rood4 uit
  
  digitalWrite(g1, LOW);//groen1 uit
  digitalWrite(g2, LOW);//groen2 uit
  digitalWrite(g3, LOW);//groen3 uit
  digitalWrite(g4, HIGH);//groen4 aan

}

//het voetgangerslicht gaat aan
void voetgangerOpGroen() {
  digitalWrite(v1, HIGH);//voetganger1 aan
    
  digitalWrite(r1, HIGH);//rood1 aan
  digitalWrite(r2, HIGH);//rood2 aan
  digitalWrite(r3, HIGH);//rood3 aan
  digitalWrite(r4, HIGH);//rood4 aan
  
  digitalWrite(g1, LOW);//groen1 uit
  digitalWrite(g2, LOW);//groen2 uit
  digitalWrite(g3, LOW);//groen3 uit
  digitalWrite(g4, LOW);//groen4 uit
}

//de setup
void setup()
{
  //de leds pinnen
  pinMode(r1, OUTPUT);//rood1
  pinMode(g1, OUTPUT);//groen1
  pinMode(r2, OUTPUT);//rood2
  pinMode(g2, OUTPUT);//groen2
  pinMode(r3, OUTPUT);//rood3
  pinMode(g3, OUTPUT);//groen3
  pinMode(r4, OUTPUT);//rood4
  pinMode(g4, OUTPUT);//groen4

  pinMode(v1, OUTPUT); //het voetgangerslichtje
  pinMode(knopPin1, INPUT);//de voetgangersknop
}

//de main loop
void loop()
{
  
  knopState1 = digitalRead(knopPin1);//de status van knop1
  if(knopState1 == HIGH) {//checkt of het voetgangersknopje word ingedrukt
    voetgangerOpGroen();//voetganger aan
  } else {
    licht1opGroen();//stoplicht 1 op groen
  }
  delay(2500);

 knopState1 = digitalRead(knopPin1);
  if(knopState1 == HIGH) {//checkt of het voetgangersknopje word ingedrukt
    voetgangerOpGroen();//voetganger aan
  } else {
    licht2opGroen();//stoplicht 2 op groen
  }
  delay(2500);
  
  knopState1 = digitalRead(knopPin1);
  if(knopState1 == HIGH) {//checkt of het voetgangersknopje word ingedrukt
    voetgangerOpGroen();//voetganger aan
  } else {
    licht3opGroen();//stoplicht 3 op groen
  }
  delay(2500);
  
 knopState1 = digitalRead(knopPin1);
  if(knopState1 == HIGH) {//checkt of het voetgangersknopje word ingedrukt
    voetgangerOpGroen();//voetganger aan
  } else {
    licht4opGroen();//stoplicht 4 op groen
  }
  delay(2500);
  
  
}
