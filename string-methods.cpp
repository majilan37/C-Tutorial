#include <iostream>

int main()
{

    std::cout << "Enter you name: ";
    std::string name;

    std::getline(std::cin, name);

    // if (name.empty())
    // {
    //     std::cout << "Please enter your name";
    // }
    // else if (name.length() > 12)
    // {
    //     std::cout << "Your name is too long";
    // }
    // else
    // {
    //     std::cout << "Welcome " << name;
    // }

    // name.length();             // return length of string
    // name.empty();              // Check string if empty;
    // name.clear();              // clear string
    // name.append("@gmail.com"); // Add string to the end of string
    // name.at(0);                // return char at the given index
    // name.insert(0, "@"); // insert string at given index

    // name.find(' '); // return the index of given char
    name.erase(0, 3); // remove part of string

    std::cout << "Hello  " << name;
    return 0;
}
