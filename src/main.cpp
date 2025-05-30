/*
 * Nom de fichier 
 *      main.cpp
 * 
 * Sommaire
 *      Fichier de départ pour le projet ActiviteHeritageV2
 * 
 * Auteur 
 *      Maxime Champagne
 * 
 * Date de création
 *      7 mai 2025
 *  
 */

#include <Arduino.h>
#include <iostream>
#include "EtudiantArtLettre.h"

//********************************************************************************
// Déclaration des fonctions
//********************************************************************************
void testEtudiant(void);

//********************************************************************************
// Déclartions des variables globales
//********************************************************************************



//********************************************************************************
// fonction setup (est appelée une sule fois au lancement du programme)
//********************************************************************************
void setup() {
  Serial.begin(9600);             // Démarrer le port série par défaut à 9600bauds
  printf("Hello world !\n\n");

  pinMode(LED_BUILTIN, OUTPUT);   // DEL embarqué configuré en sortie
  
  testEtudiant();  
}


//********************************************************************************
// Loop (est appelé en boucle pour l'exécution du programme)
//********************************************************************************
void loop() {

  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));   //Changer état de la DEL
  

  delay(1000);                                            //Attendre une seconde
}


//********************************************************************************
// fonction testEtudiant permet de créer un étudiant et de valider le 
// fonctionnement de la classe Etudiant.
//********************************************************************************
void testEtudiant(void) {
  int numeroMatriculeTmp;
  int moyenneTmp;

  Etudiant owen;
  owen.setMatricule(2288053);
  owen.setMoyenne(99);

  numeroMatriculeTmp = owen.getMatricule();
  moyenneTmp = owen.getMoyenne(); 
  printf("Owen, matricule # %d, moyenne %d\n", numeroMatriculeTmp, moyenneTmp);

}

void testEtudiantArtLettre(void) {
  int numeroMatriculeTmp;
  int moyenneTmp;
  int NbrLivresLusTmp;

  EtudiantArtLettre Godson;
  Godson.setMatricule(7288053);
  Godson.setMoyenne(99);
  Godson.setNbrLivresLus(15);

  numeroMatriculeTmp = Godson.getMatricule();
  moyenneTmp = Godson.getMoyenne(); 
  NbrLivresLusTmp = Godson.getNbrLivresLus();
  printf("Godson, matricule # %d, moyenne %d, livres lus %d\n", numeroMatriculeTmp, moyenneTmp, NbrLivresLusTmp);

}