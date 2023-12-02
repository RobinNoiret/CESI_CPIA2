#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>

class FileManager {
public:
    static std::string readFile(const std::string& filePath);
};

#endif

