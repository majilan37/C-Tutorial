#include <iostream>

int main()
{
    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)

    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " m" << '\n';

    const int SPEED_OF_LIGHT = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    return 0;
}