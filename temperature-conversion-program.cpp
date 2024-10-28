#include <iostream>

int main()
{

    double temp;
    char unit;

    std::cout << "****** Temperature ******* \n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit you like to convert to ? ";

    std::cin >> unit;

    switch (unit)
    {
    case 'F':
    case 'f':
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature in Fahrenheit is " << temp << "F";
        break;

    case 'C':
    case 'c':
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << "Temperature in Celsius is " << temp << "C";
        break;

    default:

        std::cout << "Please enter a valid unit";
        break;
    }

    return 0;
}