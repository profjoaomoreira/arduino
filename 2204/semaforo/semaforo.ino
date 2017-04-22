const int BOTAO = 6;
const int VERDE = 8;
const int AMARELO = 9;
const int VERMELHO = 10;

void setup() {
  
  pinMode(VERDE, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERMELHO, OUTPUT);
  pinMode(BOTAO, INPUT_PULLUP);
}

void loop() {
  //abre o terminal
  digitalWrite(VERDE, HIGH);
  while (digitalRead(BOTAO))
    ;
  
  //muda para o amarelo
  digitalWrite(VERDE, LOW);
  digitalWrite(AMARELO, HIGH);
  delay(4000);
  
  digitalWrite(AMARELO, LOW);
  digitalWrite(VERMELHO, HIGH);
  delay(8000);

  //abre novamente
  digitalWrite(VERMELHO, LOW);
  }

