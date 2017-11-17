#include "cardio.h"
#include "FreqMeasure.h"

void setup() {
  Serial.begin(9600);
  //FreqMeasure.begin();    //initialisation du calcul de fréquence
}

void loop() {
  int tps;
  double pls;             // défintion des variables
  tps = temps();          // récupération du temps
  //pls = pouls();        // récupération de la fréquence
  pls = random(60,90);    // simulation d'un pouls
  Serial.print(tps);      // affichage au format CSV
  Serial.print(";");
  Serial.println(pls);

}
