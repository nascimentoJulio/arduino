int lightSensorPort = A0;
int red_led_port = 5;
int green_led_port = 4;
int blue_led_port = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightSensorPort, INPUT);
  pinMode(red_led_port, OUTPUT);
  pinMode(green_led_port, OUTPUT);
  pinMode(blue_led_port, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lightIntensity = analogRead(lightSensorPort);
  RBG_color(lightIntensity,lightIntensity,lightIntensity);
}

void RBG_color(int red,int green, int blue){
    analogWrite(red_led_port,red);
    analogWrite(green_led_port,green);
    analogWrite(blue_led_port,blue);
}
