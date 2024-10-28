#include <iostream>

int main()
{
    int age;

    std::cout << "What's your age ?: ";
    std::cin >> age;

    if (age < 0)
    {

        std::cout << "You have'nt been born yet";
    }
    else if (age < 18)
    {
        std::cout << "Your are minor";
    }
    else
    {
        std::cout << "Your are major";
    }

    return 0;
}