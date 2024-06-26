int blue=11;
int red= 12;
int green=10;
const int dhtPin=A0;
const float thresholdmin=10.0;
const float thresholdmax=50;
void setup(){
  Serial.begin(9600);
  pinMode(dhtPin,INPUT);
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}
void loop(){
  int sensorValue=analogRead(dhtPin);
  float temperature= map(((analogRead(dhtPin) - 20) * 3.04), 0, 1023, -40, 125);
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" celsius");
  if (temperature<thresholdmin){
    digitalWrite(blue,HIGH);
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
  }
  else if(temperature>thresholdmin && temperature<thresholdmax){
    digitalWrite(red,HIGH);
    digitalWrite(green,HIGH);
 	digitalWrite(blue,LOW);
  }
  else{
    digitalWrite(red,HIGH);
    digitalWrite(blue,LOW);
    digitalWrite(green,LOW);
  }
}
