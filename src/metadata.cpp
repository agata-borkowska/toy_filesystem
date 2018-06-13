#include "metadata.h"

metadata::metadata(std::string key, directory* dir) {
    name = key;
    parentdir = dir;
}

int metadata::getsize()
{
    return metadata::size;
}

int metadata::recalcsize()
{
    return 0;
}
