#include<Ultrasonic.h>
Ultrasonic myUltra(12,13);
int distance;
void setup(){
  Serial.begin(9600);
}
void loop(){
  distance=myUltra.read();
  Serial.print("Distance in cm:");
  Serial.println(distance);
  delay(1000);
}
