/*
|MOTOR  |MODE     | IN1   | IN2   | IN3   |  IN4  |
---------------------------------------------------
|MOTORA |FORWARD  |17{H}  |12{L}  |   x   |  x    |
|       |REVERSE  |17{L}  |12{H}  |   x   |  x    |
|       |BRAKE    |17{H}  |12{H}  |   x   |  x    |
|MOTORB |FORWARD  | x     | x     |18{H}  |19{L}  |
|       |REVERSE  | x     | x     |18{L}  |19{H}  |
|       |BRAKE    | x     | x     |18{H}  |19{H}  |
*/
void setup() {
  // put your setup code here, to run once:
  pinMode(17,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(18,OUTPUT);
  pinMode(19,OUTPUT);
  Serial.begin(115200);
  delay(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(17,HIGH);
  digitalWrite(12,LOW);
  //=== Write Your Code Here ===


  //============================
  delay(5000);
  digitalWrite(17,HIGH);
  digitalWrite(12,HIGH);
  while(1);
}
