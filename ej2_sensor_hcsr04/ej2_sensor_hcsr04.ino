//Colazo Florencia, Gimenez Veronica, Grasso Natasha, Larrechart Paula, Pereyra Maria Eugenia, Roude Marisa

#define trigPin  6
#define echoPin  5
#define led_verde 10
long duration, cm, inches;
 
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led_verde, OUTPUT);
}
 
void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  duration = pulseIn(echoPin, HIGH);
 
  // Calculating the distance
  cm= duration*0.034/2;
  Serial.print("Distance: ");
  Serial.print(cm);
  Serial.println(" cm");
  
  delay(250);
  
  if (cm < 20) {  
    Serial.println("encendido led MENOS 20 cm"); 
    digitalWrite(led_verde, HIGH);                   
   }
  
  else { 
    Serial.println("encendido led MAS 20 cm"); 
    digitalWrite(led_verde, HIGH);   
    delay(500);         
    Serial.println("apagado led MAS 20 cm"); 
    digitalWrite(led_verde, LOW);    
    delay(500); 
    
   }
}
