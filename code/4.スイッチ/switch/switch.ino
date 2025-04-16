#define LED PB0
#define BUTTON PB1
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(BUTTON)) {
    digitalWrite(LED,HIGH);
  } else {
    digitalWrite(LED,LOW);
  }
}
