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


#include "EtudiantAdmin.h"



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

void EtudiantAdmin::setMatricule(int nouveauMatricule){
    //Le numero de matricule doit necessairement avoir 7 chiffres
    if ((nouveauMatricule >= 5000000) && (nouveauMatricule <= 5999999)){
        this->numeroMatricule = nouveauMatricule;    
    }
    else{
        this->numeroMatricule = 0; //Le matricule est mis à 0 si le matricule n'est pas valide
    }
}

int EtudiantAdmin::getMatricule(void){
    return (this->numeroMatricule);
}

void EtudiantAdmin::setCoutSession1(float nouvelleCoutSession1)
{
    if ((nouvelleCoutSession1 >= 0000) && (nouvelleCoutSession1 <= 9999)){
        this->CoutSession1=nouvelleCoutSession1;    
    }
    else{
        this->CoutSession1 = 0; //Le matricule est mis à 0 si le matricule n'est pas valide
    }
}

float EtudiantAdmin::getCoutSession1()
{
    return (this->CoutSession1);
}
