#include <iostream>

int main()
{

    // array = a data structure that can hold multiple values
    // values are accessed by an index number (kind of like a variable that holds multiple values)

    // std::string car[] = {"Corvette", "Mustang", "Camry"};
    std::string car[3];

    car[0] = "Camaro";

    std::cout << car[0] << "\n";
    std::cout << car[1] << "\n";
    std::cout << car[2] << "\n";

    double prices[] = {5.00, 7.50, 9.99, 15};

    std::cout << prices[0] << "\n";
    std::cout << prices[1] << "\n";
    std::cout << prices[2] << "\n";
    std::cout << prices[3] << "\n";

    std::cout << prices;

    return 0;
}