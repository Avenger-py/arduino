void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  for(int i=0; i<=255; i++)
  {
    analogWrite(3, i); // input values can range from 0 to 255
    delay(20);
  }
  analogWrite(3, 0); // completely off, we can also use digitalWrite() command and set it as LOW in this case 
  
  
  for(int i=0; i<=255; i++)
  {
    analogWrite(5, i); 
    delay(20);
  }
  analogWrite(5, 0);

  
  for(int i=0; i<=255; i++)
  {
    analogWrite(6, i);
    delay(20); 
  }
  analogWrite(6, 0);
 }
