#include <string>
#include "directory.h"

directory::directory(char[] key)
{
    name = key;
}

directory::~directory()
{
    // destruct all contents
    for (auto file : files) {
        ~file;
    }
    for (auto dir : dirs) {
        ~dir;
    }
}
