#define trig 7
#define echo 6
#define buzzer 12
#define ledPin 11 
void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ledPin, OUTPUT); 
}
void loop() {
  long duration, distance; 
  digitalWrite(trig, LOW);
  delayMicroseconds(2); 
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW); 
  duration = pulseIn(echo, HIGH);
  distance = duration * 0.0343 / 2;
  if (distance < 10) { 
    tone(buzzer, 3700); 
    digitalWrite(ledPin, HIGH); 
    delay(100); 
    tone(buzzer, 1000);
    delay(100); 
  } else {
    noTone(buzzer);
    digitalWrite(ledPin, LOW); 
  }
}
