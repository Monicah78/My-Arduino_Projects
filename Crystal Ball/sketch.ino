#include <LiquidCrystal.h>

// C++ code
//
int switch1  = 8;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  pinMode(switch1, INPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("Hello World");
  lcd.setCursor(0,1);
}

void loop()
{
int reading = digitalRead(switch1);

 if (reading == HIGH){
  int answer = random(6);
  lcd.clear();
  lcd.print("Guess your word: ");
  delay(500);
  lcd.clear();
  lcd.setCursor(0,0);

  switch (answer){

    case 1:
    lcd.print("Ola");
    lcd.setCursor(0,1);
    lcd.print("Bad Choice");
    break;

    case 2:
    lcd.print("Amico");
    lcd.setCursor(0,1);
    lcd.print("Bad Choice");
    break;


    case 3:
    lcd.print("Monica");
    lcd.setCursor(0,1);
    lcd.print("Bad Choice");
    break;


    case 4:
    lcd.print("Stahl");
    lcd.setCursor(0,1);
    lcd.print("Bad Choice");
    break;

    case 5:
    lcd.print("Kenty");
    lcd.setCursor(0,1);
    lcd.print("Congratulation!!");
    while (true){

    }
    break;
  }

 } 
  }
  
  
	
  
 