class robot
{
 int IN1=8;
 int IN2=9;
 int IN3=10;
 int IN4=11;

 public:
 void moveStop()
 {
   digitalWrite(IN3,LOW);
   digitalWrite(IN1,LOW);
   digitalWrite(IN4,LOW);
   digitalWrite(IN2,LOW);  
 }

 void moveForward()
 {
   digitalWrite(IN1,HIGH);//1,3 are high= both motor rotates forward and backward rotataion is zero.
   digitalWrite(IN3,HIGH);
   digitalWrite(IN2,LOW);
   digitalWrite(IN4,LOW);      
 }
 void moveBackward()
 {
   digitalWrite(IN2,HIGH); //analogWrite(IN)
   digitalWrite(IN4,HIGH);
   digitalWrite(IN1,LOW);
   digitalWrite(IN3,LOW);      
 }

 void turnRight()
 {
   digitalWrite(IN1,HIGH);//digitalWrite(IN1,HIGH);//analogWrite(IN1,150);//1423 
   digitalWrite(IN2,LOW);//digitalWrite(IN2,LOW);//analogWrite(IN2,0);
   digitalWrite(IN3,LOW);//digitalWrite(IN3,LOW);//analogWrite(IN3,0);
   digitalWrite(IN4,HIGH);//digitalWrite(IN4,HIGH);//analogWrite(IN4,150);              
 }

 void turnLeft()
 {
   digitalWrite(IN1,LOW);//digitalWrite(IN1,LOW);//2314
   digitalWrite(IN2,HIGH);//digitalWrite(IN2,HIGH);
   digitalWrite(IN3,HIGH);//digitalWrite(IN3,HIGH);
   digitalWrite(IN4,LOW);//digitalWrite(IN4,LOW);         
 }
};


class bt
{
 public :
 char read_bt()
 {
   Serial.println(Serial.read());
   if(Serial.available())          
   return Serial.read();
 }
};

