#include "./hello_world.h"
#include <string>

// Use everything from the 'std' namespace.
// This lets us write 'string' instead of 'std::string'.
using ::std::string;

namespace hello_world {

// Define the function itself. This could have also been written as:
// std::string hello_world::hello()
string hello() { return "Hello, World!"; }
} // namespace hello_world
