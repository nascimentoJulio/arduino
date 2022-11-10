int ledRed = 10;
int button = 7;
int buttonState = 0;

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  buttonState = digitalRead(button);
  if(buttonState == HIGH){
    digitalWrite(ledRed, HIGH);
  }else{
    digitalWrite(ledRed, LOW);
  }
}
