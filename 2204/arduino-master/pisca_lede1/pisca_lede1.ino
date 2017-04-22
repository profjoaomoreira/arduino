//este programa fara o led piscar no pino 10
void setup() {
  // put your setup code here, to run once:
  #define v 100
  #define x 10000
  #define y 100
  #define z 1000
     
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
//principal funcao do programa - laco infinito

void loop() {
  
  // Lampada vermelhas:
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(x);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(y);
 
  // Lampada amarelas:
  digitalWrite(11, HIGH);
  digitalWrite(8, HIGH);
  delay(x);
  digitalWrite(11, LOW);
  digitalWrite(8, LOW);
  delay(y);
  
  // Lampada verdes:
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(x);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(y);
   
}
