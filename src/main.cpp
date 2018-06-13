#include <string>
#include <directory.h>

main::main()
{
    string ROOT_NAME = "/";
    // create the root directory
    directory root(ROOT_NAME);

    // create util for this fs
    util utilities(*root);

    // keep track of the current directory
    directory* currentdir = root;

}
