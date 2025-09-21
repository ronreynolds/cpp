#include "../../main/include/HelloWorld.h"  // YUCK!!
#include <cassert>

namespace local {
    class Test {
    public:
        static void getMessage(HelloWorld& thing) {
            assert(thing.getMessage() == "Hello World");
            assert(thing.setMessage("Goodbye world!").getMessage() == "Goodbye world!");
        }
    };
}

int main() {
    local::HelloWorld thingy;
    local::Test::getMessage(thingy);
    return 0;
}
