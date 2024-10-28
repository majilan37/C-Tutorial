#include <iostream>

int main()
{
    // do while loop : do some block of code first, and then repeat again if a condition is true

    int number;

    do
    {
        std::string value;
        std::cout << "Enter a positive number: ";
        std::getline(std::cin, value);

        try
        {
            number = std::stoi(value);
        }
        catch (const std::invalid_argument &e)
        {
            std::cout << "Invalid number, please try again\n";
            number = -1;
        }

    } while (number < 0);

    std::cout << "Value of number: " << number;

    return 0;
}
