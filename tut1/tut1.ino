
int sensorPin = A0;
int tonePin = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(tonePin,OUTPUT);
  pinMode(sensorPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // En inbygd funktio i Arduino
  // "tone" Får Buzzern åt låta med en viss frekvens
  tone(tonePin,440);
  delay(1000);
  // "noTone" stänger av tutet
  noTone(tonePin);
  delay(1000);

}
