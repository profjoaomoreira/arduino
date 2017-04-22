int contador;

void setup()
{
  Serial.begin(9600);
  pinMode (11, OUTPUT);
 
  while (contador < 10 ){
  Serial.println("ofina de robotica");
  contador ++;
  digitalWrite(11, HIGH);
  delay(1000);
  }
    digitalWrite(11, LOW);
  delay(1000);
}
void loop(){}
