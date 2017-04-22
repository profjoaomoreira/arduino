int contador;

void setup()
{
  
  Serial.begin (9600);

  contador =0;

  while (contador < 10 ){
  Serial.println("ofina de robotica");
  contador ++;
  }
}
void loop(){}
