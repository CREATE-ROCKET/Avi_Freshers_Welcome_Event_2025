#define LED PB0
#define LEDA PA7
#define LEDB PA6
#define LEDC PA4
#define LEDD PA2
#define LEDE PA1
#define LEDF PA10
#define LEDG PA9
#define BUTTON PB1

void display_segments(int number)
{
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, HIGH);
  digitalWrite(LEDE, HIGH);
  digitalWrite(LEDF, HIGH);
  digitalWrite(LEDG, HIGH);
  switch (number)
  {
    case 0:
      // A、B、C、D、E、F点灯
      digitalWrite(LEDA, LOW);
      digitalWrite(LEDB, LOW);
      digitalWrite(LEDC, LOW);
      digitalWrite(LEDD, LOW);
      digitalWrite(LEDE, LOW);
      digitalWrite(LEDF, LOW);
      break;
    case 1:
      // B、C点灯
      digitalWrite(LEDB, LOW);
      digitalWrite(LEDC, LOW);
      break;
    case 2:
      // A、B、D、E、G点灯
      digitalWrite(LEDA, LOW);
      digitalWrite(LEDB, LOW);
      digitalWrite(LEDD, LOW);
      digitalWrite(LEDE, LOW);
      digitalWrite(LEDG, LOW);
      break;
    case 3:
      // A、B、C、D、G点灯
      digitalWrite(LEDA, LOW);
      digitalWrite(LEDB, LOW);
      digitalWrite(LEDC, LOW);
      digitalWrite(LEDD, LOW);
      digitalWrite(LEDG, LOW);
      break;
    case 4:
      // B、C、F、G点灯
      digitalWrite(LEDB, LOW);
      digitalWrite(LEDC, LOW);
      digitalWrite(LEDF, LOW);
      digitalWrite(LEDG, LOW);
      break;
    case 5:
      // A、C、D、F、G点灯
      digitalWrite(LEDA, LOW);
      digitalWrite(LEDC, LOW);
      digitalWrite(LEDD, LOW);
      digitalWrite(LEDF, LOW);
      digitalWrite(LEDG, LOW);
      break;
    case 6:
      // A、C、D、E、F、G点灯
      digitalWrite(LEDA, LOW);
      digitalWrite(LEDC, LOW);
      digitalWrite(LEDD, LOW);
      digitalWrite(LEDE, LOW);
      digitalWrite(LEDF, LOW);
      digitalWrite(LEDG, LOW);
      break;
    case 7:
      // A、B、C点灯
      digitalWrite(LEDA, LOW);
      digitalWrite(LEDB, LOW);
      digitalWrite(LEDC, LOW);
      break;
    case 8:
      // A、B、C、D、E、F、G点灯
      digitalWrite(LEDA, LOW);
      digitalWrite(LEDB, LOW);
      digitalWrite(LEDC, LOW);
      digitalWrite(LEDD, LOW);
      digitalWrite(LEDE, LOW);
      digitalWrite(LEDF, LOW);
      digitalWrite(LEDG, LOW);
      break;
    case 9:
      // A、B、C、D、F、G点灯
      digitalWrite(LEDA, LOW);
      digitalWrite(LEDB, LOW);
      digitalWrite(LEDC, LOW);
      digitalWrite(LEDD, LOW);
      digitalWrite(LEDF, LOW);
      digitalWrite(LEDG, LOW);
      break;
    default:
      break;
  }
}

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

int counter;

void loop() {
  digitalWrite(LED, !digitalRead(LED));
  display_segments(counter ++);
  if (counter == 10)
    counter = 0;
  delay(1000);
}
