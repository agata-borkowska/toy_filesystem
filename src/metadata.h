#ifndef METADATA_H
#define METADATA_H
#include <string>
#include "directory.h"
#include "file.h"


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
