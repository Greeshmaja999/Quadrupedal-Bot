#include <Servo.h> 
// Declare the Servo pin 
Servo hip1Servo;
Servo knee1Servo;
Servo ankle1Servo;
Servo hip2Servo;
Servo knee2Servo;
Servo ankle2Servo;
Servo hip3Servo;
Servo knee3Servo;
Servo ankle3Servo;
Servo hip4Servo;
Servo knee4Servo;
Servo ankle4Servo;
// Create a servo object 
int hip1Position = 120;
int knee1Position = 55;
int ankle1Position = 60;
int hip2Position = 110;
int knee2Position = 60;
int ankle2Position = 60;
int hip3Position = 95;
int knee3Position = 70;
int ankle3Position = 65;
int hip4Position = 140;
int knee4Position = 45;
int ankle4Position = 70;
void setup() { 
   // We need to attach the servo to the used pin number 
  hip1Servo.attach(2);   
  knee1Servo.attach(3);
  ankle1Servo.attach(4);
  hip2Servo.attach(5);   
  knee2Servo.attach(6);
  ankle2Servo.attach(7); 
  hip3Servo.attach(8);   
  knee3Servo.attach(9);
  ankle3Servo.attach(10);
  hip4Servo.attach(11);   
  knee4Servo.attach(12);
  ankle4Servo.attach(13);




  // Initialize servos to their initial positions
  hip1Servo.write(hip1Position);
  knee1Servo.write(knee1Position);
  ankle1Servo.write(ankle1Position);
  hip2Servo.write(hip2Position);
  knee2Servo.write(knee2Position);
  ankle2Servo.write(ankle2Position);
  hip3Servo.write(hip3Position);
  knee3Servo.write(knee3Position);
  ankle3Servo.write(ankle3Position);
  hip4Servo.write(hip4Position);
  knee4Servo.write(knee4Position);
  ankle4Servo.write(ankle4Position);
}  
  void loop() {
  // Move the leg forward and backward
  stand();
 delay(5000);
  sit();
  delay(5000);

 
} 
void stand() {
for(int i=0;i<41;i++){
  hip1Servo.write(120);
  knee1Servo.write(40+i);
  ankle1Servo.write(100-i);
  hip3Servo.write(100);
  knee3Servo.write(90-i);
  ankle3Servo.write(110+i);
  delay(50);
  hip2Servo.write(110);
  knee2Servo.write(80-i);
  ankle2Servo.write(110+i);
  hip4Servo.write(140);
  knee4Servo.write(25+i);
  ankle4Servo.write(70-i);
  delay(100);
}}
void sit() {
  for(int i=0;i<40;i++){
  hip1Servo.write(120);
  knee1Servo.write(80-i);
  ankle1Servo.write(60+i);
  hip3Servo.write(100);
  knee3Servo.write(50+i);
  ankle3Servo.write(150-i);
  hip2Servo.write(110);
  knee2Servo.write(40+i);
  ankle2Servo.write(150-i);
  hip4Servo.write(140);
  knee4Servo.write(65-i);
  ankle4Servo.write(30+i);
  delay(100);
}
}