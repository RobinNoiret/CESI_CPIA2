#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <string>

class Emetteur;

class Utilisateur {
public:
    Utilisateur(const std::string& nom);
    void Ecouter(const std::string& message);
    void SAbonnerAEmetteur(Emetteur* emetteur);

private:
    std::string name;
};

#endif
