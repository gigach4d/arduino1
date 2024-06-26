const int sw1=12;
const int sw2=11;
const int sw3=10;
const int sw4=9;
const int red=5;
const int green=4;

void setup(){
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(sw3,INPUT);
  pinMode(sw4,INPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
}
void loop(){
  if (digitalRead(sw1)==HIGH && digitalRead(sw3)==HIGH && digitalRead(sw2)==LOW && digitalRead(sw4)==LOW){
    digitalWrite(green,HIGH);
    digitalWrite(red,LOW);   
  }
  else{
    digitalWrite(red,HIGH);
  	digitalWrite(green,LOW);
  }
}

  
    
