const int dhtPin=A0;
const int buzzPin=10;
const float thresholdval=25.0;
void setup(){
  pinMode(dhtPin,INPUT);
  pinMode(buzzPin,OUTPUT);
  digitalWrite(buzzPin,LOW);
}
void loop(){
  int sensorValue=analogRead(dhtPin);
  float temperature= sensorValue *(3.0/1023.0)*10;
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" celsius");
  if (temperature>thresholdval){
    digitalWrite(buzzPin,HIGH);
  }
  else{
    digitalWrite(buzzPin,LOW);
  }
}
