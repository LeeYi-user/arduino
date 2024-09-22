void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float val = analogRead(0);
  Serial.println((val / 1023.0 * 5) / 0.01);
  delay(200);
}
