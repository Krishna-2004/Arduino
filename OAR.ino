int trigPin = 9;
int echoPin = 10;
int revright = 4;      //REVerse motion of Right motor
int fwdleft = 7;      
int revleft= 6;       
int fwdright= 5;       //ForWarD motion of Right motor
int c = 0;
//#define servo A5
//void servoPulse(int,int);
//long Ultrasonic_read();
//void forward();
//void Check_side();
//int Set=15;
//int distance_L, distance_F, distance_R; 
void setup() {
  //Serial.begin(9600); 
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  // put your setup code here, to run once:
  //pinMode(servo, OUTPUT);

 /*for (int angle = 70; angle <= 140; angle += 5)  {
   servoPulse(servo, angle);  }
 for (int angle = 140; angle >= 0; angle -= 5)  {
   servoPulse(servo, angle);  }

 for (int angle = 0; angle <= 70; angle += 5)  {
   servoPulse(servo, angle);  }

  distance_F = Ultrasonic_read();

  delay(500);
}*/
}
void loop() {
  long duration, distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
  //Serial.print(distance);
  //Serial.println("CM");
  delay(10);
 
 // distance_F = Ultrasonic_read();
  /*if(distance_F > Set){
    forward();
  }
  else{
    Check_side();
  }*/
  if((distance>20))
 {
  digitalWrite(5,HIGH);                               //       If you dont get proper movements of your robot,
   digitalWrite(4,LOW);                               //        then alter the pin numbers
   digitalWrite(6,LOW);                               //
   digitalWrite(7,HIGH);                              //
 }
 
  else if(distance<20)  
 {
   digitalWrite(5,LOW);
   digitalWrite(4,LOW);
   digitalWrite(6,LOW);                                  //HIGH
   digitalWrite(7,LOW);
   delay(10);
   digitalWrite(5,HIGH);
   digitalWrite(4,LOW);
   digitalWrite(6,HIGH);                                  //HIGH
   digitalWrite(7,LOW);
                                            
 }

 /*else{
   digitalWrite(5,LOW);
   digitalWrite(4,LOW);
   digitalWrite(6,LOW);                                  //HIGH
   digitalWrite(7,LOW);
   delay(10);
   digitalWrite(5,LOW);
   digitalWrite(4,HIGH);
   digitalWrite(6,LOW);                                  //HIGH
   digitalWrite(7,HIGH);
 }*/

}

  /*void servoPulse (int pin, int angle){
    int pwm = (angle*11) + 500;      // Convert angle to microseconds
    digitalWrite(pin, HIGH);
    delayMicroseconds(pwm);
    digitalWrite(pin, LOW);
    delay(50); // Refresh cycle of servo
  }

  long Ultrasonic_read(){
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    long time = pulseIn (echoPin, HIGH);
    return time / 29 / 2;
  }

  void compareDistance(){
    if(distance_L > distance_R){
      turnLeft();
      delay(500);
      forward();
      delay(600);
      turnRight();
      delay(500);
      forward();
      delay(600);
      turnRight();
      delay(400);
    }
    else{
      turnRight();
      delay(500);
      forward();
      delay(600);
      turnLeft();
      delay(500);
      forward();
      delay(600);  
      turnLeft();
      delay(400);
    }
  }

  void Check_side(){
    Stop();
    delay(100);
    for (int angle = 70; angle <= 140; angle += 5)  {
      servoPulse(servo, angle);  
    }
    delay(300);
    distance_R = Ultrasonic_read();
    Serial.print("D R=");
    Serial.println(distance_R);
    delay(100);
    for (int angle = 140; angle >= 0; angle -= 5)  {
      servoPulse(servo, angle);  
    }
    delay(500);
    distance_L = Ultrasonic_read();
    Serial.print("D L=");
    Serial.println(distance_L);
    delay(100);
    for (int angle = 0; angle <= 70; angle += 5)  {
      servoPulse(servo, angle);  
    }
    delay(300);
    compareDistance();
  }

 void forward(){
   digitalWrite(5,HIGH);                               //       If you dont get proper movements of your robot,
   digitalWrite(4,LOW);                               //        then alter the pin numbers
   digitalWrite(6,LOW);                               //
   digitalWrite(7,HIGH);
 }
 void backward(){
   digitalWrite(5,LOW);                               //       If you dont get proper movements of your robot,
   digitalWrite(4,HIGH);                               //        then alter the pin numbers
   digitalWrite(6,HIGH);                               //
   digitalWrite(7,LOW);
 }
 void turnRight(){
   digitalWrite(5,HIGH);
   digitalWrite(4,LOW);
   digitalWrite(6,HIGH);                                  //HIGH
   digitalWrite(7,LOW);
 }
 void turnLeft(){
   digitalWrite(5,LOW);
   digitalWrite(4,HIGH);
   digitalWrite(6,LOW);                                  //HIGH
   digitalWrite(7,HIGH);
 }
 void Stop(){
   digitalWrite(5,LOW);
   digitalWrite(4,LOW);
   digitalWrite(6,LOW);                                  //HIGH
   digitalWrite(7,LOW);
 }
*/