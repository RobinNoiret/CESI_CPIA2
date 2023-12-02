#include "Application.h"
#include "Cesar.h"
#include "FileManager.h"
#include <iostream>
#include <exception>

void Application::run() {
    std::string filePath;
    std::cout << "Enter the file path: ";
    std::cin >> filePath;

    std::string action;
    std::cout << "Do you want to (encrypt) or (decrypt)? ";
    std::cin >> action;

    int shift;
    std::cout << "Enter the Caesar cipher shift value: ";
    std::cin >> shift;

    try {
        std::string content = FileManager::readFile(filePath);

        if (action == "encrypt") {
            std::string encrypted = Cesar::encrypt(content, shift);
            std::cout << "Encrypted text: " << encrypted << std::endl;
        }
        else if (action == "decrypt") {
            std::string decrypted = Cesar::decrypt(content, shift);
            std::cout << "Decrypted text: " << decrypted << std::endl;
        }
        else {
            std::cout << "Invalid action selected. Please choose 'encrypt' or 'decrypt'." << std::endl;
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
