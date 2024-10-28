#include <iostream>

int main()
{
    // Pseudo-random = NOT truly random (but close)

    srand(time(NULL));

    int number = (rand() % 6) + 1;  // Random number between 1-6
    int number2 = (rand() % 6) + 1; // Random number between 1-6
    int number3 = (rand() % 6) + 1; // Random number between 1-6

    std::cout << number << " " << number2 << " " << number3;

    return 0;
}