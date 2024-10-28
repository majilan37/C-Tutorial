#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    // Namespaces providers a solution for preventing name conflicts in larger projects.
    // Each entity need a unique name.
    // A namespace allows for identically named entities as long as the namespaces are different.

    // Global declaration:  (using namespace first;)
    int x = 0;

    std::cout << x << "\n";
    std::cout << first::x << "\n";
    std::cout << second::x << "\n";

    return 0;
}