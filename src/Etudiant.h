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
#define EtudiantTGE

//Déclaration de la classe Etudiant
class Etudiant {
    int numeroMatricule;
    int moyenne;
	
public:
virtual void setMatricule(int num);
    int getMatricule() const;

    void setMoyenne(int m);
    int getMoyenne() const;
};
class EtudianTGE : public Etudiant {
        private:
            bool maitriseOscillo;

            public :
            void setMatricule(int num) override;
            void setMaitriseOscillo(bool amitrise);
            bool getMaitriseOscillo() const;
};

#endif //ETUDIANT_H