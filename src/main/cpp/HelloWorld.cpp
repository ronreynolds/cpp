#include <iostream>     // cout
#include "../include/HelloWorld.h"

using std::cout;
using std::endl;
using std::string;
using local::HelloWorld;

int main() {
    HelloWorld thingy;
    cout << thingy.getMessage() << endl;
    thingy.setMessage("Goodbye World");
    cout << thingy.getMessage() << endl;
    return 0;
}

