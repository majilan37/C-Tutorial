#include <iostream>

void printInfo(const std::string name, const int age);
int main()
{

    // const keyword is keyword that is effectively read-only
    // code is more secure & conveys intent useful for references and pointers

    std::string name = "Med";
    int age = 22;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name, const int age)
{
    // can't mutate the values any more after adding const keyword
    // name = " ";
    // age = 0;

    std::cout << name << "\n";
    std::cout << age << "\n";
}