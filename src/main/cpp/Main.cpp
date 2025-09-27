#include "../include/HelloWorld.h"

using std::cout;
using std::endl;

/**
 * a single entry point for all our CPP work (to avoid many main()s confusing the linker)
 *
 * @param argc the number of values within argv
 * @param argv an array of the command-line args passed in via command-line
 * @return the exit code for the application
 */
int main(int argc, char **argv) {
    cout << "starting generic main" << endl;
    const int result = local::HelloWorld::main(argc, argv);
    cout << "result = " << result << endl;
    return result;
}
