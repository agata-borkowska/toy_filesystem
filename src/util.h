#ifndef UTIL_H
#define UTIL_H
#include <string>

class util
{
    public:
        util(directory* root);
        bool add_file(file* file, directory* dir);
        bool add_dir(directory* newdir, directory* parent_dir);
        bool remove_file(file* file);
        bool remove_directory(directory* dir);
        bool cd(directory* dir);
        bool cd(string dirname);
        directory* getcurrentdir();
        void list();

    protected:

    private:
        directory* currentdir;
        util();
};

#endif // UTIL_H
