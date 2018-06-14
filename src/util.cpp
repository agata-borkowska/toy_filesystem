#include <iostream>
#include "util.h"

util::util(directory* root) {
    //ctor
    currentdir = root;
}

directory* util::getcurrentdir() {
    return currentdir;
}

void util::list() {
    for (auto& dir : currentdir->getchilddirs()) {
        std::cout << "/" << dir.getname() << std::endl;
    }
    for (auto& file : currentdir->getfiles()) {
        std::cout << file.getname() << std::endl;
    }
}

bool util::cd(directory* dir) {
    // TODO: check if dir exists
    currentdir = dir;
    return true;
}

bool util::cd(std::string dirname) {
    bool found = false;
    for(auto& dir : currentdir->getchilddirs()) {
        if (dirname.compare(dir.getname()) == 0) {
            found = util::cd(&dir);
            if (found) {
                return true;
            }
        }
    }
    return found;
}
