int LED_D1 = 13;
int LED_D2 = 12;
int LED_D3 = 11;
int LED_D4 = 10;

void setup()
{
  Serial.begin(9600);

  pinMode(A1, INPUT);
  pinMode(A1, INPUT);
  pinMode(A1, INPUT);

  pinMode(LED_D1, OUTPUT);
  pinMode(LED_D2, OUTPUT);
  pinMode(LED_D3, OUTPUT);
  pinMode(LED_D4, OUTPUT);

  digitalWrite(LED_D1, HIGH);
  digitalWrite(LED_D2, HIGH);
  digitalWrite(LED_D3, HIGH);
  digitalWrite(LED_D4, HIGH);

  Serial.println("App Init OK");
}

void loop()
{
    if(digitalRead(A1) == HIGH)
    {
      digitalWrite(LED_D1, HIGH);
    }
    else if(digitalRead(A1) == LOW)
    {
      digitalWrite(LED_D1, LOW);
    }
}
