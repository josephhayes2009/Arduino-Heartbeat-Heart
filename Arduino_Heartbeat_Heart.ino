const int LED1 = 3;
const int LED2 = 5;
const int LED3 = 6;
const int LED4 = 9;
const int LED5 = 10;
const int LED6 = 11;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
}

void heart(int brightness) {
  analogWrite(LED1, brightness);
  analogWrite(LED2, brightness);
  analogWrite(LED3, brightness);
  analogWrite(LED4, brightness);
  analogWrite(LED5, brightness);
  analogWrite(LED6, brightness);
}

void loop() {


  heart(35);
  delay(110);


  heart(0);
  delay(250);


  for (int brightness = 0; brightness <= 200; brightness++) {
    heart(brightness);
    delay(6);
  }


  for (int brightness = 200; brightness >= 0; brightness--) {
    heart(brightness);
    delay(11);
  }

  heart(0);
  delay(800);
}
