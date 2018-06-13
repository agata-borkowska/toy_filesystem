#ifndef FILE_H
#define FILE_H
#include <string>
#include "metadata.h"

class file {
    public:
        file(std::string key);
        std::string getname();

    protected:

    private:
        std::string name;
        // metadata md;
};

#endif // FILE_H
