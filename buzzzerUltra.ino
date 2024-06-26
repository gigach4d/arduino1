const int buzzPin=13;
const int trigPin=9;
const int echoPin=10;
long duration;
int distance;
void setup(){
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}
void loop(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  if (distance>100){
    tone(buzzPin,1000);
  }
  else{
    noTone(buzzPin);
  }
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");
  delay(500);
}
