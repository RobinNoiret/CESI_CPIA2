#ifndef CESAR_H
#define CESAR_H

#include <string>

class Cesar {
public:
    static std::string encrypt(const std::string& text, int shift);
    static std::string decrypt(const std::string& text, int shift);
};

#endif

