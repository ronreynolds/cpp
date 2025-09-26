#include "../include/HelloWorld.h"
/**
 * a single entry point for all our CPP work (to avoid many main()s confusing the linker)
 *
 * @param argc the number of values within argv
 * @param argv an array of the command-line args passed in via command-line
 * @return the exit code for the application
 */
int main(int argc, char** argv) {
   const int result = local::HelloWorld::main(argc, argv);
   return result;
}