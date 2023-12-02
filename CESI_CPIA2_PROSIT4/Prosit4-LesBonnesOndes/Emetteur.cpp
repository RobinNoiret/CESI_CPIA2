#include "Emetteur.h"
#include "Utilisateur.h"

void Emetteur::AjouterEcouteur(Utilisateur* ecouteur) {
    ecouteurs.push_back(ecouteur);
}
