#include <iostream>

int main()
{

    // && = check if 2 conditions are true
    // || = check if one of conditions is true
    // ! = reverse the logical state (true to false || false to true)

    int temp;

    std::cout << "Enter Temperature: ";
    std::cin >> temp;

    // if (temp > 0 && temp < 30)
    // {
    //     std::cout << "Temperature is good";
    // }
    // else
    // {
    //     std::cout << "Temperature is bad";
    // }

    if (temp <= 0 || temp >= 30)
    {
        std::cout << "Temperature is bad";
    }
    else
    {
        std::cout << "Temperature is good";
    }

    std::cout << "\n";

    bool isSunny = true;

    if (!isSunny)
    {
        std::cout << "Not Sunny";
    }
    else
    {
        std::cout << "Sunny";
    }

    return 0;
}