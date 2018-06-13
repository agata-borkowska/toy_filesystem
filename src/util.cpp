#include <iostream>
#include "util.h"

util::util(directory* root) {
    //ctor
    currentdir = root;
}

util::getcurrentdir() {
    return currentdir;
}

util::list() {
    for (auto& dir : dirs) {
        std::cout << "/" << dir.getname() << std::endl;
    }
    for (auto& file : files) {
        std::cout << file.getname() << std::endl;
    }
}

util::cd(directory* dir) {
    // TODO: check if dir exists
    currentdir = dir;
    return true;
}

util::cd(string dirname) {
    bool found = false;
    for(auto& dir : dirs) {
        if (dirname.compare(dir.getname()) == 0) {
            found = util::cd(&dir);
            if (found) {
                return true;
            }
        }
    }
    return found;
}
