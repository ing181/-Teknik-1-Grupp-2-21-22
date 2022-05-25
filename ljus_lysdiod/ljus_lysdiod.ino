
// En variabel, kan innehålla heltal
// int står för heltal (integer)
// sensor är ett namn, som också beskriver vad den används till
int sensor;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(A0,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   sensor = analogRead(A0);
   Serial.println(sensor);
   if ( sensor > 500) {
      digitalWrite(8,HIGH);
   }
   else {
         digitalWrite(8,LOW);
   }

   
}
