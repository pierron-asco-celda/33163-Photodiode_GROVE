/*
    ** Mesure luminosité en lux V1.2 module Grove **
       PIN A0 Module shield GROVE
       Moniteur série -> Baud rate 9600.
       La valeur du capteur de lumière ne reflète que la tendance approximative de l’intensité de la lumière, elle ne représente PAS le lumen exact.
*/

void setup() {
  Serial.begin(9600);
}

void loop() {

  int value = analogRead(A0);
  Serial.print("Luminosité : ");
  Serial.print(value);
  Serial.println(" lux");
  delay(100);

}
