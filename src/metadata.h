#ifndef METADATA_H
#define METADATA_H
#include <string>
#include "directory.h"
#include "file.h"


class metadata
{
    public:
        metadata(string name, directory* parentdir)

    protected:
        string getname();
        int getsize();
        int recalcsize();

    private:
        string name;
        int size;
        directory* parentdir;
};

#endif // METADATA_H
