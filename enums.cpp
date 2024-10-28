#include <iostream>

enum Day
{
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};

int main()
{
    // enums a user-defined data type that consists of paired name-integer constants.
    // great if have a set of potential options.

    Day toady = monday;
    std::cout << "Day: " << toady << "\n";

    switch (toady)
    {
    case sunday:
        std::cout << "It's Sunday\n";
        break;

    case monday:
        std::cout << "It's Monday\n";
        break;

    case tuesday:
        std::cout << "It's Tuesday\n";
        break;

    case wednesday:
        std::cout << "It's Wednesday\n";
        break;

    case thursday:
        std::cout << "It's Thursday\n";
        break;

    case friday:

        std::cout << "It's Friday\n";
        break;

    case saturday:
        std::cout << "It's Saturday\n";
        break;

    default:
        break;
    }

    return 0;
}