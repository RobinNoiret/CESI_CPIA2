#ifndef EMETTEUR_H
#define EMETTEUR_H

#include <string>
#include <vector>

class Utilisateur; // Pr�-d�claration.

class Emetteur {
public:
    virtual void Diffuser() = 0;
    void AjouterEcouteur(Utilisateur* ecouteur);
    virtual ~Emetteur() {}

protected:
    std::vector<Utilisateur*> ecouteurs;
    std::string message;
};

#endif
