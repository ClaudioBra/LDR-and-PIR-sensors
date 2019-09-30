const int ldr = A5;
int ldrvalor = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(2, INPUT);
  pinMode(ldr, INPUT);
 
  
}

void loop()
{   
 if(digitalRead(2) == HIGH){ 
    digitalWrite(13, HIGH); 
   delay(1000);
 }else{ 
   digitalWrite(13, LOW); 
 }
  ///////////////////////////////
  ldrvalor = analogRead(ldr);
  if(ldrvalor > 100){ 
    digitalWrite(12, HIGH); 
    delay(1000);
  }  
  else{ 
    digitalWrite(12, LOW);
  }  
  Serial.println(ldrvalor);
 delay(100);
 }
