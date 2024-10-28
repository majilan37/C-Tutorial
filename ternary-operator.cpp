#include <iostream>

int main()
{

    // Ternary operator is replacement to an if/else statement

    // std::cout << "Enter your age: ";
    // int age;

    // std::cin >> age;

    // age >= 18 ? std::cout << "You are major" : std::cout << "You are minor";

    int number = 100000000;
    number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

    bool isMarried = true;

    // isMarried ? std::cout << "Your married" : std::cout << "Your not married";
    std::cout << (isMarried ? "Your married" : "Your not married");

    return 0;
}