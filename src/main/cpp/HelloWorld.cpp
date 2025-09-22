#include "HelloWorld.h"
#include <iostream>     // cout

using std::cout;
using std::endl;
using std::string;
using local::HelloWorld;


int main() {
    HelloWorld thingy;
    cout << thingy.getMessage() << endl;
    thingy.setMessage("Goodbye World");
    cout << thingy.getMessage() << endl;
}
