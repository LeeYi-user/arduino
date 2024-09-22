void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  float volt = (val / 1023.0) * 5;
  if (volt <= 1.5)
  {
    digitalWrite(2, LOW);
  }
  else if (volt > 1.5 && volt < 3.5)
  {
    digitalWrite(2, LOW);
    delay(200);
    digitalWrite(2, HIGH);
    delay(200);
  }
  else
  {
    digitalWrite(2, HIGH);
  }
  
  Serial.print(volt);
  Serial.println("V");
  delay(200);
}
