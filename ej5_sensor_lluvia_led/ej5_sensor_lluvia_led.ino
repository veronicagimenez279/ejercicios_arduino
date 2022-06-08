//Colazo Florencia, Gimenez Veronica, Grasso Natasha, Larrechart Paula, Pereyra Maria Eugenia, Roude Marisa

#define pinlluvia A5
#define pinled 5

void setup(){
  pinMode(pinled, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(pinlluvia);
  int humedad = map(sensorValue, 255,1010, 0, 255);
  analogWrite(pinled, humedad);
  delay(250);
  Serial.println(sensorValue);
}
