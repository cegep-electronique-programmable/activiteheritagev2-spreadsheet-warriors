#include <Arduino.h>
#include "Etudiant.h"

// Déclaration
void testEtudiant(void);

void setup() {
    Serial.begin(9600);
    delay(2000);  // Petit délai pour l'ouverture du port série
    Serial.println("Hello world!\n");

    pinMode(LED_BUILTIN, OUTPUT);
    testEtudiant();
}

void loop() {
    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN)); // Inverse l'état de la DEL
    delay(1000);
}

void testEtudiant(void) {
    int numeroMatriculeTmp;
    int moyenneTmp;

    EtudiantTGE owen;

    owen.setMatricule(2288053); // Devrait être accepté (commence par 2)
    owen.setMoyenne(99);
    owen.setMaitriseOscillo(true);

    moyenneTmp = owen.getMoyenne();
    numeroMatriculeTmp = owen.getMatricule();

    Serial.printf("Owen, matricule # %d, moyenne %d, maitrise oscillo: %s\n",
                  numeroMatriculeTmp,
                  moyenneTmp,
                  owen.getMaitriseOscillo() ? "Oui" : "Non");

    owen.setMatricule(3288053); // Devrait générer un message d'erreur
}
