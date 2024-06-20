const int sensorPin = A0;
const float baselineTemp = 20.0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  for (int pinNumber = 4; pinNumber < 7; pinNumber ++) {
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorVal = analogRead(sensorPin);

  Serial.print("Sensor value : ");
  Serial.print(sensorVal);

  float voltage = (sensorVal/1024.0) * 5.0;

  Serial.print(" , Volts: ");
  Serial.print(voltage);

  Serial.print(", degrees C: ");
  float temperature = ( voltage - .5) * 100;
  Serial.println(temperature);

  if (temperature < baselineTemp+2){
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }
  else if(temperature >= baselineTemp+2 && temperature < baselineTemp+4){
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);

  }
  else if(temperature >= baselineTemp+4 && temperature < baselineTemp+6){
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);

  }
  else if(temperature >= baselineTemp+6){
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);

  }
  delay(1);

}
