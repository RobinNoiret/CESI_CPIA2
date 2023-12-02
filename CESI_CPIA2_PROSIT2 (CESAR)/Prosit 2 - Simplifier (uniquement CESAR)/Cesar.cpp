#include "Cesar.h"
#include <cctype>

std::string Cesar::encrypt(const std::string& text, int shift) {
    std::string encryptedText = text;
    for (char& c : encryptedText) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            c = static_cast<char>((c - base + shift) % 26 + base);
        }
    }
    return encryptedText;
}

std::string Cesar::decrypt(const std::string& text, int shift) {
    return encrypt(text, 26 - (shift % 26)); // Decrypting is the reverse of encrypting
}
