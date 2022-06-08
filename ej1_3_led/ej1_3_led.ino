//Colazo Florencia, Gimenez Veronica, Grasso Natasha, Larrechart Paula, Pereyra Maria Eugenia, Roude Marisa

#define led_verde 11
#define led_rojo 10
#define led_blanco 7

void setup() {
  pinMode(led_verde, OUTPUT);
  pinMode(led_rojo, OUTPUT);
  pinMode(led_blanco, OUTPUT);
  Serial.begin(9600);   
}

void loop() {
  Serial.println("encendido led verde"); 
  digitalWrite(led_verde, HIGH);   
  delay(1000);         
  Serial.println("apagado led verde"); 
  digitalWrite(led_verde, LOW);    

  Serial.println("encendido led rojo"); 
  digitalWrite(led_rojo, HIGH);   
  delay(1000);         
  Serial.println("apagado led rojo"); 
  digitalWrite(led_rojo, LOW);    

  Serial.println("encendido led blanco"); 
  digitalWrite(led_blanco, HIGH);   
  delay(1000);        
  Serial.println("apagado led blanco"); 

}
