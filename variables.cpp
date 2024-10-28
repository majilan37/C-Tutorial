#include <iostream>

int main()
{
    int x; // declaration
    x = 1;

    int y = 6;

    int sum = x + y;

    std::cout << x;
    std::cout << "\n";
    std::cout << y;
    std::cout << "\n";
    std::cout << sum << "\n";

    // integer (whole number)
    int a = 5;
    int age = 22;
    int year = 2021;
    int days = 365;

    // double ( number including decimal)
    double b = 5.5;
    double price = 10.99;

    std::cout
        << a << "\n"
        << b << "\n"
        << price << "\n";

    // char (single character)
    char grade = 'A';
    char inital = 'B';
    char currency = '$';

    std::cout << grade << "\n"
              << inital << "\n";

    // boolean (true or false)
    bool student = false;
    bool isSignedIn = true;
    bool isPoweredIn = true;
    bool forSale = false;

    std::cout << isPoweredIn << "\n";

    // string (objects that represents a sequence of text)
    std::string name = "Majilan";
    std::string currentDay = "Monday";
    std::string food = "Pizza";

    std::cout << name << '\n'
              << currentDay << '\n'
              << food << "\n";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}