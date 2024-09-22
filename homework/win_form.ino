void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if (Serial.available())
  {
    char c = Serial.read();

    if (c == 'a')
    {
      Serial.println("LED ON");
      digitalWrite(13, HIGH);
    }
    else if (c == 'b')
    {
      Serial.println("LED OFF");
      digitalWrite(13, LOW);
    }
  }
}
