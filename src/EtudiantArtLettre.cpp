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

#include "EtudiantArtLettre.h"

//Définition de la méthode setMatricule de la classe, permet de modifier le matricule de l'étudiant
void Etudiant::setMatricule(int nouveauMatricule){
    //Le numero de matricule doit necessairement avoir 7 chiffres
    if ((nouveauMatricule >= 1000000) && (nouveauMatricule <= 9999999)){
        this->numeroMatricule = nouveauMatricule;    
    }
    else{
        this->numeroMatricule = 0; //Le matricule est mis à 0 si le matricule n'est pas valide
    }
}



int Etudiant::getMatricule(void){
    return (this->numeroMatricule);
}

void Etudiant::setMoyenne(int nouvelleMoyenne){
    if (nouvelleMoyenne <= 100){
        this->moyenne = nouvelleMoyenne;
    }
    else{
        this->moyenne = 100;
    }
}

int Etudiant::getMoyenne(void){
    return (this->moyenne);
}



void EtudiantArtLettre::setMatricule(int nouveauMatricule){
    //Le numero de matricule doit necessairement avoir 7 chiffres
    if ((nouveauMatricule >= 7000000) && (nouveauMatricule <= 7999999)){
        this->numeroMatricule = nouveauMatricule;    
    }
    else{
        this->numeroMatricule = 0; //Le matricule est mis à 0 si le matricule n'est pas valide
    }
}

void EtudiantArtLettre::NbrLivresLus(int nouveauNbrLivresLus){
    //Le numero de matricule doit necessairement avoir 7 chiffres
    if ((nouveauNbrLivresLus >= 0000) && (nouveauNbrLivresLus <= 9999)){
        this->nbrLivresLus = nouveauNbrLivresLus;    
    }
    else{
        this->nbrLivresLus = 0; //Le matricule est mis à 0 si le matricule n'est pas valide
    }
}