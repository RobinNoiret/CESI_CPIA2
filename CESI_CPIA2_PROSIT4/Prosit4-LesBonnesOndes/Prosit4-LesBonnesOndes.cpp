#include "NRJ.h"
#include "FunRadio.h"
#include "Utilisateur.h"

int main() {
    NRJ nrjStation("NRJ - Hit Music Only !");
    FunRadio funRadioStation("Fun Radio - Le son dancefloor !");

    Utilisateur alice("Alice");
    Utilisateur bob("Bob");

    alice.SAbonnerAEmetteur(&nrjStation);
    bob.SAbonnerAEmetteur(&funRadioStation);

    nrjStation.Diffuser();
    funRadioStation.Diffuser();

    return 0;
}