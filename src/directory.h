#ifndef DIRECTORY_H
#define DIRECTORY_H
#include <string>
#include <vector>
#include "metadata.h"
#include "file.h"

class directory
{
    public:
        directory(string name);
        string getname();

    protected:

    private:
        string name;
        metadata md;
        std::vector<directory> childdirs;
        std::vector<file> files;
};

#endif // DIRECTORY_H
