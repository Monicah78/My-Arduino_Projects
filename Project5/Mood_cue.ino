// C++ code
//
#include <Servo.h> 

Servo myservo;
int pmeter = A0;
int servo_pin = 9;

void setup()
{
  pinMode(servo_pin, INPUT);
  pinMode(pmeter, OUTPUT);
  myservo.attach(servo_pin);
  Serial.begin(9600);
}

//void loop()
//{
  //digitalWrite(LED_BUILTIN, HIGH);
  //delay(1000); // Wait for 1000 millisecond(s)
  //digitalWrite(LED_BUILTIN, LOW);
  //delay(1000); // Wait for 1000 millisecond(s)
//}

void loop(){
  int calc = analogRead(pmeter);
  Serial.println(calc);
  int angles = (calc, 0, 1023, 0, 255);
  Serial.println(angles);
  delay(1000);
  
  
}