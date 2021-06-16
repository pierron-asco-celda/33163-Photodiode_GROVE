# 33163-Photodiode GROVE

Photodiode GROVE [33163](https://www.pierron.fr/photodiode-grove.html)

<div style="text-align: justify">Module photodiode ou capteur de lumière compatible Grove permettant de détecter la présence de lumière. La tension de sortie analogique varie selon l'intensité lumineuse mesurée. Ce module se raccorde sur une entrée analogique du Base Shield via un câble 4 conducteurs.</div>

Caractéristiques techniques :
- Alimentation : 3,3 à 5 V
- Consommation : 0,5 à 3 mA
- Longueur d’onde : 540 nm
- Temps de réponse : 20 à 30 ms

![L-33163](/img/L-33163.jpg)

# Usage :
Pour l’utilisation de ce module référez-vous aux indications présentes sur le circuit imprimé GROVE.

# Schémas :

![SCH-33163](/img/SCH-33163.jpg)
![BRD-33163](/img/BRD-33163.jpg)

# Complément sur la programmation :

La valeur du capteur de lumière ne reflète que la tendance approximative de l’intensité de la lumière, elle ne représente PAS le lumen exact.       

# RESSOURCES À TÉLÉCHARGER :

Ressource utilisation : [LM358](https://github.com/pierron-asco-celda/33164-Phototransistor_GROVE/blob/main/src/Datasheet_LM358.pdf)

Ressource utilisation : [LS06-S](https://github.com/pierron-asco-celda/33164-Phototransistor_GROVE/blob/main/src/Datasheet_LS06.pdf)

# Exemple :
### Arduino / C++
```cpp
/*
    ** Mesure luminosité en lux V1.1 & V1.2 module Grove **
       PIN A0 Module shield GROVE
       Moniteur série -> Baud rate 9600.*
       La valeur du capteur de lumière ne reflète que la tendance approximative de l’intensité de la lumière, 
       elle ne représente PAS le lumen exact.
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
```
## À propos :
<div style="text-align: justify">*Le débit en bauds est un taux de transfert de données en unités de bits par seconde (bps). Si le débit en bauds est de 9600, cela signifie que la possibilité d’envoyer des données est de 9600 bits en une seconde. 1 caractère est identique à 1 octet.</div>
<br>

PIERRON ASCO-CELDA (https://www.pierron.fr).
