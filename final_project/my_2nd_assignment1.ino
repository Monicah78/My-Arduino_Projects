#include <LiquidCrystal.h>

int buzzer = 13;
int led1 = 7;
int switch1 = 8;
int photo1 = A0;
bool running = true;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(photo1, INPUT);
  pinMode(switch1, INPUT);
  lcd.begin(16, 2);
  //lcd.print("hello world!");
  Serial.begin(9600);
}

void loop()
{
  int switch1_signal = digitalRead(switch1);
  Serial.println(switch1_signal);
  int photo1_signal = analogRead(photo1);
  Serial.println(photo1_signal);
  lcd.setCursor(0, 0);
  delay(1000);
  if(!running){
    return;
  }
  
  int piezo;
  if(photo1_signal > 30){
  lcd.print("Alarm activated!!");
  analogWrite(led1, 150);
  tone(buzzer, 2000);
    
    if(switch1_signal > 0){
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Alarm deactivated!!");
      analogWrite(led1, 0);
      noTone(buzzer);
      running = false;
    }
      
  }
}