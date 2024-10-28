#include <iostream>

int main()
{
    // memory address is a location in memory (RAM) where data is stored
    // a memory address can be accessed with & (address-of operator)

    std::string name = "Med";
    int age = 22;
    bool married = false;

    std::cout << &name << "\n";    // 32 bytes
    std::cout << &age << "\n";     // 4 bytes
    std::cout << &married << "\n"; // 1 bytes

    // the gap between "name" and "age" is 4 because integers takes 4 bytes of memory
    // the gap between "age" and "married" is only 1 because booleans take only 1 bytes of memory

    return 0;
}