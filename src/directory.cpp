#include <string>
#include "metadata.h"
#include "directory.h"

directory::directory(std::string key)
{
    name = key;
    //metadata md(key, util::getcurrentdir());
}

std::string directory::getname() {
    return name;
}
