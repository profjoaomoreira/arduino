int vezes = 10;//qtde de vezes que a mensagem sera impressa
int contador; //ira contar quantas vezes a mensagem já foi impressa

void setup()
{
  Serial.begin(9600);

  
  for  (contador = 0; contador < vezes; contador++){
    Serial.println ("Testando o comando de repetição for()");
      for  (int i = 0; i < 50; i++){
        Serial.println ("oficina robótica");
    }
  }
}
void loop()
{

}
