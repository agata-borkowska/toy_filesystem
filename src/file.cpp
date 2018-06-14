#include "file.h"

file::file(std::string key)
{
    name = key;
    //metadata md();
}

std::string file::getname(){
    return name;
}
