#define BOTAO 10

void setup()
{
  pinMode(BOTAO, INPUT);
  Serial.begin(9600);
}
  void loop()
{
  if (digitalRead(BOTAO) == HIGH)
     Serial.println("Botão FECHADO");
    }

  

