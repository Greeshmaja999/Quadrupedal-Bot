#include <Servo.h> 
// Declare the Servo pin 
int pos10=0;
 
// Create a servo object 
Servo Servo10; 
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo10.attach(10); 
}
void loop(){ 
   for(pos10=0;pos10<100;pos10++){
      Servo10.write(pos10); 
        
    }
 
}