void setup(){
 Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  delay(1000);
  int time = millis();
  digitalWrite(13, HIGH);
  delay(10);
  digitalWrite(13, LOW);
  Serial.print("Time passed: ");
  Serial.println(time);
}
