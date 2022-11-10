int ledRed = 13;
int ledGreen = 8;
int ledYellow = 3;
int button = 7;
int buttonState = 0;
int stateLeds = 0;
void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(button, INPUT);
}

enum LedStates {
  ALL = 1,
  ONLY_RED = 2,
  ONLY_GREEN = 3,
  ONLY_YELLOW = 4,
  BLINK_ALL = 5,
  ONLY_BLINK_RED = 6,
  ONLY_BLINK_GREEN = 7,
  ONLY_BLINK_YELLOW = 8,
  TRANSIENT = 9,
  INVERTED_TRANSIENT = 10
};


void loop() {
  buttonState = digitalRead(button);
  
  if(buttonState == HIGH){
    Serial.begin(9600);
    Serial.print(stateLeds);
    stateLeds++;
  }
  switch(stateLeds){
    case ALL:
       digitalWrite(ledRed, HIGH);
       digitalWrite(ledGreen, HIGH);
       digitalWrite(ledYellow, HIGH);
       delay(500);
       break;
    case ONLY_RED:
       digitalWrite(ledRed, HIGH);
       digitalWrite(ledGreen, LOW);
       digitalWrite(ledYellow, LOW);
       delay(500);
       break;
    case ONLY_GREEN:
       digitalWrite(ledRed, LOW);
       digitalWrite(ledGreen, HIGH);
       digitalWrite(ledYellow, LOW);
       delay(500);
       break;
    case ONLY_YELLOW:
       digitalWrite(ledRed, LOW);
       digitalWrite(ledGreen, LOW);
       digitalWrite(ledYellow, HIGH);
       delay(500);
       break;
    case BLINK_ALL:
         digitalWrite(ledRed, HIGH);
         digitalWrite(ledGreen, HIGH);
         digitalWrite(ledYellow, HIGH);
         delay(100);
         digitalWrite(ledRed, LOW);
         digitalWrite(ledGreen, LOW);
         digitalWrite(ledYellow, LOW);
         delay(100);
         break;
    case ONLY_BLINK_RED:
         digitalWrite(ledRed, HIGH);
         digitalWrite(ledGreen, LOW);
         digitalWrite(ledYellow, LOW);
         delay(100);
         digitalWrite(ledRed, LOW);
         delay(100);
         break;
    case ONLY_BLINK_GREEN:
         digitalWrite(ledGreen, HIGH);
         digitalWrite(ledRed, LOW);
         digitalWrite(ledYellow, LOW);
         delay(100);
         digitalWrite(ledGreen, LOW);
         delay(100);
         break;
    case ONLY_BLINK_YELLOW:
         digitalWrite(ledYellow, HIGH);
         digitalWrite(ledGreen, LOW);
         digitalWrite(ledRed, LOW);
         delay(100);
         digitalWrite(ledYellow, LOW);
         delay(100);
         break;
    case TRANSIENT: 
        digitalWrite(ledRed, HIGH);
        delay(75);
        digitalWrite(ledRed, LOW);
        digitalWrite(ledGreen, HIGH);
        delay(75);
        digitalWrite(ledGreen, LOW);
        digitalWrite(ledYellow, HIGH);
        delay(75);
        digitalWrite(ledYellow, LOW);
        delay(75);
        break;
     case INVERTED_TRANSIENT: 
        digitalWrite(ledYellow, HIGH);
        delay(75);
        digitalWrite(ledYellow, LOW);
        digitalWrite(ledGreen, HIGH);
        delay(75);
        digitalWrite(ledGreen, LOW);
        digitalWrite(ledRed, HIGH);
        delay(75);
        digitalWrite(ledRed, LOW);
        delay(75);
        break;
    default:
       delay(1000);
       stateLeds=0;
       digitalWrite(ledRed, LOW);
       digitalWrite(ledGreen, LOW);
       digitalWrite(ledYellow, LOW);
       break;
  }
}



void controllerLeds(){
  Serial.print("ola");
  
}

void incrementLedState(){
 
}


