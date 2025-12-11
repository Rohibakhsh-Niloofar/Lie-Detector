void setup()
{
  serial.begin(9600);

  PinMode(2,OUTPUT);
  PinMode(3,OUTPUT);
  PinMode(4,OUTPUT);

  digitalWrite(2. High);
  delay(500);

  digitalWrite(3,High);
  delay (500);

  digitalWrite(4.High);
  delay(500);
}

void loop()
{
  if (analogRead(A1) > 60)
  {
    digitalWrite(4,High);
  }
  else
  {
    digitalWrite(4,Low);
  }

  if (analogRead(A1) > 20)
  {
    digitalWrite(2,High);
  }
  else
  {
    digitalWrite(2,Low);
  }

  if (anologread(A1) > 45)
  {
    digitalWrite(3,High);
  }
  else
  {
    digitalWrite(3,Low);
  }


  Serial.println(analogRead(A1));
  delay(20);
}

