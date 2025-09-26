#include "../include/HelloWorld.h"
#include <iostream>

namespace local {
    using std::cout;
    using std::endl;
    using std::string;

    int HelloWorld::main(int argc, char** argv) {
        HelloWorld thingy;
        cout << thingy.getMessage() << endl;
        thingy.setMessage("Goodbye World");
        cout << thingy.getMessage() << endl;
        return 0;
    }
}