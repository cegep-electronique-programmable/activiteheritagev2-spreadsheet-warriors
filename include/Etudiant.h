/*
 * Nom de fichier 
 *      Etudiant.h
 * 
 * Sommaire
 *      Fichier header pour la classe Etudiant.h
 * 
 * Auteur 
 *      Maxime Champagne
 *  
 */

#ifndef ETUDIANT_H
#define ETUDIANT_H

//Déclaration de la classe Etudiant
class Etudiant
{
    int numeroMatricule;
    int moyenne;
	
public:
    void setMatricule(int);
    int getMatricule();
    void setMoyenne(int);
    int getMoyenne();
};

//Déclaration de la classe Etudiant
class Etudiant_admin:Etudiant
{
    float scout;
	
public:

    void setscout(float nouvellescout);
    float getscout();
};
#endif //ETUDIANT_H