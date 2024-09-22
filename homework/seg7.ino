int seg7[10][7] = { { 7, 6, 4, 2, 3, 9, 0  },
                    { 6, 4, 0, 0, 0, 0, 0  },
                    { 7, 6, 2, 3, 10, 0, 0 },
                    { 7, 6, 4, 2, 10, 0, 0 },
                    { 6, 4, 9, 10, 0, 0, 0 },
                    { 7, 4, 2, 9, 10, 0, 0 },
                    { 7, 4, 2, 3, 9, 10, 0 },
                    { 7, 6, 4, 0, 0, 0, 0  },
                    { 7, 6, 4, 2, 3, 9, 10 },
                    { 7, 6, 4, 2, 9, 10, 0 } };

void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT); // a
  pinMode(6, OUTPUT); // b
  pinMode(4, OUTPUT); // c
  pinMode(2, OUTPUT); // d
  pinMode(3, OUTPUT); // e
  pinMode(9, OUTPUT); // f
  pinMode(10, OUTPUT); // g
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 9; i >= 0; i--)
  {
    for (int j = 0; j < 7; j++)
    {
      digitalWrite(seg7[8][j], LOW);
    }
    
    for (int j = 0; j < 7; j++)
    {
      if (seg7[i][j] == 0)
      {
        continue;
      }
      
      digitalWrite(seg7[i][j], HIGH);
    }

    if (i == 0)
    {
      tone(12, 261.63, 500);
    }

    delay(1000);
  }
}
