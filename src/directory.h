#ifndef DIRECTORY_H
#define DIRECTORY_H
#include <metadata.h>
#include <file.h>

class directory
{
    public:
        directory(string name);
        virtual ~directory();

    protected:
        bool add_dir(directory dir);
        bool add_file(file f);

    private:
        string name;
        metadata md;
        directory dirs[];
        file files[];
};

#endif // DIRECTORY_H
