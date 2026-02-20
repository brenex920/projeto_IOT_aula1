void setup() {
  // put your setup code here, to run once:
  pinMode(23, OUTPUT); //funçao de saida de pino 13
}

// loop das ações 
void loop() {
  digitalWrite(23, HIGH);// acender a luz 23 
  delay(1000);// tempo da ação 
  digitalWrite(23, LOW);// apagar a luz 23
  delay(1000);
}
