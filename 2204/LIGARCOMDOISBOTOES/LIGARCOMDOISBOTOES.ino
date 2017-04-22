#define conta_mais 10
#define conta_menos 4
int conta = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("Conta + -");
  pinMode(conta_mais, INPUT);
  pinMode(conta_menos, INPUT_PULLUP);
}

void loop() {
 if (digitalRead(conta_mais)==LOW){
  conta = conta+1;
  Serial.println(conta);}
  delay(100);
  if (digitalRead(conta_menos)==LOW)
  {conta = conta-1;
  Serial.println(conta);
  delay(100);
    
 }
}
