//Colazo Florencia, Gimenez Veronica, Grasso Natasha, Larrechart Paula, Pereyra Maria Eugenia, Roude Marisa

#include <Servo.h>
#define LDR A0

Servo myservo; 

int val;

void setup() {
  
  Serial.begin(9600);
  myservo.attach(7); 
}

void loop()
{
 int val = analogRead(LDR);
 int angulo = map(val, 176, 1020, 0, 180);
  myservo.write(angulo);
  Serial.println(angulo);
  delay(250); 
  
}
