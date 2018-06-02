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

    protected:

    private:
        string name;
        metadata md;
        std::vector<directory> dirs;
        std::vector<file> files;
};

#endif // DIRECTORY_H
