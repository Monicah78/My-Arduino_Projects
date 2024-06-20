// C++ code
//
int switch1 = 2;
int motor1 = 9;
int pmeter = A0;
void setup()
{
  pinMode(motor1, OUTPUT);
  pinMode(pmeter, INPUT);
  pinMode(switch1, INPUT);
}

void loop()
{
  int switch2 = digitalRead(switch1);
  int pmeter2 = analogRead(pmeter);
  int speed = map(pmeter2, 0, 1023, 0, 255);
  
  //if (switch2 == HIGH){
    //digitalWrite(motor1, HIGH);
  //}
  //else{
    // digitalWrite(motor1, LOW);
  //}
  
  if(switch2 == 1){
    analogWrite(motor1, speed);
  }
  else{
    analogWrite(motor1, 0);
  }
}