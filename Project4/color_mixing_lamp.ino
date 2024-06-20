// C++ code
//
int photo1 = A0;
int photo2 = A1;
int photo3 = A2;
int rgb1 = 9;
int rgb2 = 10;
int rgb3 = 11;
void setup()
{
  pinMode(photo1, INPUT);
  pinMode(photo2, INPUT);
  pinMode(photo3, INPUT);
  Serial.begin(9600);
  pinMode(rgb1, OUTPUT);
  pinMode(rgb2, OUTPUT);
  pinMode(rgb3, OUTPUT);
}

void loop()
{
  int photo1_signal = analogRead(photo1);
  int photo2_signal = analogRead(photo2);
  int photo3_signal = analogRead(photo3);
  Serial.println(photo1_signal);
  Serial.println(photo2_signal);
  Serial.println(photo3_signal);
  
  int red = (photo1_signal / 4);
  int blue = (photo2_signal / 4);
  int green = (photo3_signal / 4);
   
   Serial.println(red);
   Serial.println(blue);
   Serial.println(green);
  
   analogWrite(rgb1, red);
   analogWrite(rgb2, blue);
   analogWrite(rgb3, green);
}