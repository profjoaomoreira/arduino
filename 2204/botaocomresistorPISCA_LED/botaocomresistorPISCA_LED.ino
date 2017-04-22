#define BOTAO 10
#define LED   7

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BOTAO, INPUT);

  //ativa o resistor pull-up
  digitalWrite (BOTAO, LOW);
  }
  
  void loop()
{
  if (digitalRead(BOTAO) == HIGH)
      digitalWrite(LED, HIGH);
  else
      digitalWrite(LED, LOW);
}
