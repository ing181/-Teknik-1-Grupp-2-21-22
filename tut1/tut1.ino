
int sensorPin = A0;
int tonePin = 8;
int sensor;  // Tar emot ljuset
void setup() {
  // put your setup code here, to run once:
  pinMode(tonePin,OUTPUT);
  pinMode(sensorPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  sensor = analogRead(sensorPin);
  Serial.println(sensor);
  // put your main code here, to run repeatedly:
  // En inbygd funktio i Arduino
  // "tone" Får Buzzern åt låta med en viss frekvens
  if (sensor < 700){

      tone(tonePin,440);
  }
  else {
      tone(tonePin,200);
  }
  


}
