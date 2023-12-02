#include "NRJ.h"
#include "Utilisateur.h"
#include <iostream>

NRJ::NRJ(const std::string& msg) {
    message = msg;
}

void NRJ::Diffuser() {
    for (auto& ecouteur : ecouteurs) {
        ecouteur->Ecouter(message); // Chaque écouteur reçoit le message.
    }
}
