//void light(int pin, int ms, int times) {
//  for (int i = 0; i < times; i++)
//  {
//    digitalWrite(pin, HIGH);
//    delay(ms);
//    digitalWrite(pin, LOW);
//
//    if (times > 1)
//    {
//      delay(ms);
//    }
//  }
//}

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  Serial.begin(9600);
}

int count = 0;
bool trigger = false;

void loop() {
  // put your main code here, to run repeatedly:
  int volt = digitalRead(2);

  if (!trigger && volt == 1)
  {
    count++;
    trigger = true;
    Serial.println(count);
  }

  if (trigger && volt == 0)
  {
    trigger = false;
  }
}
