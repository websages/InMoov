// Controlling a servo position using a potentiometer (variable resistor) 
// by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 

#include <Servo.h> 
  
Servo thumbservo,indexservo,middleservo,ringservo,littleservo;  // create servo object to control a servo 
  
int thumbpin = 0;  // analog pin for thumb connect the flex sensor
int indexpin = 1; // analog pin for index connect the flex sensor
int middlepin = 2; // analog pin for middle connect the flex sensor
int ringpin=3; // analog pin for ring connect the flex sensor
int littlepin=4; // analog pin for little connect the flex sensor
int val1,val2,val3,val4,val5;    // variable to read the value from the analog pin 
  
void setup() 
{ 
   thumbservo.attach(5);  // attaches the servo on pin 5 for the thumb 
   indexservo.attach(6); // attaches the servo on pin 6 for index finger
   middleservo.attach(9); // attaches the servo on pin 9 for the middle finger
   ringservo.attach(10); // attaches the servo on pin 10 for the ring finger
   littleservo.attach(11); // attaches the servo on pin 11 for the little finger   
   
} 
  
void loop() 
{ 
   val1 = analogRead(thumbpin);            // reads the value of the potentiometer (value between 0 and 1023) 
   val1= map(val1, 768, 853, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
   thumbservo.write(val1);   // sets the servo position according to the scaled value 
   
   val2 = analogRead(indexpin);            // reads the value of the potentiometer (value between 0 and 1023) 
   val2= map(val2, 768, 853, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
   indexservo.write(val2);   // sets the servo position according to the scaled value 
   
   val3 = analogRead(middlepin);            // reads the value of the potentiometer (value between 0 and 1023) 
   val3= map(val3, 768, 853, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
   middleservo.write(val3);   // sets the servo position according to the scaled value 
      
   val4 = analogRead(ringpin);            // reads the value of the potentiometer (value between 0 and 1023) 
   val4= map(val4, 768, 853, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
   ringservo.write(val4);   // sets the servo position according to the scaled value 
      
   val5 = analogRead(littlepin);            // reads the value of the potentiometer (value between 0 and 1023) 
   val5= map(val5, 768, 853, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
   littleservo.write(val5);   // sets the servo position according to the scaled value 
   delay(10);                           // waits for the servo to get there 
}

