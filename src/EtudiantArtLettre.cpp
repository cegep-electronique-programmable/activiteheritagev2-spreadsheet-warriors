#include "Etudiant.h"
#include "EtudianArtLettre.h"

class EtudiantArtLettre : public Etudiant {
    int numeroMatricule;
    int moyenne;
	
public:
    void setMatriculeAl(int);
    
};

void EtudiantArtLettre::setMatriculeAl(int nouveauMatricule){
    //Le numero de matricule doit necessairement avoir 7 chiffres
    if ((nouveauMatricule >= 7000000) && (nouveauMatricule <= 7999999)){
        this->numeroMatricule = nouveauMatricule;    
    }
    else{
        this->numeroMatricule = 0; //Le matricule est mis à 0 si le matricule n'est pas valide
    }
}