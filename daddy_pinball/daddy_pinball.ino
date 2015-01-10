void setup()
{
 //GREEN
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);

 //RED 
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
 
 //YELLOW
 pinMode(6, OUTPUT);
 pinMode(7, OUTPUT);
 
 //BOARD
 pinMode(8, OUTPUT); //RED
 pinMode(9, OUTPUT); //RED
 pinMode(10, OUTPUT); //GREEN
}

void loop()
{
  //BOARD
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  
  //GLASS
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(1000);
  
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(1000);
  
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(200);
  
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(200);

  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(200);  
  
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(200);

  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);  
 
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(1000); 
}
