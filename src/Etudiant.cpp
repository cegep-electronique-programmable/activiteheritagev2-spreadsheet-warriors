/*
 * Nom de fichier 
 *      Etudiant.cpp
 * 
 * Sommaire
 *      Fichier source pour la classe Etudiant.
 * 
 * Auteur 
 *      Maxime Champagne
 *  
 */

#include "Etudiant.h"
#include <Etudiant.h>


void Etudiant::setMatricule(int num){
    numeroMatricule = num;
}

int Etudiant::getMatricule() const {
    return numeroMatricule;
}

void Etudiant::setMoyenne(int m){
    moyenne = m;
}

int Etudiant::getMoyenne() const{
    return moyenne;
}

void Etudiant::setMatricule(int num){
    if (String(num) .startWith("2")){
        Etudiant::setMatricule(num);
    }
    else
    {
        Serial.println("Erreur");
    }
}

void EtudianTGE::setMaitriseOscillo(bool maitrise){
    maitriseOscillo = maitrise;
}

bool EtudianTGE::getMaitriseOscillo() const {
    return maitriseOscillo;
}