void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

int count = 0;
int key_down = 0;
int led_type = 0;

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(2);

  Serial.println(led_type);

  if (val == 1)
  {
    count++;
  }
  else
  {
    key_down = 0;
    count = 0;
  }
  
  if (count >= 50 && key_down == 0)
  {
    key_down = 1;
    led_type++;

    if (led_type > 2)
    {
      led_type = 0;
    }
  }

  if (led_type == 0)
  {
    analogWrite(3, 0);
  }
  else if (led_type == 1)
  {
    analogWrite(3, 128);
  }
  else
  {
    analogWrite(3, 255);
  }
}
