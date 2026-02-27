/*
Developer: Mafe Revelo
Sketch description: 5-LED Binary Counter (0–20)
*/

//SKETCH: 5-LED BINARY COUNTER

#define LED1 13
#define LED2 12
#define LED3 11
#define LED4 10
#define LED5 9

int delayt = 2000;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  // 0 -> 00000
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  Serial.println("0 -> 00000");
  delay(delayt);

  // 1 -> 00001
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  Serial.println("1 -> 00001");
  delay(delayt);

  // 2 -> 00010
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  Serial.println("2 -> 00010");
  delay(delayt);

  // 3 -> 00011
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  Serial.println("3 -> 00011");
  delay(delayt);

  // 4 -> 00100
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  Serial.println("4 -> 00100");
  delay(delayt);

  // 5 -> 00101
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  Serial.println("5 -> 00101");
  delay(delayt);

  // 6 -> 00110
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  Serial.println("6 -> 00110");
  delay(delayt);

  // 7 -> 00111
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  Serial.println("7 -> 00111");
  delay(delayt);

  // 8 -> 01000
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  Serial.println("8 -> 01000");
  delay(delayt);

  // 9 -> 01001
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  Serial.println("9 -> 01001");
  delay(delayt);

  // 10 -> 01010
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  Serial.println("10 -> 01010");
  delay(delayt);

  // 11 -> 01011
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  Serial.println("11 -> 01011");
  delay(delayt);

  // 12 -> 01100
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  Serial.println("12 -> 01100");
  delay(delayt);

  // 13 -> 01101
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  Serial.println("13 -> 01101");
  delay(delayt);

  // 14 -> 01110
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  Serial.println("14 -> 01110");
  delay(delayt);

  // 15 -> 01111
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  Serial.println("15 -> 01111");
  delay(delayt);

  // 16 -> 10000
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  Serial.println("16 -> 10000");
  delay(delayt);

  // 17 -> 10001
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  Serial.println("17 -> 10001");
  delay(delayt);

  // 18 -> 10010
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  Serial.println("18 -> 10010");
  delay(delayt);

  // 19 -> 10011
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  Serial.println("19 -> 10011");
  delay(delayt);

  // 20 -> 10100
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  Serial.println("20 -> 10100");
  delay(delayt);

}