#define led_pin PB0 //今回の基板でLEDはマイコンの"PB0"ピンに接続されている
void setup() {
  // put your setup code here, to run once:
  pinMode(led_pin,OUTPUT); //ピンを初期設定する
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_pin,HIGH); //ピンに3.3Vの電圧を送り、LEDを光らせる
  delay(500); //500ms待機
  digitalWrite(led_pin,LOW); //ピンに0Vの電圧を送り、LEDを光らせない
  delay(500);
}
