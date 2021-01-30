int red = 5; //initialize digital pin 5
int yel = 4; //initialize digital pin 4
int gre = 3; //initialize digital pin 3
int buz = 13;

int Buzzer(int del){
  //function makes the buzzer beep for a short amount of time
  digitalWrite(buz, HIGH);
  delay(del);
  digitalWrite(buz, LOW);
}


void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yel, OUTPUT);
  pinMode(gre, OUTPUT);
  pinMode(buz, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red, HIGH);
  Buzzer(500);
  digitalWrite(yel, HIGH);
  Buzzer(500);
  digitalWrite(gre, HIGH);
  Buzzer(100);
  Buzzer(100);
  Buzzer(100);

  digitalWrite(red, LOW);
  digitalWrite(yel, LOW);
  digitalWrite(gre, LOW);
  delay(1000);

}
