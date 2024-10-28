#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;

// typedef std::string string;
// typedef int number;
// typedef bool boolean;

using string = std::string;
using number = int;

int main()
{

    // typedefs is reserved keyword used to create an additional name (alias) for another data type.
    // New identifier for an existing type helps with readability and reduces typos
    // Use when there is a clear benefit.
    // replaced with 'using' keyword (works better with templates).

    string name = "Mohamed";
    number age = 22;

    std::cout << name;

    return 0;
}