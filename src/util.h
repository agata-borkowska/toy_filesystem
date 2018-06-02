#ifndef UTIL_H
#define UTIL_H


class util
{
    public:
        bool add_file(file* file, directory* dir);
        bool add_dir(directory* newdir, directory* parent_dir);
        bool remove_file(file* file);
        bool remove_directory(directory* dir);
        bool cd(directory* dir)

    protected:

    private:
        directory* currentdir;
        util();
};

#endif // UTIL_H
