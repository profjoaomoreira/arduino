#define LED_VERDE    5
#define LED_AMARELO  6
#define LED_VERMELHO 7

char opcao;

void setup()
{
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
  Serial.begin(9600);
}
  void loop()
{
    opcao = Serial.read();
    
  if (opcao == 'G')
    digitalWrite (LED_VERDE, HIGH);
  if (opcao == 'Y')
    digitalWrite (LED_AMARELO, HIGH);
  if (opcao == 'R')
    digitalWrite (LED_VERMELHO, HIGH);
  
  if (opcao == 'A'){
    digitalWrite (LED_VERDE, LOW);
    digitalWrite (LED_AMARELO, LOW);
    digitalWrite (LED_VERMELHO, LOW);}  
}
  

