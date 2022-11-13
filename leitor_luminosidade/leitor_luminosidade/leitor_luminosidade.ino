int lightSensorPort = A0;

void setup() {
  pinMode(lightSensorPort, INPUT);
  Serial.begin(9600);
}

void loop() {
  int lightIntensity = analogRead(lightSensorPort);
  Serial.print(lightIntensity);
}
