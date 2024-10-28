#include <iostream>

int main()
{
    // Null value is a special value that means something has no value.
    // When a pointer is holding a null value, that pointer is not pointing at anything (null pointer)

    // "nullptr" is a special keyword represents a null pointer literal

    // "nullptr"s are helpful when determining if an address was successfully assigned to a pointer

    // When using pointers, be careful that your code isn't dereferencing null or pointing to free memory
    // this will lead to undefined behavior

    int *pointer = nullptr;
    int x = 123;

    // pointer = &x;

    if (pointer == nullptr)
    {
        std::cout << "Pointer not assigned \n";
        std::cout << *pointer;
    }
    else
    {
        std::cout << "Pointer assigned \n";
    }

    return 0;
}