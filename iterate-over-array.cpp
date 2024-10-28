#include <iostream>

int main()
{

    std::string students[] = {"Mohamed", "Amin", "Yassine"};

    int length = sizeof(students) / sizeof(std::string);

    for (int i = 0; i < length; i++)
    {
        std::cout << students[i] << "\n";
    }

    return 0;
}