#include "Utilisateur.h"
#include "Emetteur.h"
#include <iostream>

Utilisateur::Utilisateur(const std::string& nom) : name(nom) {}

void Utilisateur::Ecouter(const std::string& message) {
    std::cout << name << " entend : " << message << std::endl;
}

void Utilisateur::SAbonnerAEmetteur(Emetteur* emetteur) {
    emetteur->AjouterEcouteur(this);
}
