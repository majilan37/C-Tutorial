#include <iostream>

int main()
{

    // dynamic memory is a memory that is allocated after the program is already compiled & running.
    // Use the 'new' operator to allocate memory in the heap rather than the stack.
    // Useful when we don't know how much memory we will need. Makes our programs more flexible,
    // specially when accepting user input.

    int *pNum = nullptr;

    pNum = new int;
    *pNum = 21;

    std::cout << "address: " << pNum << '\n';
    std::cout << "address: " << *pNum << '\n';

    delete pNum; // Good practice is to use delete operator after you use new

    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in ? : ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}