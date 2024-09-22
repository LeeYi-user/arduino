void light(int pin, int ms, int times) {
  for (int i = 0; i < times; i++)
  {
    digitalWrite(pin, HIGH);
    delay(ms);
    digitalWrite(pin, LOW);

    if (times > 1)
    {
      delay(ms);
    }
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  light(2, 3000, 1);
  light(3, 200, 3);
  light(4, 3000, 1);
  light(3, 200, 3);
}
