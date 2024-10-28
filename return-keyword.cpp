#include <iostream>
#include <cmath>

double square(double length);
double cube(double length);
std::string fullName(std::string name, std::string surname);

int main()
{
    // return keyword returns a value back to the spot where you called the encompassing function

    double area = square(5.0);
    double volume = cube(5.0);

    std::cout
        << "Area: " << area << " cm^2";

    std::cout << "\n";

    std::cout
        << "Volume: " << area << " cm^3";

    std::cout << "\n";

    std::cout << fullName("Mohamed", "Majilan");

    return 0;
}

double square(double length)
{

    return pow(length, 2);
}

double cube(double length)
{

    return pow(length, 3);
}

std::string fullName(std::string name, std::string surname)
{
    return "Your full name is " + name + " " + surname;
}