#include <string>
#include "directory.h"
#include "util.h"

int main() {
        std::string ROOT_NAME = "/";
        // create the root directory
        directory root(ROOT_NAME);

        // create util for this fs
        util utilities(&root);
        //utilities::add_file("file1");

        // keep track of the current directory
        // directory* currentdir = &root;
}
