#include <string>
#include "directory.h"

directory::directory(std::string key)
{
    name = key;
    //metadata md(key, util::getcurrentdir());
}

std::string directory::getname() {
    return name;
}

std::vector<directory> directory::getchilddirs() {
    return childdirs;
}

std::vector<file> directory::getfiles() {
    return files;
}
