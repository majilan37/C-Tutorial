#include <iostream>

int main()
{
    // foreach loop is a loop that eases the traversal over an iterable data set
    std::string students[] = {"Majilan", "Amain", "Said", "Sandy"};

    for (std::string student : students)
    {
        std::cout << student << "\n";
    }

    int grades[] = {34, 58, 49, 67, 45};

    for (int grade : grades)
    {
        std::cout << grade << "\n";
    }

    return 0;
}