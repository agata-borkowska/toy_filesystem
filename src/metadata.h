#ifndef METADATA_H
#define METADATA_H
#include <string>
using namespace std;


class metadata
{
    public:

    protected:
        string getname();
        int getsize();
        int recalcsize();

    private:
        string name;
        int size;
};

#endif // METADATA_H
