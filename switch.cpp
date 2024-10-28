#include <iostream>

int main()
{

    // Switch is an alternative to using many "else if" statements

    std::cout << "Please enter a month number: ";
    int month;

    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "This January";
        break;

    case 2:
        std::cout << "This February";
        break;

    case 3:
        std::cout << "This is March";
        break;

    case 4:
        std::cout << "This is April";
        break;

    case 5:
        std::cout << "This is May";
        break;

    case 6:
        std::cout << "This is Juin";
        break;

    case 7:
        std::cout << "This is July";
        break;

    case 8:
        std::cout << "This is August";
        break;

    case 9:
        std::cout << "This is September";
        break;

    case 10:
        std::cout << "This is October";
        break;

    case 11:
        std::cout << "This is November";
        break;

    case 12:
        std::cout << "This is september";
        break;

    default:
        std::cout << "Please enter in only numbers (1-12)";
        }

    return 0;
}