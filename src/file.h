#ifndef FILE_H
#define FILE_H
#include <string>
#include "metadata.h"

class file {
    public:
        file(string key);
        string getname();

    protected:

    private:
        string name;
        metadata md;
};

#endif // FILE_H
