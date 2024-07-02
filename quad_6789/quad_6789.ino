// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int pos1=0;
int pos2=0;
 
// Create a servo object 
Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8; 
void setup() { 
   // We need to attach the servo to the used pin number 
    servo5.attach(6);
    servo6.attach(7);
    servo7.attach(8);
    servo8.attach(9); 
}
void loop(){ 
     
    servo5.write(15);
    servo6.write(45);   
    servo7.write(160);
    servo8.write(0);
}