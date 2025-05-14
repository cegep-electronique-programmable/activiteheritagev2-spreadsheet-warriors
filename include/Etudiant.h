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
    protected:
    int numeroMatricule;
    int moyenne;
	
public:
    void setMatricule(int);
    int getMatricule();
    void setMoyenne(int);
    int getMoyenne();
};

//Déclaration de la classe Etudiant
class EtudiantAdmin: public Etudiant
{
    float CoutSession1;
    int numeroMatricule;
	
public:
    void setMatricule(int);
    int getMatricule();
    void setCoutSession1(float);
    float getCoutSession1();
};
#endif //ETUDIANT_H