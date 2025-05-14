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


class Etudiant {
    int numeroMatricule;
    int moyenne;
	
public:
    void setMatricule(int);
    int getMatricule();
    void setMoyenne(int);
    int getMoyenne();
};

class EtudiantArtLettre : public Etudiant {
    int numeroMatricule;
    int nbrLivresLus;
	
public:
    void setMatricule(int);
    int getMatricule();
    void setNbrLivresLus(int);
    int getNbrLivresLus();
};

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