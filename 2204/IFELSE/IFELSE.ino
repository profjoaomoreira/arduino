char caractere;

void setup()
{
  Serial.begin(9600);
}
  void loop()
{
  
  if (Serial.available()){
    caractere = Serial.read();
    Serial.print ("caractere lido:");
    Serial.println(caractere);
  }
  else{
    Serial.println("Insira um caractere!"); 
  }
      delay(400);
}

  

