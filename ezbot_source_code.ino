#include "libbot.h"
#include<NewPing.h>
#include<Servo.h>

//sensor pins
#define trig_pin 6// use PWM pins instead of analog
#define echo_pin 5//open fritxzing ckt
#define maximum_distance 30//change the distance to somtehing greater
int distance=100;

NewPing sonar(trig_pin,echo_pin,maximum_distance);
Servo servo_motor; //servo name


robot ros;
bt blue;

void setup() {
Serial.begin(9600);
pinMode(trig_pin,INPUT);
pinMode(echo_pin,INPUT);

servo_motor.attach(7); //servo pin

servo_motor.write(45);
delay(2000);
distance=readPing();
delay(200);


}

void loop()
 {
   int distanceRight=0;
   int distanceLeft=0;

  if(distance>=25)
 {
   if(blue.read_bt() == 'S')  ros.moveStop();
   if(blue.read_bt() == 'F')  ros.moveForward();
   if(blue.read_bt() == 'B')  ros.moveBackward();
   if(blue.read_bt() == 'L')  ros.turnRight();
   if(blue.read_bt() == 'R')  ros.turnLeft();
 }
 else 
 {
    ros.moveStop();
    delay(300);
    ros.moveBackward();
    delay(400);
    ros.moveStop();
    delay(300);
    distanceRight=lookRight();
    delay(300);
    distanceLeft=lookLeft();
    delay(300);

    if(distance>=distanceLeft)
    {
      ros.turnRight();
      if(blue.read_bt() == 'S')  ros.moveStop();
      if(blue.read_bt() == 'F')  ros.moveForward();
      if(blue.read_bt() == 'B')  ros.moveBackward();
      if(blue.read_bt() == 'L')  ros.turnRight();
      if(blue.read_bt() == 'R')  ros.turnLeft();
    }
    else
    {
      ros.turnLeft();
      if(blue.read_bt() == 'S')  ros.moveStop();
      if(blue.read_bt() == 'F')  ros.moveForward();
      if(blue.read_bt() == 'B')  ros.moveBackward();
      if(blue.read_bt() == 'L')  ros.turnRight();
      if(blue.read_bt() == 'R')  ros.turnLeft();  
    }
 }
  distance=readPing();
}

int lookRight()
{
  servo_motor.write(0);//50
  delay(500);
  int distance=readPing();
  delay(100);
  servo_motor.write(45);
  return distance;
}  
int lookLeft()
{
  servo_motor.write(135);//170
  delay(500);
  int distance=readPing();
  delay(100);
  servo_motor.write(45);//115
  return distance;
  delay(100);
}  

int readPing()
{
  delay(70);
  int cm=sonar.ping_cm();
  if(cm==0)
  {
    cm=250;
  }
  return cm;
}
