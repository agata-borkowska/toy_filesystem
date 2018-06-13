#include "file.h"

file::file(std::string key)
{
    name = key;
    //metadata md();
}

string file::getname(){
    return name;
}
