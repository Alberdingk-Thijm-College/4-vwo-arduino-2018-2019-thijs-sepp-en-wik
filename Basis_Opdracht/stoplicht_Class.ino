
class Stoplicht {
  int roodPin;
  int groenPin;
  boolean groen;

//constructor
  public:
  StopLicht(int roodPin, int groenPin) {
    this.roodPin = roodPin;
    this.groenPin = groenPin;
  }

  void setUp() {
    //het stoplicht word toegevoegd aan de pins
    pinMode(roodPin,OUTPUT);
    pinMode(groenPin,OUTPUT);
  }

  void roodLicht() {
    digitalWrite(roodPin, HIGH);
    delay(1000);
    digitalWrite(groenPin, LOW);   
    this.groen = false;

  }

  void groenLicht() {
    digitalWrite(roodPin, LOW);
    digitalWrite(groenPin, HIGH);    
    this.groen = true;

  }
  
}

//de global vars
  Stoplicht stoplicht1 = new Stoplicht(/* de rode pin*/1, /*de groene pin*/2),
  Stoplicht stoplicht2 = new Stoplicht(/* de rode pin*/3, /*de groene pin*/4),
  Stoplicht stoplicht3 = new Stoplicht(/* de rode pin*/5, /*de groene pin*/6),
  Stoplicht stoplicht4 = new Stoplicht(/* de rode pin*/7, /*de groene pin*/8)

void setup() {
  stoplicht1.setUp();
  stoplicht2.setUp();
  stoplicht3.setUp();
  stoplicht4.setUp();
}

void loop() {
  //stoplicht1 is actief en de rest niet
  stoplicht1.groenLicht();
  if(stoplicht1.groen) {
    stoplicht2.roodLicht();
    stoplicht3.roodLicht();
    stoplicht4.roodLicht();
  }
  delay(1000);
  stoplicht2.groenLicht();
  if(stoplicht2.groen) {
    stoplicht1.roodLicht();
    stoplicht3.roodLicht();
    stoplicht4.roodLicht();
  }
   delay(1000);
  stoplicht3.groenLicht();
  if(stoplicht3.groen) {
    stoplicht1.roodLicht();
    stoplicht2.roodLicht();
    stoplicht4.roodLicht();
  }
   delay(1000);
  stoplicht4.groenLicht();
  if(stoplicht4.groen) {
    stoplicht1.roodLicht();
    stoplicht3.roodLicht();
    stoplicht2.roodLicht();
  }
  delay(1000);
}
