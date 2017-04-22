#define BOTAO 7

void setup()
{
  pinMode(BOTAO, INPUT);
  Serial.begin(9600);
}
  void loop()
{
  if (digitalRead(BOTAO) == HIG)
     Serial.println("Botão ABERTO");
    }

  

