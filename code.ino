#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver PWM = Adafruit_PWMServoDriver();
#define servoMIN 150
#define servoMAX 600

void setup() {
  PWM.begin();
  PWM.setPWMFreq(60);
}

void loop() {
  walk();
  //wave();
}
void walk(){
  setangle(4,0); //odam
  delay(2000);
  setangle(8,110); //odam
  delay(2000);
  setangle(2,50); //odam
  delay(2000);
  setangle(12,50);//odam
  delay(2000);
  setangle(4,40);//wra 
  setangle(8,50);//wra 
  setangle(2,110); //wra
  setangle(12,0); //wra
  delay(2000);
}
void wave(){
  setangle(13,0); 
  delay(6000);
  setangle(13,90); 
  delay(6000);
}
void setangle(int servo_num , int angle)
{
  int pulse = map(angle,0,180,150,600);
  PWM.setPWM(servo_num,0,pulse);
}
