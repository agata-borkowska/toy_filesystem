#include <string>
#include <directory.h>

main::main()
{
    string ROOT_NAME = "/";
    // create the root directory
    directory root(ROOT_NAME);

    // keep track of the current directory
    directory* currentdir = root;
}
