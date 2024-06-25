#include <Servo.h>
Servo myServo;

const int servoSig=9;
int servoState;

void setup(){
  myServo.attach(servoSig);
}
void loop(){
  for(int i=0;i<=180;i+=1){
    myServo.write(i);
    delay(20);
  }
  for (int j=180;j>=0;j-=1){
    myServo.write(j);
    delay(20);
  }
}

  
