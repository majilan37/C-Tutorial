#include <iostream>

template <typename T, typename K>
auto max(T x, K y)
{
    return x > y ? x : y;
}

int main()
{

    // function template describes what a function looks like.
    // Can be used to generate as many overloaded functions as needed.
    // Each using different data type

    std::cout << max(1.1, 2.2) << "\n";

    return 0;
}
