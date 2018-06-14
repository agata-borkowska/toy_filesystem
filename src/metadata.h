#ifndef METADATA_H
#define METADATA_H
#include <string>
#include "file.h"

class directory;

class metadata
{
    public:
        metadata(std::string key, directory* parentdir);

    protected:
        std::string getname();
        int getsize();
        int recalcsize();

    private:
        std::string name;
        int size;
        directory* parentdir;
};

#endif // METADATA_H
