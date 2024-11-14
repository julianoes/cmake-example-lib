#include "example-lib/example-lib.hpp"
#include <iostream>

namespace example_lib {

void hello_lib(unsigned times)
{
    for (unsigned i = 0; i < times; ++i) {
        std::cout << "Hello lib!" << std::endl;
    }
}

} // namespace example_lib
