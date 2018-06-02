#include <string>
#include "metadata.h"
#include "directory.h"

directory::directory(string key)
{
    name = key;
}

directory::~directory()
{
    // destruct all contents
    for (auto file : files) {
        ~file();
    }
    for (auto dir : dirs) {
        ~dir();
    }
    ~md();
}
