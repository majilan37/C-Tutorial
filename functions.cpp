#include <iostream>

void happyBirthDay(std::string name, int age);

int main()
{
    // function = a block of reusable code

    std::string name = "Maji";
    int age = 21;

    happyBirthDay(name, age);

    return 0;
}

void happyBirthDay(std::string name, int age)
{
    std::cout << "Happy birth day to you " << name << "\n";
    std::cout << "Happy birth day to you " << name << "\n";
    std::cout << "Happy birth day to you " << name << "\n";
    std::cout << "Happy birth day to you " << name << "\n";
    std::cout << "Your age " << age << "\n";
};
