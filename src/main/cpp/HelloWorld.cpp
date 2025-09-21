#include <iostream>     // cout
#include <stdlib.h>     // std namespace
#include "HelloWorld.h" // our class

using namespace std;  // so we don't have to scope with std:: everywhere

int main() {
    local::HelloWorld thingy;
    cout << thingy.getMessage() << endl;
    return 0;
}

string local::HelloWorld::getMessage() {
    return string("Hello, World");
}

