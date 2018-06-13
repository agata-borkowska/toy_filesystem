#ifndef DIRECTORY_H
#define DIRECTORY_H
#include <string>
#include <vector>
#include "metadata.h"
#include "file.h"

class directory
{
    public:
        directory(std::string name);
        std::string getname();

    protected:

    private:
        std::string name;
        // metadata md;
        std::vector<directory> childdirs;
        std::vector<file> files;
};

#endif // DIRECTORY_H
