/*
   This code is in the public domain.
   Do whatever you want with it.
   Modify by shannon112 2017.04.20

   Please reading the README.md before runnig this code.
*/

// Need the Servo library
#include <Servo.h>

// This is our motor.
Servo Brushless1;
Servo Brushless2;
boolean initializeState = 0;

// Set everything up
void setup()
{
  // Attach motors to PWM pins
  Brushless1.attach(9);
  Brushless2.attach(10);
  Serial.begin(9600);
  Brushless1.write(0);
  Brushless2.write(0);
  Serial.print("Arming the motor!\n");
}

void initialize_motor(){
  Serial.print("Setting high speed! and wait 2 sec! \n");
  Brushless1.write(180);
  Brushless2.write(180);
  delay(2000);
  Serial.print("Setting back to low speed! and wait 4 sec! \n");
  Brushless1.write(5);
  Brushless2.write(5);
  delay(4000);
  Serial.print("MOTOR IS READY! \n");
}

void testfunction(){
  Serial.println("3");
  delay(1000);
  Serial.println("2");
  delay(1000);
  Serial.println("1");
  delay(500);

  Serial.print("Test1 Speed = 20, speed will increase in 1sec \n");
  Brushless1.write(20);
  Brushless2.write(20);
  delay(1000);

  Serial.print("Test2 Speed = 40, speed will increase in 1sec \n");
  Brushless1.write(40);
  Brushless2.write(40);
  delay(1000);

  Serial.print("Test3 Speed = 60, speed will increase in 1sec \n");
  Brushless1.write(50);
  Brushless2.write(50);
  delay(1000);

  Serial.print("Test4 Speed = 80, speed will increase in 1sec \n");
  Brushless1.write(60);
  Brushless2.write(60);
  delay(1000);

  Serial.print("Test5 Speed = 100, speed will increase in 1sec \n");
  Brushless1.write(70);
  Brushless2.write(60);
  delay(1000);

  Serial.print("Test6 Speed = 120, speed will increase in 1sec \n");
  Brushless1.write(80);
  Brushless2.write(80);
  delay(1000);

  Serial.print("Test7 Speed = 140, speed will increase in 1sec \n");
  Brushless1.write(90);
  Brushless2.write(90);
  delay(1000);

  Serial.print("Test8 Speed = 165(BURST), speed will stop in 3sec \n");
  Brushless1.write(165);
  Brushless2.write(165);
  delay(3000);

  Serial.println("STOP!");
  Brushless1.write(5);
  Brushless2.write(5);
}

void loop() {
  String ans;
  Serial.print("Start to initailize? [y/n] or testing ?[t] \n");
  while (Serial.available() == 0)  {
  }
  ans = Serial.readString();
  if (ans == "y") {
    Serial.print("Okay, Starting to initailize...\n");
    initialize_motor();
    initializeState = 1;
  } else if (ans == "n") {
    Serial.print("Okay, waiting...\n");
  } else if (ans == "t") {
    if (initializeState == 1) {
      Serial.print("Okay, starting testing brushless motor...\n");
      testfunction();
    } else
      Serial.print("Sorry, you need to initialize motor first!\n");
  } else {
    Serial.print("Wrong ans!\n");
  }
}
