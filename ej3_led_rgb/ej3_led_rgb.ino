//Colazo Florencia, Gimenez Veronica, Grasso Natasha, Larrechart Paula, Pereyra Maria Eugenia, Roude Marisa

#define ledR 6
#define ledG 4
#define ledB 5
String vector = "RGBPCYB";

void setup()
{
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  
}

void loop()
{
  color ('R');
  delay (2000);
  color ('G');
  delay (2000);
  color ('B');
  delay (2000);
  color ('P');
  delay (2000);
  color ('C');
  delay (2000);
  color ('Y');
  delay (2000);
  color ('W');
  delay (2000);
  color (vector[random(6)]);
  delay (2000);
}

void color(char letra) {
  switch (letra) {
    case 'R':    
        digitalWrite(ledR, HIGH);
        digitalWrite(ledG, LOW);
        digitalWrite(ledB, LOW);
    break;
    case 'G':    
        digitalWrite(ledR, LOW);
        digitalWrite(ledG, HIGH);
        digitalWrite(ledB, LOW);
    break;
    case 'B':    
        digitalWrite(ledR, LOW);
        digitalWrite(ledG, LOW);
        digitalWrite(ledB, HIGH);
    break;
    case 'P':    
        digitalWrite(ledR, HIGH);
        digitalWrite(ledG, LOW);
        digitalWrite(ledB, HIGH);
    break;
    case 'C':    
        digitalWrite(ledR, LOW);
        digitalWrite(ledG, HIGH);
        digitalWrite(ledB, HIGH);
    break;
    case 'Y':    
        digitalWrite(ledR, HIGH);
        digitalWrite(ledG, HIGH);
        digitalWrite(ledB, LOW);
    break;
    case 'W':    
        digitalWrite(ledR, HIGH);
        digitalWrite(ledG, HIGH);
        digitalWrite(ledB, HIGH);
    break;
    }
}
