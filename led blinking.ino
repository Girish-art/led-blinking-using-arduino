#LED BLINKING USING ARDUINO
##DESCRIPTION
This project demonstrates a basic LED blinking circuit using Arduino Uno.
The LED turns ON for 1 second and OFF for 1 second repeatedly.
  ## Arduino Code 
  int led = 13;

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000);

  digitalWrite(13, LOW);
  delay(1000);
}
## Components Used
- Arduino Uno
- LED
- 220 Ohm Resistor
- Breadboard
- Jumper Wires
##Project video
https://youtu.be/lVV98dBYTg4?si=mejkpYlV_gf9EYZj
Created by Girish Patil
