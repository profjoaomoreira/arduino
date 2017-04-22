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
    
  if (opcao == 'G')
    digitalWrite (LED_VERDE, HIGH);
  else if (opcao == 'g')
    digitalWrite (LED_VERDE, LOW);
    
  else if (opcao == 'Y')
    digitalWrite (LED_AMARELO, HIGH);
  else if (opcao == 'y')
    digitalWrite (LED_AMARELO, LOW);
  else if (opcao == 'R')
    digitalWrite (LED_VERMELHO, HIGH);
  else if (opcao == 'r')
    digitalWrite (LED_VERMELHO, LOW);
  else if (opcao == 'A'){
    digitalWrite (LED_VERDE, LOW);
    digitalWrite (LED_AMARELO, LOW);
    digitalWrite (LED_VERMELHO, LOW);}  
  else 
    Serial.println("Opçao Invalida.");
    }
  }



  

