/*
KRAFTWERK cravatta LED su Arduino LilyPad
(C) 2022 Edgardo Rosatti
Versione dedicata a Pape di 1 millisecondo più veloce
*/

int timer = 501; //Ritardo di accensione tra un led e l'altro espresso in millisecondi

void setup() {
  for (int myPins = 5; myPins < 13; myPins++) { //Imposta un ciclo da 5 a 12
  pinMode(myPins, OUTPUT); //Imposta le porte digitali da D5 a D12 come uscite digitali tramite la variabile 'myPins'
  }
}

void loop() {
  for (int myPins = 12; myPins >= 5; myPins--) { // Imposta un ciclo for da 12 a 5
  digitalWrite(myPins, HIGH); // Accendi led
  delay(timer); // Attendi il tempo di 'timer'
  digitalWrite(myPins, LOW); // Spegni led
  }
}
/*
 * We are the Robots
 */
