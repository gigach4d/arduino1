int buttonpin=5;
int ledpin=6;

void setup(){
  pinMode(buttonpin,INPUT);
  pinMode(ledpin,OUTPUT);
}
int buttonstate=0;
void loop(){
  buttonstate=digitalRead(buttonpin);
  if (buttonstate==HIGH){
    digitalWrite(ledpin,HIGH);
  }
  else{
    digitalWrite(ledpin,LOW);
  }
}
