#include "HelloWorld.h"
#include <cassert>

class Test {
public:
    static void getMessage(local::HelloWorld& thing) {
        assert(thing.getMessage() == "Hello, World");
    }
};

int main() {
    local::HelloWorld thingy;
    Test::getMessage(thingy);
    return 0;
}