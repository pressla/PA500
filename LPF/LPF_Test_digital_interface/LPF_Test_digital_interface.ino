//ESP32 pinout. pin 1= LED
byte pins[7] = {32,33,25,26,27,14,12};
int i=0;

void setup(){
  for (i=0;i<7;i++) pinMode(pins[i], OUTPUT);
  pinMode(1, OUTPUT);
  Serial.begin(115200);
  Serial.println("Test LPF 1.5kW digital interace");
}

void loop(){
  for (i=0;i<7;i++) {
    Serial.println("1");
    digitalWrite(1, HIGH);
    digitalWrite(pins[i], HIGH);
    delay(20);
    Serial.println("0");
    digitalWrite(1, LOW);
    digitalWrite(pins[i], LOW);
    delay(30);
  }
  
}
