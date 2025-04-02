#define LED PB0
#define LEDA PA7
#define LEDB PA6
#define LEDC PA4
#define LEDD PA2
#define LEDE PA1
#define LEDF PA10
#define LEDG PA9
#define BUTTON PB1

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LEDA, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(LEDC, OUTPUT);
  pinMode(LEDD, OUTPUT);
  pinMode(LEDE, OUTPUT);
  pinMode(LEDF, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(BUTTON, INPUT);
  digitalWrite(LED, LOW);
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, HIGH);
  digitalWrite(LEDE, HIGH);
  digitalWrite(LEDF, HIGH);
  digitalWrite(LEDG, HIGH);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}
