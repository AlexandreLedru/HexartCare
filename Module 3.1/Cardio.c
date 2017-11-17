#include "cardio.h"
#include "Arduino.h"
#include "FreqMeasure.h"

int time;

int temps(){ 
  time = millis();          // compte le temps depuis l'ouverture du programme
  delay(1000);
  return time;              //valeur retournée =temps depuis lequel le programme est ouvert
}

int pouls(){             // calcul de la fréquence cardiaque
  int somme= 0;
  int compteur = 0;
  int frequence;
  if (FreqMeasure.available()) { // si il y a un pouls détecté
    somme += FreqMeasure.read(); // on le lit
    compteur += 1;               // on compte le nombre de répétitions pendant le temps de détection
    if (compteur > 30) {         // si plus de 30 répétitions sont détectées (seuil très bas)
      frequence = F_CPU / (somme / compteur); // on calcule la fréquence
      somme = 0;
      compteur = 0;
    }
  }
  return frequence;               // on récupère la fréquence calculée
}
