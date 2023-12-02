#ifndef FUNRADIO_H
#define FUNRADIO_H

#include "Emetteur.h"

class FunRadio : public Emetteur {
public:
    FunRadio(const std::string& msg);
    void Diffuser() override;
};

#endif
