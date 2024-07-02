// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int pos1=0;
int pos2=0;
 
// Create a servo object 
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4; 
void setup() { 
   // We need to attach the servo to the used pin number 
    servo1.attach(2);
    servo2.attach(3);
   servo3.attach(4);
    servo4.attach(5); 
}
void loop(){ 
     
    servo1.write(130);
    servo2.write(150);   
    servo3.write(30);
    servo4.write(30);
}