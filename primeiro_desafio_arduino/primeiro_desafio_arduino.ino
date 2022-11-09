int ledErrorPort = 9;
int ledSuccessPort = 10;

void setup() {
  // Inicializando as portas 9 e 10 como saída.
  pinMode(ledErrorPort, OUTPUT);
  pinMode(ledSuccessPort, OUTPUT);
}
// Código que liga e desliga os leds
void loop() {
  digitalWrite(ledSuccessPort, LOW); // Desliga o ledSuccessPort (coloca o led nivel baixo, ou seja, 0 volts)
  digitalWrite(ledErrorPort, HIGH); // Liga o ledErrorPort (coloca o led nivel alto, ou seja, 5 volts)
  
  delay(500);//Espera 500 milissegundos (meio segundo)
  
  digitalWrite(ledErrorPort, LOW);//Liga o ledErrorPort (coloca o led nivel alto, ou seja, 5 volts)
  digitalWrite(ledSuccessPort, HIGH);
  
  delay(500);//Espera 500 milissegundos (meio segundo)
}
