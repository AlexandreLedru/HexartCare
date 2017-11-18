#include "Cardio.h"
#include <Arduino.h>


int Pouls_Actuel()
{
  int valeurPrecedente = 0;
  long tempsPrecedent = 0;
  int valeurActuelle, valeurSeuil;
  long tempsDetection;

  valeurActuelle = analogRead(0);
  valeurSeuil = 650;

  if (valeurActuelle > valeurSeuil) 
  {  // on est dans la zone max
    if (valeurPrecedente <= valeurSeuil) 
    {  // est-ce qu'on vient d'y entrer?
      tempsDetection = millis();
      if (tempsDetection > (tempsPrecedent + 200))
      {  // ce n'est pas seulement du bruit?
        Serial.println(valeurActuelle);
        tempsPrecedent = tempsDetection;
      }
    }
  }

  valeurPrecedente = valeurActuelle;

}
/*double Calcul_Du_Pouls(double Valeur_Precedente,double Valeur_Actuelle)
{
  
}*/


int  Delais_Du_Programme()
{
  Serial.println("Time: ");
  int Time = millis();
  Serial.println(Time);
}
