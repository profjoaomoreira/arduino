#define LED_VERDE    2
#define LED_AMARELO  3
#define LED_VERMELHO 4

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
  if (Serial.available()){
    opcao = Serial.read();
  
  switch (opcao){
  
  case 'G': digitalWrite (LED_VERDE, HIGH);
    break;
  case 'g': digitalWrite (LED_VERDE, LOW);
    break;
  case 'Y': digitalWrite (LED_AMARELO, HIGH);
    break;
  case 'y': digitalWrite (LED_AMARELO, LOW);
    break; 
  case 'R': digitalWrite (LED_VERMELHO, HIGH);
    break;
  case 'r': digitalWrite (LED_VERMELHO, LOW);
    break;
  default: Serial.println("Opçao Invalida.");
    }
  }
}
