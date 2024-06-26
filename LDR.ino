int ldr=A0;
int led=5;
int THRESHOLD=500;
void setup(){
 	Serial.begin(9600);
	pinMode(led,OUTPUT);
}

void loop(){
  int ldrvalue=analogRead(ldr);
  Serial.print("LDR value: ");
  Serial.println(ldrvalue);
  if (ldrvalue>THRESHOLD){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
  delay(1000);
}

    
