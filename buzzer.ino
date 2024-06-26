
int buzzerPin=9;
void setup(){
  pinMode(buzzerPin,OUTPUT);
}
void loop(){
  tone(buzzerPin,523);
  delay(500);
  noTone(buzzerPin);
  delay(500);
}
