#ifndef UTIL_H
#define UTIL_H
#include <string>
#include "directory.h"

class util
{
    public:
        util(directory* root);
        bool add_file(file* file, directory* dir);
        bool add_file(std::string file_name);
        bool add_dir(directory* newdir, directory* parent_dir);
        bool add_dir(std::string dir_name);
        bool remove_file(file* file);
        bool remove_directory(directory* dir);
        bool cd(directory* dir);
        bool cd(std::string dirname);
        directory* getcurrentdir();
        void list();

    protected:

    private:
        directory* currentdir;
        util();
};

#endif // UTIL_H
