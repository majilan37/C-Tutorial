#include <iostream>

int main()
{
    // int x = 0;

    // while (x <= 5)
    // {
    //     std::cout << "Current value of x is: " << x << "\n";
    //     x++;
    // }

    // std::cout << "Max value of x reached: " << x;

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    while (name.empty())
    {
        std::cout << "Please Enter you name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Your name is " << name;

    return 0;
}