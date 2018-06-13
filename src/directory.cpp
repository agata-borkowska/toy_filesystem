#include <string>
#include "metadata.h"
#include "directory.h"

directory::directory(string key)
{
    metadata md(key, util::getcurrentdir());
}

directory::getname() {
    return name;
}
