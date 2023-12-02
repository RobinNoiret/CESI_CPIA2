#include "FunRadio.h"
#include "Utilisateur.h"
#include <iostream>

FunRadio::FunRadio(const std::string& msg) {
    message = msg;
}


void FunRadio::Diffuser() {
    for (auto& ecouteur : ecouteurs) {
        ecouteur->Ecouter(message);
    }
}
