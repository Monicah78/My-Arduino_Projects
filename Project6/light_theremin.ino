// C++ code
//
int buzzer = 8;
int photo1 = A0;
void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(photo1, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int photo1_signal = analogRead(photo1);
  Serial.println(photo1_signal);
  
  if(photo1_signal > 20){
  tone(buzzer, 500); 
  }
  else{
    noTone(buzzer);
  }
}