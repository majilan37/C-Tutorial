#include <iostream>

int main()
{

    // sizeof() = determins the size in bytes of a: variable, data type, class, objects, etc...
    std::string name = "Mohamed majilan";
    double gpa = 132122454235324.5434234532;
    char grad = 'A';
    bool maried = true;
    char grades[] = {'C', 'B', 'L', 'A', 'U', 'E'};
    std::string students[] = {
        "Spongebob",
        "Patrick",
        "David",
        "Josef",
    };

    std::cout << sizeof(gpa) << " bytes \n";
    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(grad) << " bytes\n";
    std::cout << sizeof(maried) << " bytes\n";
    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(std::string) << " bytes\n";

    // To find the length of an array size(array) / sizeof(datatype)

    std::cout << sizeof(grades) / sizeof(char) << " elements \n";
    std::cout << sizeof(students) / sizeof(std::string) << " elements \n";

    return 0;
}