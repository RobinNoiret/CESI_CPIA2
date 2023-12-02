#ifndef NRJ_H
#define NRJ_H

#include "Emetteur.h"

class NRJ : public Emetteur {
public:
    NRJ(const std::string& msg);
    void Diffuser() override;
};

#endif
